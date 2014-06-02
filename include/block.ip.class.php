<?php

$oBlock_ip = new Block_IP();
$oBlock_ip->checkIP();

class Block_IP{
     var $networkArray = array(); //"192.168.1.1","210.10.2.1-20","222.34.4.*"
     var $dsql;
    
    /**
     * php5构造函数
     */
     function __construct(){
        $this -> getAllBlockIP();
         }
     // php4构造函数
    function Block_IP()
    {
         $this -> __construct();
         }
    
     function __destruct(){
         }
    
     private function netMatch($network, $ip){
         $network = trim($network);
         $ip = trim($ip);
         $result = false;
         // IP range : 174.129.0.0 - 174.129.255.255
        if (false !== ($pos = strpos($network, "-"))){
             $from = ip2long(trim(substr($network, 0, $pos)));
             $to = ip2long(trim(substr($network, $pos + 1)));
             $ip = ip2long($ip);
             $result = ($ip >= $from and $ip <= $to);
             // CIDR : 174.129.0.0/16
        }else if (false !== strpos($network, "/")){
             list ($net, $mask) = explode ('/', $network);
             $result = (ip2long($ip) & ~((1 << (32 - $mask)) - 1)) == ip2long($net);
             // single IP
        }else{
             $result = $network === $ip;
             }
         return $result;
         }
    
     private function getAllBlockIP(){
         $query = "SELECT * FROM `#@__ip_address`";
         $this -> dsql = $GLOBALS['dsql'];
         $this -> dsql -> SetQuery($query);
         $this -> dsql -> Execute('al');
         while($row = $this -> dsql -> GetArray('al'))
        {
             array_push($this -> networkArray, $row['startIP'] . "-" . $row['endIP']);
             }
         $this -> dsql -> FreeResult('al');
         }
    
     public function checkIP(){
         $IsJoined = true;
         // 取得用户ip
        $Ip = $this -> get_client_ip();
         // 剔除黑名单中的IP区段
        if ($this -> networkArray){
             foreach($this -> networkArray as $value){
                 if ($this -> netMatch($value, $Ip)){
                     $IsJoined = false;
                     break;
                     }
                 }
             }
         // 如果在ip黑名单中就执行如下操作
        if(!$IsJoined){
             echo "IP Error";
             exit;
             }
         }
    
     private function get_client_ip(){
         if (getenv("HTTP_CLIENT_IP") && strcasecmp(getenv("HTTP_CLIENT_IP"), "unknown"))
             $ip = getenv("HTTP_CLIENT_IP");
         else if (getenv("HTTP_X_FORWARDED_FOR") && strcasecmp(getenv("HTTP_X_FORWARDED_FOR"), "unknown"))
             $ip = getenv("HTTP_X_FORWARDED_FOR");
         else if (getenv("REMOTE_ADDR") && strcasecmp(getenv("REMOTE_ADDR"), "unknown"))
             $ip = getenv("REMOTE_ADDR");
         else if (isset($_SERVER['REMOTE_ADDR']) && $_SERVER['REMOTE_ADDR'] && strcasecmp($_SERVER['REMOTE_ADDR'], "unknown"))
             $ip = $_SERVER['REMOTE_ADDR'];
         else
             $ip = "unknown";
         return($ip);
         }
     }
?>