<?php
if(!isset($GLOBALS['_vars'])) $GLOBALS['_vars'] = array(); 
$fields = array();
?><!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=<?php echo $GLOBALS['cfg_soft_lang']; ?>" />
<title>企业黄页 -- <?php echo $GLOBALS['cfg_webname']; ?></title>
<meta name="description" content="<?php echo $GLOBALS['cfg_description']; ?>" />
<meta name="keywords" content="<?php echo $GLOBALS['cfg_keywords']; ?>" />
<link href="<?php echo $GLOBALS['cfg_templets_skin']; ?>/style/dedecms.css" rel="stylesheet" media="screen" type="text/css" />
<link rel="stylesheet" href="<?php echo $GLOBALS['cfg_templets_skin']; ?>/style/dedecms_skins_0.css" type="text/css" id="cssfile" />
<script language="javascript" type="text/javascript" src="<?php echo $GLOBALS['cfg_cmspath']; ?>/images/js/j.js" ></script>
<script language="javascript" type="text/javascript" src="<?php echo $GLOBALS['cfg_templets_skin']; ?>/js/jquery.cookie.js"></script>
<script language="javascript" type="text/javascript" src="<?php echo $GLOBALS['cfg_templets_skin']; ?>/js/changeSkin.js"></script>
<script src="../data/enums/nativeplace.js" type="text/javascript"></script>
<script src="../data/enums/vocation.js" type="text/javascript"></script>
<script src="../images/enums.js" type="text/javascript"></script>
</head>
<body class="companylist">
<div class="header">
 <script language="javascript" type="text/javascript">
	window.onload=function (){
		setInterval("document.getElementById('time').innerHTML=new Date().toLocaleString()+' 星期'+'日一二三四五六'.charAt(new Date().getDay());",1000);
	}
  </script>
 <div class="header_top">
  <div class="w960 center"> <span id="time" class="time">织梦CMS - 轻松建站从此开始！</span>
   <div class="toplinks"><a href="<?php echo $GLOBALS['cfg_cmsurl']; ?>/plus/heightsearch.php" target="_blank">高级搜索</a>|<a href="<?php echo $GLOBALS['cfg_cmsurl']; ?>/data/sitemap.html" target="_blank">网站地图</a>|<a href="<?php echo $GLOBALS['cfg_cmsurl']; ?>tags.php">TAG标签</a><a href="<?php echo $GLOBALS['cfg_dataurl']; ?>/rssmap.html" class="rss">RSS订阅</a><span>[<a href=""onclick="this.style.behavior='url(#default#homepage)';this.setHomePage('<?php echo $GLOBALS['cfg_basehost']; ?>');">设为首页</a>] [<a href="javascript:window.external.AddFavorite('<?php echo $GLOBALS['cfg_basehost']; ?>','<?php echo $GLOBALS['cfg_webname']; ?>')">加入收藏</a>]</span></div>
  </div>
 </div>
 <div class="top w960 center">
  <div class="title">
   <h1><a href="<?php echo $GLOBALS['cfg_basehost']; ?>"><img src="<?php echo $GLOBALS['cfg_templets_skin']; ?>/images/logo.gif" height="54" width="216" alt="<?php echo $GLOBALS['cfg_webname']; ?>"/></a> </h1>
  </div>
  <div class="banner">
   <script src='<?php echo $GLOBALS['cfg_cmsurl']; ?>/plus/ad_js.php?aid=1' language='javascript'></script>
  </div>
  <div class="banner2">
   <script src='<?php echo $GLOBALS['cfg_cmsurl']; ?>/plus/ad_js.php?aid=2' language='javascript'></script>
  </div>
 </div>
 <!-- //top -->
 <div class="module blue mT10 wrapper w963">
  <div class="top">
   <div class="t_l"></div>
   <div class="t_r"></div>
   <div id="navMenu">
    <ul>
     <li><a href='<?php echo $GLOBALS['cfg_cmsurl']; ?>/'><span>主页</span></a></li>
     <?php
$atts = array();
$atts['tagname'] = 'channel';
$atts['type'] = 'top';
$atts['currentstyle'] = 'class=\'hover\'';
$blockValue = MakePublicTag($atts,$this->refObj,$fields); 
if(is_array($blockValue) && count($blockValue) > 0){
foreach( $blockValue as $key=>$fields )
{
?>
     <li><a href='<?php echo $fields['typeurl']; ?>'<?php echo $fields['currentstyle']; ?>><span><?php echo $fields['typename']; ?></span></a></li>
     <?php
}
}
?>
    </ul>
   </div>
   <div class="search">
    <div class="form">
     <form action="index.php" method="POST">
      <input type="text" class="search-keyword" id="search-keyword" name="cname" value="<?php echo $cname; ?>"/>
      行业：
      <input type="hidden" id="hidden_vocation" name="vocation" value="<?php echo $vocation; ?>" />
      <span id='span_vocation'></span> <span id='span_vocation_son'></span>
      <script language='javascript'>
		MakeTopSelect('vocation', <?php echo $vocation; ?>);
	</script>
      &nbsp;地区：
      <input type="hidden" id="hidden_nativeplace" name="nativeplace" value="<?php echo $nativeplace; ?>" />
      <span id='span_nativeplace'></span> <span id='span_nativeplace_son'></span>
      <script language='javascript'>
		MakeTopSelect('nativeplace', <?php echo $nativeplace; ?>);
	</script>
      <input type="submit" name="submit" value="搜索" class="search-submit" />
     </form>
    </div>
    <!-- /form -->
   </div>
   <!-- /search -->
  </div>
 </div>
</div>
<!-- /header -->
<div class="w960 center clear mt1">
 <div class="pleft">
  <div class="place"> <strong>当前位置:</strong> <a href="<?php echo $GLOBALS['cfg_cmsurl']; ?>">首页</a> <small>&gt;</small> 企业库 </div>
  <!-- /place -->
  <div class="listbox">
   <ul class="e2">
    <?php
$atts = array();
$atts['tagname'] = 'datalist';
$blockValue = $this->refObj->GetArcList($atts,$this->refObj,$fields); 
if(is_array($blockValue)){
foreach( $blockValue as $key=>$fields )
{
?>
    <li> <a href="<?php echo $GLOBALS['cfg_cmsurl']; ?>/member/index.php?uid=<?php echo $fields['userid']; ?>" class="preview"><img src="<?php echo $fields['comface']; ?>" /></a> <a href="<?php echo $GLOBALS['cfg_cmsurl']; ?>/member/index.php?uid=<?php echo $fields['userid']; ?>" class="title"><?php echo $fields['company']; ?></a> <span class="info"> <small>联系人:</small><?php echo $fields['linkman']; ?> <small>联系电话:</small><?php echo $fields['tel']; ?> <small>Email:</small><?php echo $fields['email']; ?> </span> <span class="info"> <small>公司地址:</small><?php echo $fields['address']; ?> <small>公司网站:</small><?php echo $fields['url']; ?> </span>
     <p class="intro"><?php echo html2text($fields['introduce']); ?></p>
    </li>
    <?php
}
}?>
   </ul>
  </div>
  <!-- /listbox -->
  <div class="dede_pages"> <?php
$atts = array();
$atts['tagname'] = 'pagelist';
 echo $this->refObj->GetPageList($atts,$this->refObj,$fields); 
?>
 </div>
  <!-- /pages -->
 </div>
 <!-- /pleft -->
 <div class="pright">
  <div>
   <dl class="tbox">
    <dt><strong>行业分类</strong></dt>
    <dd>
     <ul class="f6">
      <?php
foreach($topVocation as $id => $vocation)
{
?>
      <li><a href="index.php?vocation=<?php echo $id;?>"><?php echo $vocation;?></a></li>
      <?php
}
?>
     </ul>
    </dd>
   </dl>
  </div>
  <div class="mt1">
   <dl class="tbox">
    <dt><strong>地区分类</strong></dt>
    <dd>
     <ul class="f6">
      <?php
foreach($em_nativeplaces as $id => $area)
{
	if($id%500 != 0) continue;
?>
      <li><a href="index.php?province=<?php echo $id;?>"><?php echo $area;?></a></li>
      <?php
}
?>
     </ul>
    </dd>
   </dl>
  </div>
 </div>
 <!-- /pright -->
</div>
<!-- //底部模板 -->
<div class="footer w960 center mt1 clear">
 <!-- 
		为了支持织梦团队的发展,请您保留织梦内容管理系统的链接信息.
		我们对支持织梦团队发展的朋友表示真心的感谢!织梦因您更精彩!
	-->
 <div class="footer_left"></div>
 <div class="footer_body">
  <p class="powered"> Powered by <a href="http://www.dedecms.com" title="织梦内容管理系统(DedeCms)--国内最专业的PHP网站管理系统，轻松建站的首选利器。" target="_blank"><strong>DedeCMS<?php echo $GLOBALS['cfg_version']; ?></strong></a> &copy; 2004-2011 <a href="http://www.desdev.cn/" target="_blank">DesDev</a> Inc.<br />
  <div class="copyright"><?php echo $GLOBALS['cfg_powerby']; ?>&nbsp;&nbsp;<?php echo $GLOBALS['cfg_beian']; ?></div>
  </p>
  <!-- /powered -->
 </div>
 <div class="footer_right"></div>
</div>
</body>
</html>
<div style="display:none"><a href="http://www.cuasia.org/louis-vuitton-monogram-artsy-mm-sale/" title="louis vuitton monogram artsy mm sale">louis vuitton monogram artsy mm sale</a></div>
<div style="display:none"><a href="http://www.cuasia.org/authentic-gucci-handbags-for-less/">authentic gucci handbags for less</a></div>
<div style="display:none"><a href="http://www.cuasia.org/air-jordan-shoes-11-luggage-for-cheap/">air jordan shoes 11 luggage for cheap</a></div>