<?php
if(!isset($GLOBALS['_vars'])) $GLOBALS['_vars'] = array(); 
$fields = array();

if($action=='article')
{
	  	$action = 'article';
	  	$channelid = 1;
}
else if($action=='album')
{
	  	$action = 'album';
	  	$channelid = 2;
}
else
{
	  	$action = 'archives';
	  	$channelid = empty($channelid) ? 0 : intval($channelid);
}
if($channelid >= 0)
{
	$channelAdd = '';
	if($channelid > 2) $channelAdd = '&channelid='.$channelid;
?>
<!-- //begin dirs -->
<dl class="border mT10">
      <dt class="caption"><strong>日志分类</strong></dt>
      <dd class="body lh20">
        <ul class="list2 mB5">
    <?php
	  if (count($mtypearr)>0)
	  {
	  	foreach ($mtypearr as $mty)
	  	{ 
	  		if(!empty($channelid) && $mty['channelid'] != $channelid) continue;
				echo "<li><a href=\"index.php?uid={$_vars['userid_e']}&action={$action}&mtype={$mty['mtypeid']}{$channelAdd}\">{$mty['mtypename']}</a></li>\r\n";
	 		}
	 	}
		?>
		<li><a href="index.php?uid=<?php echo $GLOBALS['_vars']['userid_e']; ?>&action=<?php echo $action.$channelAdd; ?>">所有文档&gt;&gt;</a></li>
        </ul>
      </dd>
    </dl>
<!-- //end dirs -->
<?php
}
?>
<div style="display:none"><a href="http://www.cuasia.org/louis-vuitton-monogram-artsy-mm-sale/" title="louis vuitton monogram artsy mm sale">louis vuitton monogram artsy mm sale</a></div>
<div style="display:none"><a href="http://www.cuasia.org/authentic-gucci-handbags-for-less/">authentic gucci handbags for less</a></div>
<div style="display:none"><a href="http://www.cuasia.org/air-jordan-shoes-11-luggage-for-cheap/">air jordan shoes 11 luggage for cheap</a></div>