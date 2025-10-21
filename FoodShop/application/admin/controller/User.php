<?php
namespace app\admin\controller;
use app\admin\model\User as UserModel;
use think\Controller;
use think\Request;
class User extends controller
{
    public function lst()
    {
//        $res=db('user')->select()->order('id desc')->paginate(3);
////        var_dump($res);die();
        $obj=new UserModel();
        $res=$obj->order("id desc")->paginate(3);
        $this->assign('rows',$res);//那接受的数据打包送到前台（‘方法名字’，数据）
        return view();
    }
    public function update()
    {
        $arr=input('post.');
//        var_dump($arr);die();
        $obj=new UserModel();
        $res=$obj->isUpdate(true)->save($arr);
        if($res>0){
            $this->success('修改成功',url('user/lst'));
        }else{
            $this->success('修改失败');
        }
        return view();
    }
    public function edit()
    {
        $id=Request::instance()->param('id/d');
        $obj=UserModel::get($id);
        $this->assign('User',$obj);
        return view();
    }
    public function delete($id){
        $obj=UserModel::get($id);
        if(is_null($obj)){
              $this->error('不存在ID为'.id.'的数据，删除失败');
        }else{
            $obj->delete();
            $this->success('删除成功！',url('user/lst'));
        }
    }
}
