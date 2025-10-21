<?php
namespace app\admin\controller;
use think\Controller;
class Sendfood extends  Controller
{
    public function lst()
    {
        $arr=input('post.');
        if($arr){
            $cname=$arr['name'];
            $name=db('sendfood')->where('uname',$cname)->order('finish asc')->select();
            if($name){
                $this->assign('rows',$name);
            }else{
                $name=db('sendfood')->order('finish asc')->select();
                $this->assign('rows',$name);
            }


        }else{
            $res=db('sendfood')->order('finish asc')->select();
            $this->assign('rows',$res);
        }
        return view();
    }
    public  function assure($id){
        $res=db('sendfood')->where('id',$id)->update(['finish'=>1]);
        if($res){
            $this->redirect('sendfood/lst');
        }
    }
}
