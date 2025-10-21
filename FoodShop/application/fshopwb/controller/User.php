<?php
namespace app\fshopwb\controller;
use think\Controller;
use app\fshopwb\model\User as userModel;
use think\Request;

class User extends controller
{
    public function login()
    {
        if(request()->isPost()){

            $user=new userModel();
            $num=$user->judge(input('post.'));
//            var_dump(input('post.'));die();
            if($num==1){
                $this->error('用户不存在');
            }
            if($num==2){
                $this->success('登陆成功',url('index/index'));
            }
            if($num==3){
                $this->error('登录错误！');
            }
            return;
        }
        return view();
    }
    public function regist()
    {

        $arr=input('post.');
        if($arr){
//            var_dump($arr);die();
            $obj=new userModel();
            $res=$obj->where('name',$arr['name'])->find();

            if($res){
                $this->error('账号已经存在，请更换用户名！');
            }else{
                $res=$obj->save($arr);
                if($res>0){
                    $this->success('注册成功',url('user/login'));
                }else{
                    $this->error('注册失败');
                }
            }
        }

        return view();
    }
}
