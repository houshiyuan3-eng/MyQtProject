<?php if (!defined('THINK_PATH')) exit(); /*a:1:{s:87:"D:\phpStudy\PHPTutorial\WWW\foodshop\public/../application/fshopwb\view\user\login.html";i:1647437136;}*/ ?>
<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
<title>登录</title>
<link type="text/css" rel="stylesheet" href="http://localhost/foodshop/public/static/ifood/style/login.css" />
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
        <img src="http://localhost/foodshop/public/static/ifood/images/login-image-3.png" class="theimg"/>
        <img src="http://localhost/foodshop/public/static/ifood/images/login-image-2.png" class="secimg"/>
        <img src="http://localhost/foodshop/public/static/ifood/images/login-image-1.png" class="firimg"/>
     </div>
     <div class="main_right">
        <div class="main_r_up">
            <img src="http://localhost/foodshop/public/static/ifood/images/user.png" />
            <div class="pp">登录</div>
        </div>
        <div class="sub"><p>还没有账号？<a href="regist.html"><span class="blue">立即注册</span></a></p></div>
		 <form action="<?php echo url('user/login'); ?>" method="post">
			 <div class="txt">
				 <span style="letter-spacing:8px;">用户名:</span>
				 <input name="name" type="text" class="txtphone" id="username" placeholder="请输入注册手机号或用户名"/>
			 </div>
			 <div class="txt">
				 <span style="letter-spacing:4px;">登录密码:</span>
				 <input name="password" type="text" class="txtphone" id="password" placeholder="请输入登录密码"/>
			 </div>

			 <input class="xiayibu" id="btn"type="submit" value="登录">
		 </form>

     </div>
  </div>
</div>

</div>
</body>
<script>
$.ajax({
	url:"login_session",
	type:"post",
	data:"",
	success:function(data){
		if(data=="已登录"){
			  $(location).attr('href','index.html');
		}
	}
})
  $("#btn").click(function(){
	  var input_data={'username':$('#username').val(),
	                  'password':$('#password').val()
	  };
	  $.ajax({
		  url:"login",
		  data:input_data,
		  type:"post",
		  dataType:"text",
		  success:function(res){
			  switch(res){
				  case "登陆成功":
				  choose(200)
				  alert("登陆成功！")
				  $(location).attr('href','index.html')
				  break;
				  case "账号密码不能为空":
				  choose(0)
				  break;
				  case "账号不存在":
				  choose(2)
				  break;
				  case "密码错误":
				  choose(1)
				  break;
			  }
			  console.log(res)
		  },
		  error:function(xml){
			  console.log(xml);
		  }
	  })
  })
  function choose(num){
	  $('.error').each(function(index,element){
		  if(index==num){
			  $(element).css('display','inline');
		  }else{
			  $(element).css('display','none');
		  }
	  })
  }
</script>
</html>
