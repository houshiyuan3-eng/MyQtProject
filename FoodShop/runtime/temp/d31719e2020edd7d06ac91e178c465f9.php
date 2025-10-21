<?php if (!defined('THINK_PATH')) exit(); /*a:2:{s:88:"D:\phpStudy\PHPTutorial\WWW\foodshop\public/../application/fshopwb\view\index\index.html";i:1648045382;s:77:"D:\phpStudy\PHPTutorial\WWW\foodshop\application\fshopwb\view\public\top.html";i:1648307406;}*/ ?>
<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
    <meta charset="utf-8">
    <title>在线订餐网站</title>

    <!--<meta name="description" content="Dashboard">-->
    <!--<meta name="viewport" content="width=device-width, initial-scale=1.0">-->
    <!--<meta http-equiv="X-UA-Compatible" content="IE=edge">-->
    <!--<meta http-equiv="Content-Type" content="text/html; charset=UTF-8">-->
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



</div>
<div class="logo">
    <div class="logo_center">

    </div>
</div>

<!--轮播图区域-->
<div class="new">
    <div class="new_nav">
        <ul>
            <li>
                <div class="new_nav_li_left">点心蛋糕</div>
                <div class="new_nav_li_right">  > </div>
                <div id="foodbox" >
                    <?php if(is_array($fooda) || $fooda instanceof \think\Collection || $fooda instanceof \think\Paginator): $i = 0; $__LIST__ = $fooda;if( count($__LIST__)==0 ) : echo "" ;else: foreach($__LIST__ as $key=>$fooda): $mod = ($i % 2 );++$i;?>
                    <div><a href="foodinfo?id=<?php echo $fooda['id']; ?>"><?php echo $fooda['cname']; ?></a></div>
                    <?php endforeach; endif; else: echo "" ;endif; ?>
                </div>
            </li>
            <li>
                <div class="new_nav_li_left">饼干膨化</div>
                <div class="new_nav_li_right">  > </div>
                <div id="foodbox" >
                    <?php if(is_array($foodb) || $foodb instanceof \think\Collection || $foodb instanceof \think\Paginator): $i = 0; $__LIST__ = $foodb;if( count($__LIST__)==0 ) : echo "" ;else: foreach($__LIST__ as $key=>$foodb): $mod = ($i % 2 );++$i;?>
                    <div><a href="foodinfo?id=<?php echo $foodb['id']; ?>"><?php echo $foodb['cname']; ?></a></div>
                    <?php endforeach; endif; else: echo "" ;endif; ?>
                </div>
            </li>
            <li>
                <div class="new_nav_li_left">熟食肉类</div>
                <div class="new_nav_li_right">  > </div>
                <div id="foodbox" >
                    <?php if(is_array($foodc) || $foodc instanceof \think\Collection || $foodc instanceof \think\Paginator): $i = 0; $__LIST__ = $foodc;if( count($__LIST__)==0 ) : echo "" ;else: foreach($__LIST__ as $key=>$foodc): $mod = ($i % 2 );++$i;?>
                    <div><a href="foodinfo?id=<?php echo $foodc['id']; ?>"><?php echo $foodc['cname']; ?></a></div>
                    <?php endforeach; endif; else: echo "" ;endif; ?>
                </div>
            </li>
            <li>
                <div class="new_nav_li_left">素食卤味</div>
                <div class="new_nav_li_right">  > </div>
                <div id="foodbox" >
                    <?php if(is_array($foodd) || $foodd instanceof \think\Collection || $foodd instanceof \think\Paginator): $i = 0; $__LIST__ = $foodd;if( count($__LIST__)==0 ) : echo "" ;else: foreach($__LIST__ as $key=>$foodd): $mod = ($i % 2 );++$i;?>
                    <div><a href="foodinfo?id=<?php echo $foodd['id']; ?>"><?php echo $foodd['cname']; ?></a></div>
                    <?php endforeach; endif; else: echo "" ;endif; ?>
                </div>
            </li>
            <li>
                <div class="new_nav_li_left">海鲜河鲜</div>
                <div class="new_nav_li_right">  > </div>
                <div id="foodbox" >
                    <?php if(is_array($foode) || $foode instanceof \think\Collection || $foode instanceof \think\Paginator): $i = 0; $__LIST__ = $foode;if( count($__LIST__)==0 ) : echo "" ;else: foreach($__LIST__ as $key=>$foode): $mod = ($i % 2 );++$i;?>
                    <div><a href="foodinfo?id=<?php echo $foode['id']; ?>"><?php echo $foode['cname']; ?></a></div>
                    <?php endforeach; endif; else: echo "" ;endif; ?>
                </div>
            </li>
            <li>
                <div class="new_nav_li_left">花茶奶茶</div>
                <div class="new_nav_li_right">  > </div>
                <div id="foodbox" >
                    <?php if(is_array($foodf) || $foodf instanceof \think\Collection || $foodf instanceof \think\Paginator): $i = 0; $__LIST__ = $foodf;if( count($__LIST__)==0 ) : echo "" ;else: foreach($__LIST__ as $key=>$foodf): $mod = ($i % 2 );++$i;?>
                    <div><a href="foodinfo?id=<?php echo $foodf['id']; ?>"><?php echo $foodf['cname']; ?></a></div>
                    <?php endforeach; endif; else: echo "" ;endif; ?>
                </div>
            </li>
            <li>
                <div class="new_nav_li_left">家常小菜</div>
                <div class="new_nav_li_right">  > </div>
                <div id="foodbox" >
                    <?php if(is_array($foodg) || $foodg instanceof \think\Collection || $foodg instanceof \think\Paginator): $i = 0; $__LIST__ = $foodg;if( count($__LIST__)==0 ) : echo "" ;else: foreach($__LIST__ as $key=>$foodg): $mod = ($i % 2 );++$i;?>
                    <div><a href="foodinfo?id=<?php echo $foodg['id']; ?>"><?php echo $foodg['cname']; ?></a></div>
                    <?php endforeach; endif; else: echo "" ;endif; ?>
                </div>
            </li>
            <li>
                <div class="new_nav_li_left">快餐简食</div>
                <div class="new_nav_li_right">  > </div>
                <div id="foodbox" >
                    <?php if(is_array($foodh) || $foodh instanceof \think\Collection || $foodh instanceof \think\Paginator): $i = 0; $__LIST__ = $foodh;if( count($__LIST__)==0 ) : echo "" ;else: foreach($__LIST__ as $key=>$foodh): $mod = ($i % 2 );++$i;?>
                    <div><a href="foodinfo?id=<?php echo $foodh['id']; ?>"><?php echo $foodh['cname']; ?></a></div>
                    <?php endforeach; endif; else: echo "" ;endif; ?>
                </div>
            </li>
            <li>
                <div class="new_nav_li_left">蔬菜水果</div>
                <div class="new_nav_li_right">  > </div>
                <div id="foodbox" >
                    <?php if(is_array($foodi) || $foodi instanceof \think\Collection || $foodi instanceof \think\Paginator): $i = 0; $__LIST__ = $foodi;if( count($__LIST__)==0 ) : echo "" ;else: foreach($__LIST__ as $key=>$foodi): $mod = ($i % 2 );++$i;?>
                    <div><a href="foodinfo?id=<?php echo $foodi['id']; ?>"><?php echo $foodi['cname']; ?></a></div>
                    <?php endforeach; endif; else: echo "" ;endif; ?>
                </div>
            </li>
        </ul>
    </div>
    <!--轮播图-->
    <div id="new_img">
        <ul id="pic">
            <!--<li class="active"><img src="http://localhost/foodshop/public/static/ifood/images/1.jpg" /></li>-->
            <?php if(is_array($imgmsg) || $imgmsg instanceof \think\Collection || $imgmsg instanceof \think\Paginator): $key = 0; $__LIST__ = $imgmsg;if( count($__LIST__)==0 ) : echo "" ;else: foreach($__LIST__ as $key=>$row): $mod = ($key % 2 );++$key;?>
            <li class=""><img src="http://localhost/foodshop/public/static/ifood/images/<?php echo $row['adress']; ?>" style="width: 1000px;height: 400px" /></li>
            <?php endforeach; endif; else: echo "" ;endif; ?>
        </ul>
        <!--下部黑影-->
        <div id="bloack">
            <div id="boxa">
                <?php if(is_array($imgmsg) || $imgmsg instanceof \think\Collection || $imgmsg instanceof \think\Paginator): $key = 0; $__LIST__ = $imgmsg;if( count($__LIST__)==0 ) : echo "" ;else: foreach($__LIST__ as $key=>$row): $mod = ($key % 2 );++$key;?>
                <input id="value" class="" type="text"  value="<?php echo $row['title']; ?>" readonly="readonly" />
                <?php endforeach; endif; else: echo "" ;endif; ?>
            </div>

            <ul id="dot">
                <li class="active">1</li>
                <li>2</li>
                <li>3</li>
                <li>4</li>
                <li>5</li>
            </ul>
        </div><!--block结束-->

        <div id="new_left"><span style="color:rgba(255,255,255,1); line-height:60px; margin-left:5px; font-size:36px;">&lt;</span></div>
        <div id="new_right"><span style="color:rgba(255,255,255,1); line-height:60px; margin-left:17px; font-size:36px;">&gt;</span></div>
    </div><!--new_img结束-->
</div><!--new结束-->

<!--广告推销-->
<div class="adv">
    <div class="adv_center">
        <div id="adv_center_top">
            <ol>
                <li id="tab1" onclick="f(1)" class="style">推荐餐品</li>
                <li id="tab2" onclick="f(2)">折扣餐品</li>
            </ol>
        </div>
        <div class="adv_center_buttom">
            <div class="tab_box" id="tab1_box" style="display: block">
                <div>
                    <?php if(is_array($comment) || $comment instanceof \think\Collection || $comment instanceof \think\Paginator): $key = 0; $__LIST__ = $comment;if( count($__LIST__)==0 ) : echo "" ;else: foreach($__LIST__ as $key=>$row): $mod = ($key % 2 );++$key;?>
                    <div class="tab_box_msg">
                        <div class="tab_box_img"><a href="foodinfo?id=<?php echo $row['id']; ?>"><img src="http://localhost/foodshop/public/static/ifood/images/<?php echo $row['image']; ?>" style="width: 170px;height: 160px" /></a></div>
                        <div class="tab_box_txt"><?php echo $row['cname']; ?></div>
                        <div class="tab_box_pic">￥<?php echo $row['price']; ?><?php echo $row['unit']; ?></div>
                    </div>
                    <?php endforeach; endif; else: echo "" ;endif; ?>
                </div>
            </div>
            <div class="tab_box" id="tab2_box">
                <div>
                    <?php if(is_array($discount) || $discount instanceof \think\Collection || $discount instanceof \think\Paginator): $key = 0; $__LIST__ = $discount;if( count($__LIST__)==0 ) : echo "" ;else: foreach($__LIST__ as $key=>$row): $mod = ($key % 2 );++$key;?>
                    <div class="tab_box_msg">
                        <div class="tab_box_img"><a href="foodinfo?id=<?php echo $row['id']; ?>"><img src="http://localhost/foodshop/public/static/ifood/images/<?php echo $row['image']; ?>" style="width: 170px;height: 160px" /></a></div>
                        <div class="tab_box_txt"><?php echo $row['cname']; ?></div>
                        <div class="tab_box_pic">￥<?php echo $row['price']; ?><?php echo $row['unit']; ?></div>
                    </div>
                    <?php endforeach; endif; else: echo "" ;endif; ?>
                </div>
            </div>
        </div>
    </div>
</div>

</body>
<script src="http://localhost/foodshop/public/static/ifood/style/javascript.js"></script>
<!--<script src="http://localhost/foodshop/public/static/admin/style/bootstrap.js"></script>-->
<!--<script src="http://localhost/foodshop/public/static/admin/style/jquery.js"></script>-->
<!--&lt;!&ndash;Beyond Scripts&ndash;&gt;-->
<!--<script src="http://localhost/foodshop/public/static/admin/style/beyond.js"></script>-->
</html>
