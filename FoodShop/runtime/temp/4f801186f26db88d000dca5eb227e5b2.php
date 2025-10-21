<?php if (!defined('THINK_PATH')) exit(); /*a:2:{s:95:"D:\phpStudy\PHPTutorial\WWW\foodshop\public/../application/fshopwb\view\userinfo\infoindex.html";i:1648306613;s:77:"D:\phpStudy\PHPTutorial\WWW\foodshop\application\fshopwb\view\public\top.html";i:1648307406;}*/ ?>
<!DOCTYPE html>
<html><head>
    <meta charset="utf-8">
    <title>在线订餐网站</title>

    <meta name="description" content="Dashboard">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
    <!--Basic Styles-->
    <link rel="stylesheet" type="text/css"  href="http://localhost/foodshop/public/static/ifood/style/food.css" >
    <link rel="stylesheet" type="text/css"  href="http://localhost/foodshop/public/static/ifood/style/info.css" >
    <link href="http://localhost/foodshop/public/static/ifood/style/bootstrap.css" rel="stylesheet">
    <link href="http://localhost/foodshop/public/static/ifood/style/font-awesome.css" rel="stylesheet">
    <link href="http://localhost/foodshop/public/static/ifood/style/weather-icons.css" rel="stylesheet">

    <!--Beyond styles-->
    <link id="beyond-link" href="http://localhost/foodshop/public/static/ifood/style/beyond.css" rel="stylesheet" type="text/css">
    <link href="http://localhost/foodshop/public/static/ifood/style/demo.css" rel="stylesheet">
    <link href="http://localhost/foodshop/public/static/ifood/style/typicons.css" rel="stylesheet">
    <link href="http://localhost/foodshop/public/static/ifood/style/animate.css" rel="stylesheet">

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


<div class="info_big">
    <div class="infoleft">
        <div class="infoleft_top">用户信息</div>
        <ul>
            <li ><a class="act" href="<?php echo url('userinfo/infoindex'); ?>">个人信息</a></li>
            <li><a href="<?php echo url('userinfo/infoedit'); ?>">编辑地址</a></li>
            <li><a href="<?php echo url('userinfo/infoorder'); ?>">历史订单</a></li>
        </ul>
    </div>

    <div class="info_box">

        <div class="page-body">
            <div class="row">
                <div class="col-lg-12 col-sm-12 col-xs-12">
                    <div class="widget">
                        <div class="widget-header bordered-bottom bordered-blue">
                            <span class="widget-caption">个人信息</span>
                        </div>


                        <div class="widget-body">
                            <div id="horizontal-form">
                                <form class="form-horizontal" role="form" action="<?php echo url('update'); ?>" method="post">

                                    <div class="form-group">
                                        <label for="username" class="col-sm-2 control-label no-padding-right">用户姓名:</label>
                                        <div class="col-sm-6">
                                            <input class="form-control" disabled type="text" value="<?php echo $infomsg['uname']; ?>">
                                        </div>
                                        <p class="help-block col-sm-4 red"></p>
                                    </div>

                                    <div class="form-group">
                                        <label for="username" class="col-sm-2 control-label no-padding-right">会员信息:</label>
                                        <div class="col-sm-6">
                                            <input class="form-control"  type="text" value="普通会员" disabled>
                                        </div>
                                    </div>


                                    <div class="form-group">
                                        <label for="username" class="col-sm-2 control-label no-padding-right">手机号:</label>
                                        <div class="col-sm-6">
                                            <input class="form-control" disabled id="eqname" placeholder="" name="eqname" required="" type="text" value=" <?php echo $infomsg['phone']; ?>">

                                        </div>
                                        <p class="help-block col-sm-4 red">* 重要信息</p>
                                    </div>



                                    <div class="form-group">
                                        <label for="username" class="col-sm-2 control-label no-padding-right">住址:</label>
                                        <div class="col-sm-6">
                                            <input class="form-control" disabled id="eqname" placeholder="" name="eqname" required="" type="text" value=" <?php echo $infomsg['province']; ?><?php echo $infomsg['city']; ?><?php echo $infomsg['town']; ?>">

                                        </div>
                                        <p class="help-block col-sm-4 red">* 重要信息</p>
                                    </div>

                                    <div class="form-group">
                                        <label for="username" class="col-sm-2 control-label no-padding-right">详细地址:</label>
                                        <div class="col-sm-6">
                                            <input class="form-control" disabled id="eqname" placeholder="" name="eqname" required="" type="text" value="<?php echo $infomsg['address']; ?>">


                                        </div>
                                        <p class="help-block col-sm-4 red">* 重要信息</p>
                                    </div>

                                    <div class="form-group">
                                        <label for="username" class="col-sm-2 control-label no-padding-right">邮编:</label>
                                        <div class="col-sm-6">
                                            <input class="form-control" disabled id="eqname" placeholder="" name="eqname" required="" type="text" value="<?php echo $infomsg['zcood']; ?>">

                                        </div>
                                        <p class="help-block col-sm-4 red"></p>
                                    </div>
                                </form>
                            </div>
                        </div>





                    </div>
                </div>
            </div>

        </div>
    </div>
</div>






<!--Basic Scripts-->
<script src="http://localhost/foodshop/public/static/ifood/style/jquery_002.js"></script>
<script src="http://localhost/foodshop/public/static/ifood/style/bootstrap.js"></script>
<script src="http://localhost/foodshop/public/static/ifood/style/jquery.js"></script>
<!--Beyond Scripts-->
<script src="http://localhost/foodshop/public/static/ifood/style/beyond.js"></script>




</body></html>