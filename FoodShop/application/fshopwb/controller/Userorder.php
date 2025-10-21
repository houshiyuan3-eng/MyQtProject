<?php
namespace app\fshopwb\controller;
use think\Controller;
use app\fshopwb\controller\Common;
use think\Request;
header("Content-type: text/html; charset=utf-8");

class  Userorder extends Common{
    public function lst(){
        $sid=session('id');
        $res=db('sendfood')->where('sid',$sid)->where('finish',0)->select();
        //dump($res);die();
        if($res){
            $this->assign('Orderlst',$res);
            return view();
        }else{
            $this->error('您没有正在派送的餐品！');
        }

    }
    public  function assure($id){
        $res=db('sendfood')->where('id',$id)->update(['finish'=>1]);
        if($res){
            $this->redirect('userorder/lst');
        }
    }
}
?>