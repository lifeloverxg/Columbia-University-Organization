<?php
$z[0]=Array("global","",236,264);
$z[0][4]['name']="cfg_soft_lang";
$z[1]=Array("field","",277,296);
$z[1][4]['name']="title";
$z[2]=Array("global","",297,323);
$z[2][4]['name']="cfg_webname";
$z[3]=Array("field","",364,386);
$z[3][4]['name']="keywords";
$z[4]=Array("field","",426,477);
$z[4][4]['name']="description";
$z[4][4]['function']="html2text(@me)";
$z[5]=Array("global","",495,527);
$z[5][4]['name']="cfg_templets_skin";
$z[6]=Array("global","",657,682);
$z[6][4]['name']="cfg_cmsurl";
$z[7]=Array("global","",943,968);
$z[7][4]['name']="cfg_cmsurl";
$z[8]=Array("field","",1808,1835);
$z[8][4]['name']="phpurl";
$z[9]=Array("global","",2676,2701);
$z[9][4]['name']="cfg_phpurl";
$z[10]=Array("global","",2926,2951);
$z[10][4]['name']="cfg_phpurl";
$z[11]=Array("include","",3054,3090);
$z[11][4]['filename']="head2.htm";
$z[12]=Array("field","",3220,3249);
$z[12][4]['name']="position";
$z[13]=Array("field","",3330,3349);
$z[13][4]['name']="title";
$z[14]=Array("field","",3428,3484);
$z[14][4]['name']="pubdate";
$z[14][4]['function']="MyDate('Y-m-d H:i',@me)";
$z[15]=Array("field","",3506,3526);
$z[15][4]['name']="source";
$z[16]=Array("field","",3549,3569);
$z[16][4]['name']="writer";
$z[17]=Array("field","",3610,3637);
$z[17][4]['name']="phpurl";
$z[18]=Array("field","",3661,3684);
$z[18][4]['name']="id";
$z[19]=Array("field","",3689,3713);
$z[19][4]['name']="mid";
$z[20]=Array("field","\r\n  if(@me<>'' )@me = '\r\n  <div class=\"intro\">'.@me.'</div>\r\n  ';\r\n  ",3805,3936);
$z[20][4]['name']="description";
$z[20][4]['runphp']="yes";
$z[21]=Array("myad","",4093,4128);
$z[21][4]['name']="contentMidPicAD";
$z[22]=Array("field","",4142,4160);
$z[22][4]['name']="body";
$z[23]=Array("field","",4168,4186);
$z[23][4]['name']="vote";
$z[24]=Array("adminname","",4210,4227);
$z[25]=Array("pagebreak","",4348,4365);
$z[26]=Array("field","",4649,4665);
$z[26][4]['name']="id";
$z[27]=Array("field","",4740,4762);
$z[27][4]['name']="goodpost";
$z[28]=Array("field","",4857,4878);
$z[28][4]['name']="goodper";
$z[29]=Array("field","",4931,4952);
$z[29][4]['name']="goodper";
$z[30]=Array("field","",5168,5184);
$z[30][4]['name']="id";
$z[31]=Array("field","",5259,5280);
$z[31][4]['name']="badpost";
$z[32]=Array("field","",5375,5395);
$z[32][4]['name']="badper";
$z[33]=Array("field","",5448,5468);
$z[33][4]['name']="badper";
$z[34]=Array("field","",5573,5589);
$z[34][4]['name']="id";
$z[35]=Array("bshare","",5679,5693);
$z[36]=Array("prenext","",5889,5914);
$z[36][4]['get']="pre";
$z[37]=Array("prenext","",5930,5956);
$z[37][4]['get']="next";
$z[38]=Array("field","",6073,6100);
$z[38][4]['name']="phpurl";
$z[39]=Array("field","",6114,6130);
$z[39][4]['name']="id";
$z[40]=Array("field","",6196,6223);
$z[40][4]['name']="phpurl";
$z[41]=Array("field","",6243,6259);
$z[41][4]['name']="id";
$z[42]=Array("field","",6266,6285);
$z[42][4]['name']="title";
$z[43]=Array("field","",6351,6378);
$z[43][4]['name']="phpurl";
$z[44]=Array("field","",6397,6413);
$z[44][4]['name']="id";
$z[45]=Array("include","",6655,6695);
$z[45][4]['file']="ajaxfeedback.htm";
$z[46]=Array("memberinfos","\r\n <div class=\"infos_userinfo\">\r\n  <dl class=\"tbox light\">\r\n   <dt class='light'><strong>发布者资料</strong></dt>\r\n   <dd class='light'> <a href=\"[field:spaceurl /]\" class=\"userface\"><img src=\"[field:face/]\" width=\"52\" height=\"52\" /></a> <a href='[field:spaceurl /]' class=\"username\">[field:uname/]</a> <span class=\"useract\"> <a href=\"[field:spaceurl /]\" class=\"useract-vi\">查看详细资料</a> <a href=\"[field:spaceurl /]&action=guestbook\" class=\"useract-pm\">发送留言</a> <a href=\"[field:spaceurl /]&action=newfriend\" class=\"useract-af\">加为好友</a> </span> <span class=\"userinfo-sp\"><small>用户等级:</small>[field:rankname /]</span> <span class=\"userinfo-sp\"><small>注册时间:</small>[field:jointime function=\"MyDate('Y-m-d H:m',@me)\"/]</span> <span class=\"userinfo-sp\"><small>最后登录:</small>[field:logintime function=\"MyDate('Y-m-d H:m',@me)\"/]</span> </dd>\r\n  </dl>\r\n </div>\r\n ",6787,7733);
$z[47]=Array("arclist","\r\n      <li><a href=\"[field:arcurl/]\">[field:title/]</a>\r\n       <p>[field:description function='cn_substr(@me,80)'/]...</p>\r\n      </li>\r\n      ",7925,8126);
$z[47][4]['flag']="c";
$z[47][4]['titlelen']="42";
$z[47][4]['row']="6";
$z[48]=Array("arclist","\r\n      <li><a href=\"[field:arcurl/]\">[field:title/]</a></li>\r\n      ",8360,8479);
$z[48][4]['row']="10";
$z[48][4]['orderby']="click";
$z[49]=Array("myad","",8577,8612);
$z[49][4]['name']="contentRtPicAD2";
$z[50]=Array("myad","",8719,8753);
$z[50][4]['name']="innerfooterAD2";
$z[51]=Array("include","",8761,8798);
$z[51][4]['filename']="footer.htm";

?>