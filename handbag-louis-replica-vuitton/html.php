<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head id="Head1" runat="server">
    <title></title>
    <link rel="Stylesheet" href="style/global.css" />
    <link rel="Stylesheet" href="style/htmlcreate.css" />
    <script type="text/javascript" src="style/jquery-1.6.min.js"></script>

    <script type="text/javascript">
        //生成所有    
        function GetAll() {
            CreateOninit();
            var str = "";
            $.ajax({
                type: "get",
                dataType: "html",
                url: "action_code.php?type=&t=" + Math.random(),
                beforeSend: function (XMLHttpRequest) {
                    BtnOninit();
                    $("#jieguo").html("一键生成,正在统计要生成文件列表...<img src='style/loading3.gif' />");
                },
                success: function (data) {
                    str += data;
                    $("#Span2").html(str.split('|').length - 1);
                    $("#jieguo").html("文件列表统计完毕,正在生成...<img src='style/loading2.gif' />");
                    CreateHtml(str);
                },
                error: function () { }
            });
        }

        //生成首页 
        function GetIndexs() {
            CreateOninit();
            var str = "";
            $.ajax({
                type: "get",
                dataType: "html",
                url: "action_code.php?type=main&t=" + Math.random(),
                beforeSend: function (XMLHttpRequest) {
                    BtnOninit();
                    $("#jieguo").html("一键生成,正在统计要生成文件列表...<img src='style/loading3.gif' />");
                },
                success: function (data) {
                    str += data;
                    $("#Span2").html(str.split('|').length - 1);
                    $("#jieguo").html("文件列表统计完毕,正在生成...<img src='style/loading2.gif' />");
                    CreateHtml(str);
                },
                error: function () { }
            });
        }

        //生成产品
        function GetProducts() {
            CreateOninit();
            var str = "";
            $.ajax({
                type: "get",
                dataType: "html",
                url: "action_code.php?type=product&t=" + Math.random(),
                beforeSend: function (XMLHttpRequest) {
                    BtnOninit();
                    $("#jieguo").html("一键生成,正在统计要生成文件列表...<img src='style/loading3.gif' />");
                },
                success: function (data) {
                    str += data;
                    $("#Span2").html(str.split('|').length - 1);
                    $("#jieguo").html("文件列表统计完毕,正在生成...<img src='style/loading2.gif' />");
                    CreateHtml(str);
                },
                error: function () { }
            });
        }

        //生成产品
        function GetProductCategorys() {
            CreateOninit();
            var str = "";
            $.ajax({
                type: "get",
                dataType: "html",
                url: "action_code.php?type=productcategory&t=" + Math.random(),
                beforeSend: function (XMLHttpRequest) {
                    BtnOninit();
                    $("#jieguo").html("一键生成,正在统计要生成文件列表...<img src='style/loading3.gif' />");
                },
                success: function (data) {
                    str += data;
                    $("#Span2").html(str.split('|').length - 1);
                    $("#jieguo").html("文件列表统计完毕,正在生成...<img src='style/loading2.gif' />");
                    CreateHtml(str);
                },
                error: function () { }
            });
        }

        //生成文章
        function GetInformations() {
            CreateOninit();
            var str = "";
            $.ajax({
                type: "get",
                dataType: "html",
                url: "action_code.php?type=information&t=" + Math.random(),
                beforeSend: function (XMLHttpRequest) {
                    BtnOninit();
                    $("#jieguo").html("一键生成,正在统计要生成文件列表...<img src='style/loading3.gif' />");
                },
                success: function (data) {
                    str += data;
                    $("#Span2").html(str.split('|').length - 1);
                    $("#jieguo").html("文件列表统计完毕,正在生成...<img src='style/loading2.gif' />");
                    CreateHtml(str);
                },
                error: function () { }
            });
        }

        function CreateOninit()
        {
            $("#Span1").html("0");
            $("#Span2").html("0");
            $("#jieguo").html("正在等待生成...");
            $("#flowme").html("");
            document.getElementById("loading").style.width = "0%";
        }
        
        function BtnOninit(){
            $("input[type=button]").attr("disabled","disabled");
            $("#Span4").html(new Date().toLocaleString());
        }        
        function BtnOverinit(){
            $("input[type=button]").removeAttr("disabled");
        }        
        
        function CreateHtml(val)
        {        
            if(val == "")
            {
                $("#jieguo").html("网站生成结束...");
                BtnOverinit();
                return; 
            }    
        
            if(val.indexOf("Error:") > -1)
                {
                    $("#flowme").prepend(val);
                }else
                {                    
                    var sp = val.split('|');
                    var pageSum = sp.length - 1;
                    var dl = Number($("#DuoXian").val());
                    $("#Span2").html(pageSum);
                    
                    if (pageSum > dl) {
                        var p = pageSum % dl;
                        var p1 = (pageSum - p) / dl;
                        for (var i = 0; i < dl; i++) {
                            CreateStart(sp, i * p1, (i + 1) * p1, pageSum);
                        }
                        CreateStart(sp, pageSum - p, pageSum, pageSum);
                    } else {
                        CreateStart(sp, 0, pageSum, pageSum);
                    }                             
                }         
        }

        function CreateStart(sp,start,pageSum,al)
        {
                $.post("action_code.php?type=create&t=" + Math.random(), { url: sp[start] }, function (data) {
                    
                    start = start + 1;
                    $("#Span1").html(Number($("#Span1").html()) + 1);
                    $("#flowme").prepend(data);
                    document.getElementById("loading").style.width = parseFloat(Number($("#Span1").html()) / al * 100).toFixed(2) + "%";
                    
                    if (start < pageSum) {
                        CreateStart(sp, start, pageSum,al);
                    } else {
                        if(Number($("#Span1").html()) == al){
                            $("#jieguo").html("所有页面生成结束...");
                            BtnOverinit();
                        }
                    }
                }, "html");            
        }  
    </script>

</head>
<body>
    <div class="container" id="cpcontainer">
        <div id="tab">
            <ul class="tabs">
                <li class="current"><a href="action_code.php">一键生成</a></li>
            </ul>
        </div>
        <table class="maintable">
            <tr>
                <td colspan="2">
                    <div class="custom-service">
                        当网站设置为静态模式时,可以选择生成;生成过程中,请勿离开当前页面,以免中断.
                    </div>
                </td>
            </tr>
            <tr>
                <td width="100px" align="right" style="padding-right: 10px;">
                    整站生成:
                </td>
                <td style="padding-left: 10px;">
                    进程:<input id="DuoXian" type="text" size="4" maxlength="3" value="10" />                    
                    <input id="BtnCreate" type="button" class="button" value="一键生成" onclick="GetAll()" />
                </td>
            </tr>
            <tr>
                <td></td>
                <td style="padding-left: 10px;">
                    <input type="button" class="button" value="首页生成" onclick="GetIndexs()" />
                    <input type="button" class="button" value="产品类别生成" onclick="GetProductCategorys()" />
                    <input type="button" class="button" value="产品信息生成" onclick="GetProducts()" />
                    <input type="button" class="button" value="文章信息生成" onclick="GetInformations()" />
                </td>
            </tr>
            <tr>
                <td valign="top" align="right" style="padding-right: 10px;">
                    生成状态:
                </td>
                <td style="padding: 10px; line-height: 20px;">
                    <div id="load">
                        <div id="loading">
                        </div>
                    </div>
                    <div id="tong_ji" class="green_font">
                        已生成 <span id="Span1" style="color: Red;">0</span> 静态页面，共 <span style="color: Red;"
                            id="Span2">0</span> 页面需要生成。
                    </div>
                    <div id="jieguo">
                        正在等待生成...
                    </div>
                    <div id="mydate">
                        开始时间: <span id="Span4"></span>
                    </div>
                </td>
            </tr>
            <tr>
                <td valign="top" align="right" style="padding-right: 10px;">
                    生成反馈:
                </td>
                <td style="padding-left: 10px;">
                    <div id="flowme">
                    </div>
                </td>
            </tr>
        </table>
    </div>
</body>
</html>