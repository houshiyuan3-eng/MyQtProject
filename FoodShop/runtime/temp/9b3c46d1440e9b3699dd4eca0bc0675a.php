<?php if (!defined('THINK_PATH')) exit(); /*a:3:{s:84:"D:\phpStudy\PHPTutorial\WWW\foodshop\public/../application/admin\view\cfood\add.html";i:1647700846;s:75:"D:\phpStudy\PHPTutorial\WWW\foodshop\application\admin\view\public\top.html";i:1648311974;s:76:"D:\phpStudy\PHPTutorial\WWW\foodshop\application\admin\view\public\left.html";i:1648388244;}*/ ?>
<!DOCTYPE html>
<html><head>
	    <meta charset="utf-8">
    <title>在线订餐网站后台</title>

    <meta name="description" content="Dashboard">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
    <!--Basic Styles-->
    <link href="http://localhost/foodshop/public/static/admin/style/bootstrap.css" rel="stylesheet">
    <link href="http://localhost/foodshop/public/static/admin/style/font-awesome.css" rel="stylesheet">
    <link href="http://localhost/foodshop/public/static/admin/style/weather-icons.css" rel="stylesheet">

    <!--Beyond styles-->
    <link id="beyond-link" href="http://localhost/foodshop/public/static/admin/style/beyond.css" rel="stylesheet" type="text/css">
    <link href="http://localhost/foodshop/public/static/admin/style/demo.css" rel="stylesheet">
    <link href="http://localhost/foodshop/public/static/admin/style/typicons.css" rel="stylesheet">
    <link href="http://localhost/foodshop/public/static/admin/style/animate.css" rel="stylesheet">
    <script src="http://localhost/foodshop/public/static/admin/ueditor/ueditor.config.js"></script>
    <script src="http://localhost/foodshop/public/static/admin/ueditor/ueditor.all.min.js"></script>
    <script src="http://localhost/foodshop/public/static/admin/ueditor/lang/zh-cn/zh-cn.js"></script>
    
</head>
<body>
<!-- 头部 -->
<div class="navbar">
    <div class="navbar-inner">
        <div class="navbar-container">
            <!-- Navbar Barnd -->
            <div class="navbar-header pull-left">
                <a href="#" class="navbar-brand">
                    <small>
                        <!--<img src="http://localhost/foodshop/public/static/admin/images/logo.png" alt="">-->
                    </small>
                </a>
            </div>
            <!-- /Navbar Barnd -->
            <!-- Sidebar Collapse -->
            <div class="sidebar-collapse" id="sidebar-collapse">
                <i class="collapse-icon fa fa-bars"></i>
            </div>
            <!-- /Sidebar Collapse -->
            <!-- Account Area and Settings -->
            <div class="navbar-header pull-right">
                <div class="navbar-account">
                    <ul class="account-area">
                        <li>
                            <a class="login-area dropdown-toggle" data-toggle="dropdown">
                                <div class="avatar" title="View your public profile">
                                    <!--<img src="http://localhost/foodshop/public/static/admin/images/adam-jansen.jpg">-->
                                </div>
                                <section>
                                    <h2><span class="profile"><span></span></span></h2>
                                </section>
                            </a>
                            <!--Login Area Dropdown-->
                            <ul class="pull-right dropdown-menu dropdown-arrow dropdown-login-area">
                                <li class="username"><a>David Stevenson</a></li>
                                <li class="dropdown-footer">
                                    <a href="/admin/user/logout.html">
                                        退出登录
                                    </a>
                                </li>
                                <li class="dropdown-footer">
                                    <a href="/admin/user/changePwd.html">
                                        修改密码
                                    </a>
                                </li>
                            </ul>
                            <!--/Login Area Dropdown-->
                        </li>
                        <!-- /Account Area -->
                        <!--Note: notice that setting div must start right after account area lst.
                            no space must be between these elements-->
                        <!-- Settings -->
                    </ul>
                </div>
            </div>
            <!-- /Account Area and Settings -->
        </div>
    </div>
</div>

<!-- /头部 -->

	
	<div class="main-container container-fluid">
		<div class="page-container">
			            <!-- Page Sidebar -->
            <div class="page-sidebar" id="sidebar">
    <!-- Page Sidebar Header-->
    <div class="sidebar-header-wrapper">
        <input class="searchinput" type="text">
        <i class="searchicon fa fa-search"></i>
        <div class="searchhelper">Search Reports, Charts, Emails or Notifications</div>
    </div>
    <!-- /Page Sidebar Header -->
    <!-- Sidebar Menu -->
    <ul class="nav sidebar-menu" >
        <!--Dashboard-->
        <li >
            <a href="#" class="menu-dropdown">
                <i class="menu-icon fa fa-user"></i>
                <span class="menu-text">管理员</span>
                <i class="menu-expand"></i>
            </a>
            <ul class="submenu">
                <li>
                    <a href="<?php echo url('admin/lst'); ?>">
                                    <span class="menu-text">
                                        管理员管理                                    </span>
                        <i class="menu-expand"></i>
                    </a>
                </li>
            </ul>
        </li>
        <li >
            <a href="#" class="menu-dropdown">
                <i class="menu-icon fa fa-user"></i>
                <span class="menu-text">用户管理</span>
                <i class="menu-expand"></i>
            </a>
            <ul class="submenu">
                <li>
                    <a href="<?php echo url('admin/user/lst'); ?>">
                                    <span class="menu-text">
                                        用户列表                                    </span>
                        <i class="menu-expand"></i>
                    </a>
                </li>
                <li>
                    <a href="/admin/document/index.html">
                                    <span class="menu-text">
                                       用户身份及消费
                                    </span>
                        <i class="menu-expand"></i>
                    </a>
                </li>
            </ul>
        </li>

        <li>
            <a href="#" class="menu-dropdown">
                <i class="menu-icon fa fa-file-text"></i>
                <span class="menu-text">餐品管理</span>
                <i class="menu-expand"></i>
            </a>
            <ul class="submenu">
                <li>
                    <a href="<?php echo url('admin/cfood/lst'); ?>">
                                    <span class="menu-text">
                                        餐品列表                                    </span>
                        <i class="menu-expand"></i>
                    </a>
                </li>
                <li>
                    <a href="<?php echo url('admin/cfood/add'); ?>">
                                    <span class="menu-text">
                                        品种分类                                    </span>
                        <i class="menu-expand"></i>
                    </a>
                </li>
                <li>
                    <a href="<?php echo url('admin/cfood/commentfood'); ?>">
                                    <span class="menu-text">
                                        新上食品与广告                                   </span>
                        <i class="menu-expand"></i>
                    </a>
                </li>
                <li>
                    <a href="<?php echo url('admin/cfood/discountfood'); ?>">
                                    <span class="menu-text">
                                        打折食品                                </span>
                        <i class="menu-expand"></i>
                    </a>
                </li>
            </ul>
        </li>

        <li>
            <a href="#" class="menu-dropdown">
                <i class="menu-icon fa fa-gear"></i>
                <span class="menu-text">订单信息</span>
                <i class="menu-expand"></i>
            </a>
            <ul class="submenu">
                <li>
                    <a href="<?php echo url('admin/sendfood/lst'); ?>">
                                    <span class="menu-text">
                                        订单管理                                  </span>
                        <i class="menu-expand"></i>
                    </a>
                </li>

            </ul>
        </li>
        <li >
            <a href="#" class="menu-dropdown">
                <i class="menu-icon fa fa-user"></i>
                <span class="menu-text">广告管理</span>
                <i class="menu-expand"></i>
            </a>
            <ul class="submenu">
                <li>
                    <a href="<?php echo url('advert/lst'); ?>">
                                    <span class="menu-text">
                                        轮播图广告                                   </span>
                        <i class="menu-expand"></i>
                    </a>
                </li>
            </ul>
        </li>
        <li>
            <a href="#" class="menu-dropdown">
                <i class="menu-icon fa fa-gear"></i>
                <span class="menu-text">营业情况</span>
                <i class="menu-expand"></i>
            </a>
            <ul class="submenu">
                <li>
                    <a href="/admin/document/index.html">
                                    <span class="menu-text">
                                        餐品销售排行                                  </span>
                        <i class="menu-expand"></i>
                    </a>
                </li>
                <li>
                    <a href="/admin/document/index.html">
                                    <span class="menu-text">
                                       金额收入                                  </span>
                        <i class="menu-expand"></i>
                    </a>
                </li>
            </ul>
        </li>


    </ul>
    <!-- /Sidebar Menu -->
</div>
            <!-- /Page Sidebar -->
            <!-- Page Content -->
            <div class="page-content">
                <!-- Page Breadcrumb -->
                <div class="page-breadcrumbs">
                    <ul class="breadcrumb">
                                        <li>
                        <a href="#">系统</a>
                    </li>
                                        <li>
                        <a href="#">餐品列表</a>
                    </li>
                                        <li class="active">添加餐品</li>
                                        </ul>
                </div>
                <!-- /Page Breadcrumb -->

                <!-- Page Body -->
                <div class="page-body">
                    
<div class="row" style="margin-left: 60px">
    <div class="col-lg-10s col-sm-8 col-xs-8s text-center">
        <div class="widget">
            <div class="widget-header bordered-bottom bordered-blue">
                <span class="widget-caption">添加餐品</span>
            </div>
            <div class="widget-body">
                <div id="horizontal-form">
                    <form class="form-horizontal" role="form" action="<?php echo url('insertfood'); ?>" method="post">
                        <div class="form-group">
                            <label for="username" class="col-sm-2 control-label no-padding-right">所属分类</label>
                            <div class="col-sm-3">
                                <select name="uid">
                                    <option>选食物分类</option>
                                    <option  value="1">点心/蛋糕</option>
                                    <option  value="2">饼干膨化</option>
                                    <option  value="3">熟食肉类</option>
                                    <option  value="4">素食卤味</option>
                                    <option  value="5">海鲜、河鲜</option>
                                    <option  value="6">花茶、奶茶</option>
                                    <option  value="7">家常小菜</option>
                                    <option  value="8">快餐简食</option>
                                    <option  value="9">蔬菜水果</option>
                                </select>
                            </div>
                            <p class="help-block col-sm-1 red"></p>
                        </div>

                        <div class="form-group">
                            <label for="username" class="col-sm-2 control-label no-padding-right">食物图片</label>
                            <div class="col-sm-6">
                              <input type="file" name="image">
                            </div>
                            <p class="help-block col-sm-1 red"></p>
                        </div>
                        <div class="form-group">
                            <label for="username" class="col-sm-2 control-label no-padding-right">食品名称</label>
                            <div class="col-sm-6">
                                <input class="form-control"  placeholder="" name="cname" required="" type="text">
                            </div>
                            <p class="help-block col-sm-4 red"></p>
                        </div>

                        <div class="form-group">
                            <label for="username" class="col-sm-2 control-label no-padding-right">食品单价</label>
                            <div class="col-sm-2">
                                <input class="form-control"  placeholder="" name="price" required="" type="text">
                            </div>
                            <p class="help-block col-sm-4 red">（单位：元）</p>
                        </div>

                        <div class="form-group">
                            <label for="username" class="col-sm-2 control-label no-padding-right">信息介绍</label>
                            <div class="col-sm-6">
                                <textarea id="content" name="introduce"></textarea>
                            </div>
                            <p class="help-block col-sm-1 red">* 必填</p>
                        </div>



                        <div class="form-group">
                            <div class="col-sm-offset-2 col-sm-2">
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
                <!-- /Page Body -->
            </div>
            <!-- /Page Content -->
		</div>	
	</div>

	    <!--Basic Scripts-->
    <script src="http://localhost/foodshop/public/static/admin/style/jquery_002.js"></script>
    <script src="http://localhost/foodshop/public/static/admin/style/bootstrap.js"></script>
    <script src="http://localhost/foodshop/public/static/admin/style/jquery.js"></script>
    <!--Beyond Scripts-->
    <script src="http://localhost/foodshop/public/static/admin/style/beyond.js"></script>
<script type="text/javascript">

    //实例化编辑器
    //建议使用工厂方法getEditor创建和引用编辑器实例，如果在某个闭包下引用该编辑器，直接调用UE.getEditor('editor')就能拿到相关的实例
    UE.getEditor('content',{initialFrameWidth:550,initialFrameHeight:200,});



</script>


</body></html>