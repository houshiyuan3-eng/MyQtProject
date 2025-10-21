<?php if (!defined('THINK_PATH')) exit(); /*a:1:{s:88:"D:\phpStudy\PHPTutorial\WWW\foodshop\public/../application/fshopwb\view\user\regist.html";i:1647434325;}*/ ?>
<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
<title>注册</title>
<link type="text/css" rel="stylesheet" href="http://localhost/foodshop/public/static/ifood/style/zhuce.css" />
<script type="text/javascript" src="http://localhost/foodshop/public/static/ifood/style/jquery-1.11.1.min.js"></script>
<script type="text/javascript" src="http://localhost/foodshop/public/static/ifood/style/jquery-3.4.1.min.js"></script>
<script type="text/javascript">
$(document).ready(function () {
	var height=$(document).height();
	$('.main').css('height',height);
})
</script>
<style>
.error{
	display: none;
}
</style>
</head>

<body>
<div class="main">
  <div class="main0">
     <div class="main_left">
        <img src="http://localhost/foodshop/public/static/ifood/images/zhuce-image-3.png" class="theimg"/>
        <img src="http://localhost/foodshop/public/static/ifood/images/zhuce-image-2.png" class="secimg"/>
        <img src="http://localhost/foodshop/public/static/ifood/images/zhuce-image-1.png" class="firimg"/>
     </div>
     <div class="main_right">
        <div class="main_r_up">
            <img src="http://localhost/foodshop/public/static/ifood/images/user.png" />
            <div class="pp">注册</div>
        </div>
        <div class="sub"><p>已经注册？<a href="login.html"><span class="blue">请登录</span></a></p></div>
		 <form action="<?php echo url('regist'); ?>" method="post">
			 <div class="txt txt0">
				 <span style="letter-spacing:8px;">用户名:</span>
				 <input name="name" type="text" class="txtphone" id="username"  placeholder="请输入用户名"/>
			 </div>
			 <div class="txt txt0">
				 <span style="letter-spacing:4px;">登录密码:</span>
				 <input name="password" type="text" class="txtphone" id="password" placeholder="请输入密码"/>
			 </div>
			 <div class="txt txt0">
				 <span style="letter-spacing:4px;">重复密码:</span>
				 <input  type="text" class="txtphone" id="password1" placeholder="请再次输入密码" onblur="sec()"/>
				 <span  id="box"  class="error" style="color: red;display: none";>密码不一致</span>
			 </div>

			 <div class="txt txt0">
				 <span class="error" style="color: red;">该用户已注册</span>
				 <span class="error" style="color: red;">信息不能为空</span>
				 <input class="zhucebtn" type="submit" id="btn" style="margin-left: 100px;" value="确认注册">
			 </div>
		 </form>

     </div>
  </div>
</div>

</body>
<script>

	function sec(){
		var password=document.querySelector('#password');
		var password1=document.querySelector('#password1');
		var ps=password.value;
		var ps1=password1.value;
		var box=document.getElementById('box');
		var btn=document.getElementById('btn');
		if(ps!=ps1){
			box.style.display='block';
			btn.style.display='none';
		}else {
			box.style.display='none';
			btn.style.display='block';
		}
	}


</script>
</html>
