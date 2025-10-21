<?php if (!defined('THINK_PATH')) exit(); /*a:2:{s:95:"D:\phpStudy\PHPTutorial\WWW\foodshop\public/../application/fshopwb\view\userinfo\infoorder.html";i:1648310244;s:77:"D:\phpStudy\PHPTutorial\WWW\foodshop\application\fshopwb\view\public\top.html";i:1648307406;}*/ ?>
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
            <li ><a href="<?php echo url('userinfo/infoindex'); ?>">个人信息</a></li>
            <li><a href="<?php echo url('userinfo/infoedit'); ?>">编辑地址</a></li>
            <li><a  class="act" href="<?php echo url('userinfo/infoorder'); ?>" >历史订单</a></li>
        </ul>
    </div>

    <div class="info_box">

        <div class="page-body">
            <div class="row">




                        <div class="col-lg-12 col-sm-12 col-xs-12">
                            <div class="widget">
                                <div class="widget-header bordered-bottom bordered-blue">
                                    <span class="widget-caption">历史订单</span>
                                </div>
                                <div class="widget-body">
                                    <div class="flip-scroll">
                                        <table class="table table-bordered table-hover">
                                            <thead class="">
                                            <tr>
                                                <th class="text-center">序号</th>
                                                <th class="text-center">用户姓名</th>
                                                <th class="text-center">食品图片</th>
                                                <th class="text-center">食品名称</th>
                                                <th class="text-center">价格(元)</th>
                                                <th class="text-center">单价</th>
                                                <th class="text-center">数量</th>
                                                <th class="text-center">花费(元)</th>
                                                <th class="text-center">消费时间</th>
                                                <th class="text-center">订单状态</th>
                                            </tr>
                                            </thead>
                                            <tbody>
                                            <!--name 接收后台数据 id命名 key数字排列-->
                                            <?php if(is_array($Foodorder) || $Foodorder instanceof \think\Collection || $Foodorder instanceof \think\Paginator): $key = 0; $__LIST__ = $Foodorder;if( count($__LIST__)==0 ) : echo "" ;else: foreach($__LIST__ as $key=>$row): $mod = ($key % 2 );++$key;?>
                                            <tr>
                                                <td align="center"><?php echo $key; ?></td>
                                                <td align="center"><?php echo $row['uname']; ?></td>
                                                <td align="center"><img src="http://localhost/foodshop/public/static/ifood/images/<?php echo $row['image']; ?>" style="width: 70px;height: 35px;" ></td>
                                                <td align="center"><?php echo $row['cname']; ?></td>
                                                <td align="center"><?php echo $row['price']; ?></td>
                                                <td align="center"><?php echo $row['unit']; ?></td>
                                                <td align="center"><?php echo $row['number']; ?></td>
                                                <td align="center"><?php echo $row['spend']; ?></td>
                                                <td align="center"><?php echo $row['date']; ?></td>
                                                <td align="center">
                                                    <?php if($row['finish'] == 0): ?>
                                                    <a class="btn btn-darkorange btn-sm" href="javascript:void(0);">正在配送</a>
                                                    <?php else: ?>
                                                    <a class="btn btn-success btn-sm" href="javascript:void(0);">订单完成</a>
                                                    <?php endif; ?>
                                                </td>
                                            </tr>
                                            <?php endforeach; endif; else: echo "" ;endif; ?>
                                            </tbody>

                                        </table>
                                        <!--//miss-->

                                    </div>
                                    <div>
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