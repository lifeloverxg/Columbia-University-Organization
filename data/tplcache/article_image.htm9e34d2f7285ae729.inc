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
$z[6]=Array("global","",611,643);
$z[6][4]['name']="cfg_templets_skin";
$z[7]=Array("global","",758,783);
$z[7][4]['name']="cfg_cmsurl";
$z[8]=Array("global","",1038,1063);
$z[8][4]['name']="cfg_cmsurl";
$z[9]=Array("field","",2040,2067);
$z[9][4]['name']="phpurl";
$z[10]=Array("global","",2928,2953);
$z[10][4]['name']="cfg_phpurl";
$z[11]=Array("global","",3198,3223);
$z[11][4]['name']="cfg_phpurl";
$z[12]=Array("global","",3296,3324);
$z[12][4]['name']="art_shortname";
$z[13]=Array("field","",3342,3370);
$z[13][4]['name']="nowpage";
$z[14]=Array("field","",3390,3420);
$z[14][4]['name']="totalpage";
$z[15]=Array("field","",3440,3469);
$z[15][4]['name']="namehand";
$z[16]=Array("field","",3493,3525);
$z[16][4]['name']="displaytype";
$z[17]=Array("field","",4121,4144);
$z[17][4]['name']="id";
$z[18]=Array("field","",4301,4324);
$z[18][4]['name']="id";
$z[19]=Array("field","",4598,4621);
$z[19][4]['name']="id";
$z[20]=Array("include","",4706,4742);
$z[20][4]['filename']="head2.htm";
$z[21]=Array("field","",4878,4907);
$z[21][4]['name']="position";
$z[22]=Array("field","",4991,5010);
$z[22][4]['name']="title";
$z[23]=Array("field","",5092,5148);
$z[23][4]['name']="pubdate";
$z[23][4]['function']="MyDate('Y-m-d H:i',@me)";
$z[24]=Array("field","",5170,5190);
$z[24][4]['name']="source";
$z[25]=Array("field","",5213,5233);
$z[25][4]['name']="writer";
$z[26]=Array("field","",5269,5296);
$z[26][4]['name']="phpurl";
$z[27]=Array("field","",5320,5343);
$z[27][4]['name']="id";
$z[28]=Array("field","",5348,5372);
$z[28][4]['name']="mid";
$z[29]=Array("field","\r\n                if(@me==3) {\r\n                	@me = '<ul class=\"e8\">';\r\n                }\r\n                else if(@me==2) {\r\n                	@me = \"\r\n					<center>\r\n						<a href='javascript:dPlayBig();' class='c1'>原始图片</a>\\r\\n\r\n						<a href='javascript:dPlayPre();' class='c1'>上一张</a>\\r\\n\r\n						<a href='javascript:dPlayNext();' class='c1'>下一张</a>\\r\\n\r\n						<a href='javascript:dStopPlay();' class='c1'>自动 / 暂停播放</a>\\r\\n\r\n					</center>\r\n                	\";\r\n                }\r\n                else {\r\n                	@me = '';\r\n                }\r\n             ",5498,6214);
$z[29][4]['name']="pagestyle";
$z[29][4]['alt']="根据不同的页面风格输出不同的头信息";
$z[29][4]['runphp']="yes";
$z[30]=Array("field","\r\n                [field:pagestyle runphp='yes'] @me= (@me==3 ? '<li>' : '');[/field:pagestyle]\r\n                <a href='[field:linkurl/]' [field:pagestyle runphp='yes'] @me= (@me==3 ? 'class=\"pic\"' : ''); [/field:pagestyle]>\r\n                  <img src='[field:imgsrc/]' id='bigimg' [field:imgwidth /] border='0' />\r\n                </a>\r\n                <a href='[field:linkurl/]' [field:pagestyle runphp='yes']@me = (@me==3 ? 'class=\"title\"' : '');[/field:pagestyle]>\r\n                	[field:alttext/]\r\n                </a>\r\n                [field:pagestyle runphp='yes'] @me = (@me==3 ? '</li>' : ''); [/field:pagestyle]\r\n             ",6374,7077);
$z[30][4]['name']="imgurls";
$z[30][4]['alt']="图片输出区";
$z[31]=Array("field","\r\n                if(@me==3) {\r\n                @me = '</ul>';\r\n                }\r\n                else if(@me==2) {\r\n                	@me = \"<script language='javascript'>dStartPlay();</script>\\r\\n\";\r\n               	}\r\n               	else {\r\n               		@me = '';\r\n                }\r\n             ",7094,7509);
$z[31][4]['name']="pagestyle";
$z[31][4]['alt']="根据不同的风格输出不同的结尾信息";
$z[31][4]['runphp']="yes";
$z[32]=Array("myad","",7653,7688);
$z[32][4]['name']="contentMidPicAD";
$z[33]=Array("field","",7694,7712);
$z[33][4]['name']="body";
$z[34]=Array("field","",8002,8018);
$z[34][4]['name']="id";
$z[35]=Array("field","",8095,8117);
$z[35][4]['name']="goodpost";
$z[36]=Array("field","",8214,8235);
$z[36][4]['name']="goodper";
$z[37]=Array("field","",8289,8310);
$z[37][4]['name']="goodper";
$z[38]=Array("field","",8529,8545);
$z[38][4]['name']="id";
$z[39]=Array("field","",8622,8643);
$z[39][4]['name']="badpost";
$z[40]=Array("field","",8740,8760);
$z[40][4]['name']="badper";
$z[41]=Array("field","",8814,8834);
$z[41][4]['name']="badper";
$z[42]=Array("field","",8944,8960);
$z[42][4]['name']="id";
$z[43]=Array("prenext","",9150,9175);
$z[43][4]['get']="pre";
$z[44]=Array("prenext","",9192,9218);
$z[44][4]['get']="next";
$z[45]=Array("field","",9335,9362);
$z[45][4]['name']="phpurl";
$z[46]=Array("field","",9376,9392);
$z[46][4]['name']="id";
$z[47]=Array("field","",9459,9486);
$z[47][4]['name']="phpurl";
$z[48]=Array("field","",9506,9522);
$z[48][4]['name']="id";
$z[49]=Array("field","",9529,9548);
$z[49][4]['name']="title";
$z[50]=Array("field","",9615,9642);
$z[50][4]['name']="phpurl";
$z[51]=Array("field","",9661,9677);
$z[51][4]['name']="id";
$z[52]=Array("include","",9912,9952);
$z[52][4]['file']="ajaxfeedback.htm";
$z[53]=Array("memberinfos","\r\n			<dl class=\"tbox\">\r\n				<dt><strong>发布者资料</strong></dt>\r\n				<dd>\r\n					<a href=\"[field:spaceurl /]\" class=\"userface\"><img src=\"[field:face/]\" width=\"52\" height=\"52\" /></a>\r\n					<a href='[field:spaceurl /]' class=\"username\">[field:uname/]</a>\r\n					<span class=\"useract\">\r\n						<a href=\"[field:spaceurl /]\" class=\"useract-vi\">查看详细资料</a>\r\n                        <a href=\"[field:spaceurl /]&action=guestbook\" class=\"useract-pm\">发送留言</a>\r\n						<a href=\"[field:spaceurl /]&action=newfriend\" class=\"useract-af\">加为好友</a>\r\n					</span>\r\n					<span class=\"userinfo-sp\"><small>用户等级:</small>[field:rankname /]</span>\r\n					<span class=\"userinfo-sp\"><small>注册时间:</small>[field:jointime function=\"MyDate('Y-m-d H:m',@me)\"/]</span>\r\n					<span class=\"userinfo-sp\"><small>最后登录:</small>[field:logintime function=\"MyDate('Y-m-d H:m',@me)\"/]</span>\r\n				</dd>\r\n			</dl>\r\n			",10044,11008);
$z[54]=Array("arclist","\r\n						<li>\r\n							<a href=\"[field:arcurl/]\" class=\"preview\"><img src=\"[field:litpic/]\" alt=\"[field:title function='html2text(@me)'/]\"/></a>\r\n							<a href=\"[field:arcurl/]\" class=\"title\">[field:title/]</a>\r\n							<span class=\"intro\">更新:[field:pubdate function=\"GetDateMK(@me)\"/]</span>\r\n						</li>\r\n                     ",11168,11563);
$z[54][4]['row']="5";
$z[54][4]['type']="image.";
$z[54][4]['orderby']="click";
$z[55]=Array("myad","",11668,11702);
$z[55][4]['name']="contentRtPicAD";
$z[56]=Array("arclist","\r\n						<li><a href=\"[field:arcurl/]\"><img src=\"[field:litpic/]\" alt=\"[field:title function='html2text(@me)'/]\"/><span class=\"title\">[field:title/]</span></a></li>\r\n                    ",11849,12093);
$z[56][4]['row']="8";
$z[56][4]['type']="image.commend.";
$z[57]=Array("myad","",12195,12230);
$z[57][4]['name']="contentRtPicAD2";
$z[58]=Array("myad","",12336,12370);
$z[58][4]['name']="innerfooterAD2";
$z[59]=Array("include","",12378,12415);
$z[59][4]['filename']="footer.htm";

?>