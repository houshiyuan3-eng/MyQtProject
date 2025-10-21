<?php if (!defined('THINK_PATH')) exit(); /*a:3:{s:85:"D:\phpStudy\PHPTutorial\WWW\foodshop\public/../application/admin\view\advert\lst.html";i:1647870462;s:75:"D:\phpStudy\PHPTutorial\WWW\foodshop\application\admin\view\public\top.html";i:1648311974;s:76:"D:\phpStudy\PHPTutorial\WWW\foodshop\application\admin\view\public\left.html";i:1648388244;}*/ ?>
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
    
</head>
<body>
	<!-- 头部 -->
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
                                        <li class="active">广告管理</li>
                        <li class="active">轮播图管理</li>
                                        </ul>
                </div>
                <!-- /Page Breadcrumb -->

                <!-- Page Body -->
                <div class="page-body">
                    

<div class="row">
    <div class="col-lg-12 col-sm-12 col-xs-12">
        <div class="widget">
            <div class="widget-body">
                <div class="flip-scroll">
                    <table class="table table-bordered table-hover">
                        <thead class="">
                            <tr>
                                <th class="text-center">序号</th>
                                <th class="text-center">轮播图片</th>
                                <th class="text-center">广告语</th>
                                <th class="text-center">操作</th>
                            </tr>
                        </thead>
                        <tbody>
                        <!--name 接收后台数据 id命名 key数字排列-->
                        <?php if(is_array($rows) || $rows instanceof \think\Collection || $rows instanceof \think\Paginator): $key = 0; $__LIST__ = $rows;if( count($__LIST__)==0 ) : echo "" ;else: foreach($__LIST__ as $key=>$row): $mod = ($key % 2 );++$key;?>
                        <tr>
                            <td align="center"><?php echo $key; ?></td>
                            <td align="center"><img src="http://localhost/foodshop/public/static/ifood/images/<?php echo $row['adress']; ?>" style="width: 70px;height: 35px;" onmouseover="ops(<?php echo $key; ?>)"onmouseout="cle(<?php echo $key; ?>)"></td>
                            <td align="center">点击编辑查看</td>
                            <td align="center">

                                <a  href="edit?id=<?php echo $row['id']; ?>"
                                    class="btn btn-primary btn-sm shiny">
                                    <i class="fa fa-edit"></i> 编辑
                                </a>

                            </td>
                        </tr>
                        <?php endforeach; endif; else: echo "" ;endif; ?>
                         </tbody>

                    </table>
                </div>
                <div>
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
    <div style="width: 100%;height: 250px;">
        <div id="box" style="width: 600px;height:250px;margin: 0 auto;overflow: hidden ">
            <?php if(is_array($rows) || $rows instanceof \think\Collection || $rows instanceof \think\Paginator): $key = 0; $__LIST__ = $rows;if( count($__LIST__)==0 ) : echo "" ;else: foreach($__LIST__ as $key=>$row): $mod = ($key % 2 );++$key;?>
                <img  src="http://localhost/foodshop/public/static/ifood/images/<?php echo $row['adress']; ?>" style="width: 600px;height: 250px;display: none">
            <?php endforeach; endif; else: echo "" ;endif; ?>
        </div>
    </div>

	    <!--Basic Scripts-->
    <script src="http://localhost/foodshop/public/static/admin/style/jquery_002.js"></script>
    <script src="http://localhost/foodshop/public/static/admin/style/bootstrap.js"></script>
    <script src="http://localhost/foodshop/public/static/admin/style/jquery.js"></script>
    <!--Beyond Scripts-->
    <script src="http://localhost/foodshop/public/static/admin/style/beyond.js"></script>
    
<script>
    function ops(id){
       var box=document.getElementById('box');
        var num=box.getElementsByTagName('img');
        num[id-1].style.display='block';
    }
    function cle(id){
        var box=document.getElementById('box');
        var num=box.getElementsByTagName('img');
        num[id-1].style.display='none';
    }
</script>

</body></html>