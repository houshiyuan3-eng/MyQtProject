<?php
namespace app\fshopwb\controller;
use think\Controller;
use think\Request;
use app\fshopwb\model\Foodinfo as FoodinfoModel;
use app\fshopwb\controller\Common;
class Foodinfo extends  Common
{
    public function index()
    {
        $id=Request::instance()->param("id/d");
        dump($id);die();
        $res=FoodinfoModel::get($id);
        $this->assign('Foodinfo',$res);
        return view();
    }
}
