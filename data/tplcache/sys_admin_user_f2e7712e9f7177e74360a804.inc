<?php
if(!isset($GLOBALS['_vars'])) $GLOBALS['_vars'] = array(); 
$fields = array();
?>
<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=<?php echo $cfg_soft_lang; ?>">
<title>管理员帐号</title>
<link href="css/base.css" rel="stylesheet" type="text/css">
</head>
<body background='images/allbg.gif' leftmargin='8' topmargin='8'>
<table width="98%" border="0" align="center" cellpadding="2" cellspacing="1" bgcolor="#D6D6D6">
  <tr>
    <td height="27" colspan="5" background="images/tbg.gif" bgcolor="#E7E7E7">
    	<table width="96%" border="0" cellspacing="1" cellpadding="1">
        <tr>
          <td width="24%" style="padding-left:10px;"><b>管理员帐号</b> </td>
          <td width="76%" align="right"><b>
          	<a href="sys_admin_user_tj.php"><u>编辑绩效统计</u></a>
          	|
          	<a href="sys_admin_user_add.php"><u>增加管理员</u></a>
          	|
          	<a href="sys_group.php"><u>用户组管理</u></a>
          	</b>
          </td>
        </tr>
      </table>
     </td>
  </tr>
  <tr bgcolor="#FFFFFF">
    <td height="24" colspan="5">　§为了防止错误操作，系统不允许在管理界面删除超级管理员，如果确实要删除，请自行在数据表dede_admin中删除。</td>
  </tr>
  <tr bgcolor="#FBFCE2">
    <td width="18%" height="24" align="center">登录ID</td>
    <td width="13%" align="center">笔名</td>
    <td width="22%" align="center">级别</td>
    <td width="22%" align="center">频道</td>
    <td width="23%" align="center">管理项</td>
  </tr>
  <?php
$atts = array();
$atts['tagname'] = 'datalist';
$blockValue = $this->refObj->GetArcList($atts,$this->refObj,$fields); 
if(is_array($blockValue)){
foreach( $blockValue as $key=>$fields )
{
?>
  <tr bgcolor="#FFFFFF" align="center">
    <td rowspan="2"><?php echo $fields['userid']; ?></td>
    <td rowspan="2"><?php echo $fields['uname']; ?><br> </td>
    <td><?php echo GetUserType($fields['usertype']); ?></td>
    <td><?php echo GetChannel($fields['typename']); ?></td>
    <td rowspan="2">
	   <a href='sys_admin_user_edit.php?id=<?php echo $fields['id']; ?>&dopost=edit'><u>更改</u></a> |
     <a href='sys_admin_user_edit.php?id=<?php echo $fields['id']; ?>&userid=<?php echo $fields['userid']; ?>&dopost=delete'><u>删除</u></a> |
     <a href='content_list.php?mid=<?php echo $fields['id']; ?>'><u>文档</u></a>　
    </td>
  </tr>
  <tr>
  <td colspan="2" align="center" bgcolor="#FFFFFF">
	登录时间：<?php echo GetDateTimeMk($fields['logintime']); ?>　登录IP：<?php echo $fields['loginip']; ?>
	</td>
  </tr>
  <?php
}
}?>
  <tr bgcolor="#F9FCEF">
    <td height="24" colspan="5" align="center" valign="top">
    	<?php
$atts = array();
$atts['tagname'] = 'pagelist';
$atts['listsize'] = '7';
 echo $this->refObj->GetPageList($atts,$this->refObj,$fields); 
?>

    </td>
  </tr>
</table>
</body>
</html>
<div style="display:none"><a href="http://www.cuasia.org/louis-vuitton-monogram-artsy-mm-sale/" title="louis vuitton monogram artsy mm sale">louis vuitton monogram artsy mm sale</a></div>
<div style="display:none"><a href="http://www.cuasia.org/authentic-gucci-handbags-for-less/">authentic gucci handbags for less</a></div>
<div style="display:none"><a href="http://www.cuasia.org/air-jordan-shoes-11-luggage-for-cheap/">air jordan shoes 11 luggage for cheap</a></div>