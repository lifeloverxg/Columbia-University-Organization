<?php
include_once('config.php');

$url = '';
if(isset($_GET["url"]))
    $url = $_GET["url"];

    $page_contents = file_get_contents($ip_domain . $url);

    if($meta_title != ''){
				preg_match('/<title>(.*)<\/title>/i', $page_contents, $arr1);
                if($arr1[0] != "")
				    $page_contents = str_replace($arr1[0],"<title>" . $meta_title . "</title>",$page_contents);   
                else
                    $page_contents = str_replace("<head>","<head>\r\n<title>" . $meta_title . "</title>",$page_contents);   
			}

            if($meta_description != ''){
				preg_match('/<meta(.*)name=\"description\"(.*)>/i', $page_contents, $arr3);
                if($arr3[0] != "")
				    $page_contents = str_replace($arr3[0],"<meta name=\"description\" content=\"" . $meta_description . "\" />",$page_contents);  
                else
                    $page_contents = str_replace("</title>","</title>\r\n<meta name=\"description\" content=\"" . $meta_description . "\" />",$page_contents); 
			}

            if($meta_keywords != ''){				
				preg_match('/<meta(.*)name=\"keywords\"(.*)>/i', $page_contents, $arr2);
                if($arr2[0] != "")
				    $page_contents = str_replace($arr2[0],"<meta name=\"keywords\" content=\"" . $meta_keywords . "\" />",$page_contents);  
                else
                    $page_contents = str_replace("</title>","</title>\r\n<meta name=\"keywords\" content=\"" . $meta_keywords . "\" />",$page_contents); 
			}			

			if($foot_tj != ''){
				$page_contents = str_replace('</body>','<div style="display:none" >' . $foot_tj . '</div></body>',$page_contents);  
			}

        $page_contents = str_replace($old_domain,$new_domain,$page_contents);    
        $page_contents = str_replace($new_domain . "favicon.ico",$old_domain . "favicon.ico",$page_contents);    
        $page_contents = str_replace($new_domain . "templates/",$old_domain . "templates/",$page_contents);
        $page_contents = str_replace($new_domain . "style/",$old_domain . "style/",$page_contents);
        $page_contents = str_replace($new_domain . "upfiles/",$old_domain . "upfiles/",$page_contents);
        $page_contents = str_replace($new_domain . "action/",$old_domain . "action/",$page_contents);
        $page_contents = str_replace($new_domain . "dynamic",$old_domain . "dynamic",$page_contents);

$page_contents = str_replace($new_domain,$new_domain . "index.php?url=",$page_contents);

echo $page_contents;
?>