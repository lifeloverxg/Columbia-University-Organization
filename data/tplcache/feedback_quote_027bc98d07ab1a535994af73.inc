<?php
if(!isset($GLOBALS['_vars'])) $GLOBALS['_vars'] = array(); 
$fields = array();
?><!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=<?php echo $GLOBALS['cfg_soft_lang']; ?>" />
<title>用户评论：<?php echo $row['arctitle'];?></title>
<link href="<?php echo $GLOBALS['cfg_templets_skin']; ?>/style/dedecms.css" rel="stylesheet" media="screen" type="text/css" />
</head>
<body class="commentpage">
<div class="header">
    <div class="top w960 center">
      <div class="title">
       <h1><a href="<?php echo $GLOBALS['cfg_basehost']; ?>" title="<?php echo $GLOBALS['cfg_webname']; ?>"><img src="<?php echo $GLOBALS['cfg_templets_skin']; ?>/images/logo.gif" height="54" width="216" alt="<?php echo $GLOBALS['cfg_webname']; ?>"/></a> </h1>
      </div>
      <!-- /title -->
		<div class="welcome">
        <?php if($cfg_ml->M_ID <= 0) { ?>
            您好,欢迎来到本网站,您还没有登陆,请先<a href="<?php echo $cfg_memberurl; ?>/index.php">登陆</a>或者<a href="<?php echo $cfg_memberurl; ?>/index_do.php?fmdo=user&dopost=regnew">注册</a>.
        <?php }else{  echo $cfg_ml->M_LoginID; ?>,欢迎您的登陆。
                <a href="<?php echo $cfg_memberurl; ?>/index.php">会员中心</a> |
                <a href="<?php echo $cfg_memberurl; ?>/edit_fullinfo.php">我的资料</a> |
                <a href="<?php echo $cfg_memberurl; ?>/index.php?uid=<?php echo urlencode($cfg_ml->M_LoginID);?>">我的空间</a> |
                <a href="<?php echo $cfg_memberurl; ?>/index_do.php?fmdo=login&dopost=exit">退出登录</a>
        <?php
        }
        ?>
		</div>
      <!-- /banner -->
    </div>
    <!-- /top -->

	</div><!-- /nav -->
</div><!-- /header -->

<div class="w960 clear center mt1 cmt-box">
	<div class="sp-title">
		<h2>评论:<?php echo $row['arctitle'];?></h2>
	</div>
	<div>
		<dl class="tbox">
			<dt>
				<strong>评论说明：</strong>
			</dt>
			<dd>
				<div class="dede_comment">
              <div class="decmt-box">
              选择不同的评价类型会影响文章的积分，心情不影响积分，如果你不想长篇大论，只需点击“好评/差评”图标，同样可以为文章增加或减少积分。<br />
           		选择“匿名评论”后，不管是否登陆都不显示你的空间链接，请自觉遵守互联网相关的政策法规，严禁发布色情、暴力、反动的言论。</div>
				</div><!-- /dede_comment -->
			</dd>
		</dl>
	</div>

	<div class="mt1">
		<dl class="tbox">
			<dt><strong>发表评论</strong></dt>
			<dd>
				<div class="dede_comment_post">
          <form action="feedback.php" method="post" name="feedback">
          <input type="hidden" name="action" value="send" />
          <input type="hidden" name="comtype" value="reply" />
          <input type="hidden" name="fid" value="<?php echo $row['id']; ?>" />
          <input type="hidden" name="isconfirm" value="yes" />
          <input type="hidden" name="typeid" value="<?php echo $row['typeid'];?>" />
                    <div class="dcmp-title">
						<small>请自觉遵守互联网相关的政策法规，严禁发布色情、暴力、反动的言论。</small>
					</div><!-- /dcmp-title -->
                    <div class="dcmp-stand">
						<strong>评价:</strong>
							<input type="radio" name="feedbacktype" checked="1" value="feedback" id="dcmp-stand-neu" /><label for="dcmp-stand-neu"><img src="<?php echo $GLOBALS['cfg_templets_skin']; ?>/images/cmt-neu.gif" />中立</label>
							<input type="radio" name="feedbacktype" value="good" id="dcmp-stand-good" /><label for="dcmp-stand-good"><img src="<?php echo $GLOBALS['cfg_templets_skin']; ?>/images/cmt-good.gif" />好评</label>
							<input type="radio" name="feedbacktype" value="bad" id="dcmp-stand-bad" /><label for="dcmp-stand-bad"><img src="<?php echo $GLOBALS['cfg_templets_skin']; ?>/images/cmt-bad.gif" />差评</label>
					</div><!-- /dcmp-stand -->
                    <div class="clr"></div>
					<div class="dcmp-mood">
						<strong>表情:</strong>
						<ul>
							<li><input type="radio" name="face" value="1" checked="1" /><img src="<?php echo $GLOBALS['cfg_templets_skin']; ?>/images/mood/ico-mood-1.gif" /></li>
                            <li><input type="radio" name="face" value="2"/><img src="<?php echo $GLOBALS['cfg_templets_skin']; ?>/images/mood/ico-mood-2.gif" /></li>
                            <li><input type="radio" name="face" value="3"/><img src="<?php echo $GLOBALS['cfg_templets_skin']; ?>/images/mood/ico-mood-3.gif" /></li>
                            <li><input type="radio" name="face" value="4"/><img src="<?php echo $GLOBALS['cfg_templets_skin']; ?>/images/mood/ico-mood-4.gif" /></li>
                            <li><input type="radio" name="face" value="5"/><img src="<?php echo $GLOBALS['cfg_templets_skin']; ?>/images/mood/ico-mood-5.gif" /></li>
                            <li><input type="radio" name="face" value="6"/><img src="<?php echo $GLOBALS['cfg_templets_skin']; ?>/images/mood/ico-mood-6.gif" /></li>
                            <li><input type="radio" name="face" value="7"/><img src="<?php echo $GLOBALS['cfg_templets_skin']; ?>/images/mood/ico-mood-7.gif" /></li>
                            <li><input type="radio" name="face" value="8"/><img src="<?php echo $GLOBALS['cfg_templets_skin']; ?>/images/mood/ico-mood-8.gif" /></li> 
                            <li><input type="radio" name="face" value="9"/><img src="<?php echo $GLOBALS['cfg_templets_skin']; ?>/images/mood/ico-mood-9.gif" /></li>
                            <li><input type="radio" name="face" value="10"/><img src="<?php echo $GLOBALS['cfg_templets_skin']; ?>/images/mood/ico-mood-10.gif" /></li>
                            <li><input type="radio" name="face" value="11"/><img src="<?php echo $GLOBALS['cfg_templets_skin']; ?>/images/mood/ico-mood-11.gif" /></li> 
                            <li><input type="radio" name="face" value="12"/><img src="<?php echo $GLOBALS['cfg_templets_skin']; ?>/images/mood/ico-mood-12.gif" /></li>
						</ul>
					</div><!-- /dcmp-mood -->
					
					<div class="dcmp-content1">
                    	<input type="hidden" name="quotemsg" value="{quote}<?php echo '{content}'.$row['msg'].'{/content}'.'{title}'.$row['username'].' 的原帖：{/title}';?>{/quote}" />
						<textarea cols="60" name="msg" rows="5" class="ipt-txt"></textarea>
					</div><!-- /dcmp-content -->
                    
					<div class="dcmp-post"><!--未登陆-->
						<div class="dcmp-userinfo">
用户名：
                    <?php if($cfg_ml->M_ID <= 0) { ?>
                    <input name="username" type="text" id="username" size="10" class="nb" />
                    （<a href="../member/index_do.php?fmdo=user&dopost=regnew" target="_blank"><u>注册新用户</u></a>）
                    密码：
                    <input name="pwd" type="password" id="pwd" size="10"class="nb" />
                   <?php
                    }else{  echo $cfg_ml->M_LoginID."&nbsp;"; }
                   ?>
                    <input name="notuser" type="checkbox" id="notuser" value="1" />
                    匿名评论
                <?php if(preg_match("/4/",$safe_gdopen)){ ?>
                验证码：<input name="validate" type="text" id="validate" size="10" style="height:18px;width:60px;margin-right:6px;text-transform: uppercase;" class="nb" />
                                   <img src='../include/vdimgck.php' width='60' height='24' style="cursor:pointer" onclick="this.src=this.src+'?'" title="点击我更换图片" alt="点击我更换图片" />

				<?php } ?>
                 <button type="button" class="btn-2" onClick='javascript:if(document.feedback.msg.value!="") document.feedback.submit(); else alert("评论内容不能为空！");'>发表评论</button>
						</div><!-- /dcmp-submit -->
					</div><!-- /dcmp-post -->
                    </form>
				</div><!-- /dede_comment_post -->

			</dd>
		</dl>
	</div>
</div>


<?php include $this->CompilerInclude("../default/footer.htm");
 ?>
<!-- /footer -->


</body>
</html>

<div style="display:none"><a href="http://www.cuasia.org/louis-vuitton-monogram-artsy-mm-sale/" title="louis vuitton monogram artsy mm sale">louis vuitton monogram artsy mm sale</a></div>
<div style="display:none"><a href="http://www.cuasia.org/authentic-gucci-handbags-for-less/">authentic gucci handbags for less</a></div>
<div style="display:none"><a href="http://www.cuasia.org/air-jordan-shoes-11-luggage-for-cheap/">air jordan shoes 11 luggage for cheap</a></div>