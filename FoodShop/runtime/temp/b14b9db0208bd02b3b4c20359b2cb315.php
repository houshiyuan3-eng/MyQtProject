<?php if (!defined('THINK_PATH')) exit(); /*a:1:{s:86:"D:\phpStudy\PHPTutorial\WWW\foodshop\public/../application/admin\view\login\index.html";i:1647590029;}*/ ?>
<!DOCTYPE html>
<html xmlns="http://www.w3.org/1999/xhtml"><!--Head--><head>
    <meta charset="utf-8">
    <title>在线订餐网站后台</title>
    <meta name="description" content="login page">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
    <!--Basic Styles-->
    <link href="http://localhost/foodshop/public/static/admin/style/bootstrap.css" rel="stylesheet">
    <link href="http://localhost/foodshop/public/static/admin/style/font-awesome.css" rel="stylesheet">
    <!--Beyond styles-->
    <link id="beyond-link" href="http://localhost/foodshop/public/static/admin/style/beyond.css" rel="stylesheet">
    <link href="http://localhost/foodshop/public/static/admin/style/demo.css" rel="stylesheet">
    <link href="http://localhost/foodshop/public/static/admin/style/animate.css" rel="stylesheet">
     <style>
         /*.bg{*/
             /*background: url(http://localhost/foodshop/public/static/admin/images/adminbg.png) no-repeat center;*/
             /*width: 100%;*/
             /*height: 100%;*/
             /*z-index: 1;*/
         /*}*/
     </style>
</head>
<!--Head Ends-->
<!--Body-->

<body>
<div   class="bg" >
    <div class="login-container animated fadeInDown" style="height: 100%" >
        <form action="<?php echo url('index'); ?>" method="post">
            <div class="loginbox bg-white">
                <div class="loginbox-title">SIGN IN</div>
                <div class="loginbox-textbox">
                    <input  class="form-control" placeholder="name" name="name" type="text">
                </div>
                <div class="loginbox-textbox">
                    <input class="form-control" placeholder="password" name="password" type="password">
                </div>
                <div class="loginbox-textbox" >
                    <input class="form-control" name="code"  style="width: 100px; float: left" type="text">
                    <img src="<?php echo captcha_src(); ?>" onclick="this.src='<?php echo captcha_src(); ?>?'+Math.random();" alt="captcha" width="100px" style="float: left; cursor:pointer "/>
                </div>
                <div class="loginbox-submit" style="margin-top: 40px">
                    <input class="btn btn-primary btn-block" value="Login" type="submit">
                </div>
            </div>
            <div  style="margin-top: 20px">
                <p class="text-center" style="margin-top: 30px;height: 50px;background-color: darkgrey;color:white;line-height: 50px">在线订餐网站后台登录</p>
            </div>
        </form>
    </div>
    <!--Basic Scripts-->
    <script src="http://localhost/foodshop/public/static/admin/style/jquery.js"></script>
    <script src="http://localhost/foodshop/public/static/admin/style/bootstrap.js"></script>
    <script src="http://localhost/foodshop/public/static/admin/style/jquery_002.js"></script>
    <!--Beyond Scripts-->
    <script src="http://localhost/foodshop/public/static/admin/style/beyond.js"></script>
</div>





</body><!--Body Ends--></html>