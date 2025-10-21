<?php
namespace app\admin\controller;
use think\Controller;
use app\admin\model\Admin as AdminModel;
use think\Request;
header("Content-type: text/html; charset=utf-8");
class Admin extends controller
{
    public function add()
    {
        return view();
    }
    public function insertadmin(){
        $arr= input('post.');
        $obj=new AdminModel();
        $res=$obj->where("name",$arr['name'])->find();
        if($res){
            $this->error('账号已经存在，请更换用户名！');
        }else{
            $res =$obj->save($arr);
            if($res>0){
                $this->success('添加管理员成功',url('lst'));
            }else{
                $this->error('添加管理员失败');
            }
        }
    }
    public function lst(){
        $obj=new AdminModel();
        $data=$obj->order("id desc")->paginate(3);
        $this->assign('rows',$data);//那接受的数据打包送到前台（‘方法名字’，数据）
        return view();
    }
    public function edit(){
        $id=Request::instance()->param('id/d');///获取当前请求的id变量
        $obj=AdminModel::get($id);
        $this->assign('Admin',$obj);
        return view();
    }
    public function update(){
        $arr=Request::instance()->post();
//        var_dump($arr);
//        die();
        $obj=new AdminModel();
        $res=$obj->isUpdate(true)->save($arr);//修改并保存信息
        if($res>0){
            $this->success('修改账号成功',url('lst'));
        }else{
            $this->error('修改账号失败');
        }
    }
    public function delete($id){
        $obj=AdminModel::get($id);
        if(is_null($obj)){
            return  $this->error('不存在ID为'.id.'的数据，删除失败');
        }else{
            $obj->delete();
            return $this->success('删除成功！',url('lst'));
        }
    }
}
