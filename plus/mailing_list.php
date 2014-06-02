<?php
require_once(dirname(__FILE__).'/../include/common.inc.php');
if(!isset($dopost)){
	$dopost = '';
}
if($dopost=="save"){
	if(!empty($email)){
		if(!preg_match("/^(\w)+(\.\w+)*@(\w)+((\.\w+)+)$/",$email)){
			exit('Please enter a valid email!');
		}
		$m_file = DEDEDATA."/mail/".$cfg_mailing_list;
		if (preg_match("/$email/i", file_get_contents($m_file)))
		{
			echo $email.' Already exists!';
		}
		else
		{
			$fp = fopen($m_file,'a');
			flock($fp,3);
			fwrite($fp,$email.',');
			fclose($fp);
			echo $email.' Join success';
			exit();
		}
	}
}
else
{
	echo 'Enter Email Join Us!';
}
?>