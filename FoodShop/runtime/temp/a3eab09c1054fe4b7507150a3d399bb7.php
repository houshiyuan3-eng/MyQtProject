<?php if (!defined('THINK_PATH')) exit(); /*a:2:{s:93:"D:\phpStudy\PHPTutorial\WWW\foodshop\public/../application/fshopwb\view\foodcar\userfood.html";i:1648301375;s:77:"D:\phpStudy\PHPTutorial\WWW\foodshop\application\fshopwb\view\public\top.html";i:1648307406;}*/ ?>

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml" xml:lang="en">
<head>
    <meta http-equiv="Content-Type" content="text/html;charset=UTF-8">
    <title>提交订单</title>
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



<h3 class="common_title">确认收货地址</h3>

<div class="common_list_con clearfix">
    <dl>
        <dt>送餐到：</dt>
        <dd><input type="radio" name="" checked=""><?php echo $Userinfo['province']; ?>　<?php echo $Userinfo['city']; ?>　<?php echo $Userinfo['town']; ?>　<?php echo $Userinfo['address']; ?> (<?php echo $Userinfo['uname']; ?>　收)　　<?php echo $Userinfo['phone']; ?></dd>
    </dl>
    <a href="<?php echo url('userinfo/infoedit'); ?>" class="edit_site">编辑收货地址</a>

</div>

<h3 class="common_title">支付方式</h3>
<div class="common_list_con clearfix">
    <div class="pay_style_con clearfix">
        <input type="radio" name="pay_style" checked>
        <label class="cash"> <img src="http://localhost/foodshop/public/static/ifood/images/car.png" width="40px" height="40px" />货到付款</label>
        <label class="weixin"><img src="http://localhost/foodshop/public/static/ifood/images/weixin.png" width="40px" height="40px" />微信支付</label>
        <input type="radio" name="pay_style">
        <label class="zhifubao"><img src="http://localhost/foodshop/public/static/ifood/images/zhifubao.png" width="80px" height=40px" /></label>
        <input type="radio" name="pay_style">
        <label class="bank"><img src="http://localhost/foodshop/public/static/ifood/images/bank.png" width="40px" height="40px" />银行卡支付</label>
    </div>
</div>

<h3 class="common_title">商品列表</h3>

<div class="common_list_con clearfix">
    <ul class="goods_list_th clearfix">
        <li class="col01">商品名称</li>
        <li class="col02">商品单位</li>
        <li class="col03">商品价格(元)</li>
        <li class="col04">数量</li>
        <li class="col05">小计</li>
    </ul>
    <?php if(is_array($Foodmsg) || $Foodmsg instanceof \think\Collection || $Foodmsg instanceof \think\Paginator): $key = 0; $__LIST__ = $Foodmsg;if( count($__LIST__)==0 ) : echo "" ;else: foreach($__LIST__ as $key=>$row): $mod = ($key % 2 );++$key;?>
    <ul class="goods_list_td clearfix">
        <li class="col01"><?php echo $key; ?></li>
        <li class="col02"><img src="http://localhost/foodshop/public/static/ifood/images/<?php echo $row['image']; ?>"></li>
        <li class="col03"><?php echo $row['cname']; ?></li>
        <li class="col04"><?php echo $row['unit']; ?></li>
        <li class="col05"><?php echo $row['price']; ?></li>
        <li class="col06" id="number<?php echo $key; ?>"><?php echo $row['number']; ?></li>
        <li class="col07" id="total<?php echo $key; ?>"><?php echo $row['number']*$row['price']; ?></li>
    </ul>
    <?php endforeach; endif; else: echo "" ;endif; ?>
</div>

<h3 class="common_title">总金额结算</h3>

<div class="common_list_con clearfix">
    <div class="settle_con">
        <div class="total_goods_count">共<em id="thisnum"></em>件商品，总金额<b id="thistot"></b></div>
        <div class="transit">派送费：<b>10元</b></div>
        <div class="total_pay" >实付款：<b id="thispay" style="font-size: 18px"></b></div>
    </div>
</div>

<div class="order_submit clearfix">
    <form action="<?php echo url('sendfood'); ?>" method="post">
        <?php if(is_array($Foodmsg) || $Foodmsg instanceof \think\Collection || $Foodmsg instanceof \think\Paginator): $key = 0; $__LIST__ = $Foodmsg;if( count($__LIST__)==0 ) : echo "" ;else: foreach($__LIST__ as $key=>$row): $mod = ($key % 2 );++$key;?>
        <input type="hidden" name="id[]" value="<?php echo $row['id']; ?>"/>
        <input type="hidden" name="fid[]" value="<?php echo $row['fid']; ?>"/>
        <input type="hidden" name="sid[]" value="<?php echo $row['sid']; ?>"/>
        <input type="hidden" name="image[]" value="<?php echo $row['image']; ?>"/>
        <input type="hidden" name="uname[]" value="<?php echo \think\Request::instance()->session('name'); ?>"/>
        <input type="hidden" name="price[]" value="<?php echo $row['price']; ?>"/>
        <input type="hidden" name="unit[]" value="<?php echo $row['unit']; ?>"/>
        <input type="hidden" name="number[]" value="<?php echo $row['number']; ?>"/>
        <input type="hidden" name="cname[]" value="<?php echo $row['cname']; ?>"/>
        <input type="hidden" name="spend[]"   value="<?php echo $row['number']*$row['price']; ?>"/>
        <?php endforeach; endif; else: echo "" ;endif; ?>
        <input type="submit" value="提交订单" id="order_btn"/>
        <!--<a href="javascript:;" id="order_btn"></a>-->
    </form>

</div>





</body>
<script>
    var c=document.getElementsByClassName('goods_list_td');
    var num=0;
    var tot=0;
    for(var i=1;i<= c.length;i++){
        var number=document.getElementById('number'+i).innerHTML;
        var total=document.getElementById('total'+i).innerHTML;
        number=parseInt(number);
        total=parseInt(total);
        num+=number;
        tot+=total;
    }
    document.getElementById('thisnum').innerHTML=num;
    document.getElementById('thistot').innerHTML=tot+'元';
    document.getElementById('thispay').innerHTML=tot+10+'元';
</script>
</html>