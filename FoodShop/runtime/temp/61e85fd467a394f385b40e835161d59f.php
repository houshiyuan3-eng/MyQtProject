<?php if (!defined('THINK_PATH')) exit(); /*a:2:{s:90:"D:\phpStudy\PHPTutorial\WWW\foodshop\public/../application/fshopwb\view\userorder\lst.html";i:1648309792;s:77:"D:\phpStudy\PHPTutorial\WWW\foodshop\application\fshopwb\view\public\top.html";i:1648307406;}*/ ?>

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml" xml:lang="en">
<head>
    <meta http-equiv="Content-Type" content="text/html;charset=UTF-8">
    <title>购物车</title>
    <link rel="stylesheet" type="text/css" href="http://localhost/foodshop/public/static/ifood/style/foodcar.css">
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

<div class="total_count">配送订单<em></em></div>
<ul class="cart_list_th clearfix">
    <li class="col01">商品名称</li>
    <li class="col02">商品单位</li>
    <li class="col03">商品价格</li>
    <li class="col04">数量</li>
    <li class="col05">小计</li>
    <li class="col06">操作</li>
</ul>
<form action="<?php echo url('update'); ?>" method="post">
    <?php if(is_array($Orderlst) || $Orderlst instanceof \think\Collection || $Orderlst instanceof \think\Paginator): $key = 0; $__LIST__ = $Orderlst;if( count($__LIST__)==0 ) : echo "" ;else: foreach($__LIST__ as $key=>$row): $mod = ($key % 2 );++$key;?>
    <ul class="cart_list_td clearfix">
        <li class="col01"><input type="checkbox" style="width: 50px;height: 50px;"/><?php echo $key; ?></li>
        <li class="col02"><img src="http://localhost/foodshop/public/static/ifood/images/<?php echo $row['image']; ?>"></li>
        <li class="col03"><?php echo $row['cname']; ?><br><em><?php echo $row['price']; ?>/<?php echo $row['unit']; ?></em></li>
        <li class="col04"><?php echo $row['unit']; ?></li>
        <li class="col05"><input id="tprice<?php echo $key; ?>" value="<?php echo $row['price']; ?>" style="width: 40px;height: 30px;border: none;text-align: center"disabled/>￥</li>
        <li class="col06">
            <?php echo $row['number']; ?>
        </li>
        <li class="col07"><input id="thisprice<?php echo $key; ?>"  value="<?php echo $row['price']*$row['number']; ?>" style="width: 30px;height: 30px;border: none;text-align: center"disabled/>￥</li>
        <li class="col08"><a href="javascript:;" onClick="warning('确实签收吗？', 'assure?id=<?php echo $row['id']; ?>')">确认签收</a></li>
    </ul>
    <?php endforeach; endif; else: echo "" ;endif; ?>



    <ul class="settlements">
        <li class="col04"><input type="submit" value="查看配送地图"/></li>
    </ul>
</form>
<script src="http://localhost/foodshop/public/static/admin/style/jquery_002.js"></script>
<script src="http://localhost/foodshop/public/static/admin/style/bootstrap.js"></script>
<script src="http://localhost/foodshop/public/static/admin/style/jquery.js"></script>
<!--Beyond Scripts-->
<script src="http://localhost/foodshop/public/static/admin/style/beyond.js"></script>
</body>
</html>
