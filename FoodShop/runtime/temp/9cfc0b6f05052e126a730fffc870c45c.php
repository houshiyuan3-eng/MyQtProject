<?php if (!defined('THINK_PATH')) exit(); /*a:2:{s:91:"D:\phpStudy\PHPTutorial\WWW\foodshop\public/../application/fshopwb\view\index\foodinfo.html";i:1648131843;s:77:"D:\phpStudy\PHPTutorial\WWW\foodshop\application\fshopwb\view\public\top.html";i:1648307406;}*/ ?>
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>餐品列表</title>
    <link rel="stylesheet" type="text/css" href="http://localhost/foodshop/public/static/ifood/style/foodcar.css">
    <link rel="stylesheet" type="text/css" href="http://localhost/foodshop/public/static/ifood/style/foodinfo.css">
    <link rel="stylesheet" type="text/css"  href="http://localhost/foodshop/public/static/ifood/style/food.css" >
    <link rel="stylesheet" type="text/css" href="http://localhost/foodshop/public/static/admin/style/bootstrap.css" >
    <link rel="stylesheet" type="text/css" href="http://localhost/foodshop/public/static/admin/style/font-awesome.css" >
    <link rel="stylesheet" type="text/css" href="http://localhost/foodshop/public/static/admin/style/weather-icons.css" >

    <!--Beyond styles-->
    <link id="beyond-link" href="http://localhost/foodshop/public/static/admin/style/beyond.css" rel="stylesheet" type="text/css">
    <link type="text/css" href="http://localhost/foodshop/public/static/admin/style/demo.css" rel="stylesheet">
    <link type="text/css" href="http://localhost/foodshop/public/static/admin/style/typicons.css" rel="stylesheet">
    <link type="text/css" href="http://localhost/foodshop/public/static/admin/style/animate.css" rel="stylesheet">
</head>
<body>
<div class="food_top">

    <div class="food_top_center">
        <ul>
            <li style="clear: right"><a href="<?php echo url('foodcar/lst'); ?>">我的购物车</a></li>
            <li><a href="<?php echo url('userinfo/infoindex'); ?>">个人中心</a></li>
            <li><a href="<?php echo url('userorder/lst'); ?>">我的订单</a></li>
            <li <?php if(\think\Request::instance()->session('name') != ''): ?>style="display: none;"<?php endif; ?> ><a href="<?php echo url('user/login'); ?>">登录</a></li>
            <li><a href="<?php echo url('index/index'); ?>">主页</a></li>
        </ul>
    </div>

    <div class="food_top_left">
        <ul>
            <li>
                <a><?php if(\think\Request::instance()->session('name') == ''): ?>请您登陆<?php else: ?>欢迎：<?php echo \think\Request::instance()->session('name'); endif; ?></a>
                <ul>
                    <li><a href="<?php echo url('fshopwb/index/loginout'); ?>">安全退出</a></li>
                    <li>信息修改</li>
                </ul>
            </li>
        </ul>
    </div>

</div>
<div class="box">
    <div class="box_center">
        <form method="post" action="<?php echo url('addfoodcar'); ?>">
            <input type="hidden" name="fid" value="<?php echo $Foodinfo['id']; ?>">
            <input type="hidden" name="sid" value="<?php echo \think\Request::instance()->session('id'); ?>">
            <input type="hidden" name="image" value="<?php echo $Foodinfo['image']; ?>">
            <input type="hidden" name="cname" value="<?php echo $Foodinfo['cname']; ?>">
            <input type="hidden" name="price" value="<?php echo $Foodinfo['price']; ?>">
            <input type="hidden" name="unit" value="<?php echo $Foodinfo['unit']; ?>">
            <input type="hidden" name="introduce" value="<?php echo $Foodinfo['introduce']; ?>">
        <div class="msg_left">
           <div class="imgs"><img src="http://localhost/foodshop/public/static/ifood/images/<?php echo $Foodinfo['image']; ?>" style="width: 200px;height: 200px; "></div>
        </div>
        <div class="msg_center">
            <ul>
                <li>餐品名称<?php echo $Foodinfo['cname']; ?></li>
                <li>原价：<?php echo $Foodinfo['price']; ?></li>
                <li>会员价格：<?php echo $Foodinfo['price']*0.85; ?></li>
                <li>单位：<?php echo $Foodinfo['unit']; ?></li>
                <li>购买数量：<input style="width: 30px; height: 30px;"  type="text" name="number" value="1"  ></li>
            </ul>
            <div class="sbt"><input type="submit" style="" value="添加到购物车"></div>
        </div>
        <div class="msg_right">
            <h2 style="font-weight: 800">餐品介绍：</h2>
            <div style="font-size: 15px"><?php echo $Foodinfo['introduce']; ?></div>
        </div>
        </form>
    </div>
</div>
</body>
</html>