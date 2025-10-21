<?php if (!defined('THINK_PATH')) exit(); /*a:2:{s:94:"D:\phpStudy\PHPTutorial\WWW\foodshop\public/../application/fshopwb\view\userinfo\infoedit.html";i:1648309451;s:77:"D:\phpStudy\PHPTutorial\WWW\foodshop\application\fshopwb\view\public\top.html";i:1648307406;}*/ ?>
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
<script>
    function loadRegion(sel,type_id,selName,url){
        jQuery("#"+selName+" option").each(function(){
            jQuery(this).remove();
        });
        jQuery("<option value=0>请选择</option>").appendTo(jQuery("#"+selName));
        if(jQuery("#"+sel).val()==0){
            return;
        }
        jQuery.getJSON(url,{pid:jQuery("#"+sel).val(),type:type_id},
                function(data){
                    if(data){
                        jQuery.each(data,function(idx,item){
                            jQuery("<option value="+item.id+">"+item.name+"</option>").appendTo(jQuery("#"+selName));
                        });
                    }else{
                        jQuery("<option value='0'>请选择</option>").appendTo(jQuery("#"+selName));
                    }
                }
        );
    }
</script>
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
            <li ><a href="<?php echo url('userinfo/infoedit'); ?>" class="act">编辑地址</a></li>
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
                                <form class="form-horizontal" role="form" action="<?php echo url('userinfo/updata'); ?>" method="post" >
                                    <input type="hidden" name="cprovince" value="<?php echo $infomessage['province']; ?>">
                                    <input type="hidden" name="ccity" value="<?php echo $infomessage['city']; ?>">
                                    <input type="hidden" name="ctown" value="<?php echo $infomessage['town']; ?>">
                                    <input type="hidden" name="id" value="<?php echo \think\Request::instance()->session('id'); ?>">
                                    <input type="hidden" name="uid" value="<?php echo \think\Request::instance()->session('id'); ?>">
                                    <div class="form-group">
                                        <label for="username" class="col-sm-2 control-label no-padding-right">用户姓名:</label>
                                        <div class="col-sm-6">
                                            <input class="form-control" id="" placeholder="" name="uname" required="" type="text" value="<?php echo $infomessage['uname']; ?>">
                                        </div>
                                        <p class="help-block col-sm-4 red">* 必填</p>
                                    </div>


                                    <div class="form-group">
                                        <label for="username" class="col-sm-2 control-label no-padding-right">手机号:</label>
                                        <div class="col-sm-6">
                                            <input class="form-control" id="" placeholder="" name="phone" required="" type="text" value="<?php echo $infomessage['phone']; ?>">
                                        </div>
                                        <p class="help-block col-sm-4 red">* 必填</p>
                                    </div>

                                    <div class="form-group">
                                        <label for="username" class="col-sm-2 control-label no-padding-right">地址:</label>
                                        <div class="col-sm-6">
                                            <input class="form-control"   type="text" disabled value="<?php echo $Opp['province']; ?><?php echo $Opp['city']; ?><?php echo $Opp['town']; ?>">
                                        </div>
                                        <p class="help-block col-sm-4 red">* 必填</p>
                                    </div>


                                    <div class="form-group">
                                        <label for="username" class="col-sm-2 control-label no-padding-right">修改地址:</label>
                                        <div class="col-lg-7">
                                            <select name="province" id="province" onchange="loadRegion('province',2,'city','<?php echo url('getRegion'); ?>');">
                                                <option value="0" selected>省份/直辖市</option>
                                                <?php if(is_array($province) || $province instanceof \think\Collection || $province instanceof \think\Paginator): $i = 0; $__LIST__ = $province;if( count($__LIST__)==0 ) : echo "" ;else: foreach($__LIST__ as $key=>$vo): $mod = ($i % 2 );++$i;?>
                                                <option value="<?php echo $vo['id']; ?>" ><?php echo $vo['name']; ?></option>
                                                <?php endforeach; endif; else: echo "" ;endif; ?>
                                            </select>
                                            <select name="city" id="city" onchange="loadRegion('city',3,'town','<?php echo url('getRegion'); ?>');">
                                                <option value="0">市/县</option>
                                            </select>
                                            <select name="town" id="town">
                                                <option value="0">镇/区</option>
                                            </select>
                                        </div>
                                        <p class="help-block col-sm-0 red">* 必填</p>
                                    </div>

                                    <div class="form-group">
                                        <label for="username" class="col-sm-2 control-label no-padding-right">详细地址:</label>
                                        <div class="col-sm-6">
                                            <input class="form-control" id="" placeholder="" name="address" required="" type="text" value="<?php echo $infomessage['address']; ?>">

                                        </div>
                                        <p class="help-block col-sm-4 red">* 必填</p>
                                    </div>

                                    <div class="form-group">
                                        <label for="username" class="col-sm-2 control-label no-padding-right">邮编:</label>
                                        <div class="col-sm-6">
                                            <input class="form-control" id="" placeholder="" name="zcood" required="" type="text" value="<?php echo $infomessage['zcood']; ?>">
                                        </div>
                                        <p class="help-block col-sm-4 red">* 必填</p>
                                    </div>

                                    <div class="form-group">
                                        <div class="col-sm-offset-2 col-sm-10">
                                            <button type="submit" class="btn btn-default">保存信息</button>
                                        </div>
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