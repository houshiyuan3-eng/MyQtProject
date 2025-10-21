<?php
namespace app\fshopwb\controller;
use think\Controller;
use think\Request;
use app\fshopwb\controller\Common;
header("Content-type: text/html; charset=utf-8");
class Userinfo extends  Common
{
    public function infoindex()
    {
        $id=session('id');
        $res=db('userinfo')->where('id',$id)->select();
        if($res){
            $res[0]['province']=db('tree')->where('id',$res[0]['province'])->value('name');
            $res[0]['city']=db('tree')->where('id',$res[0]['city'])->value('name');
            $res[0]['town']=db('tree')->where('id',$res[0]['town'])->value('name');
            //dump($res[0]['province']);die();
            $this->assign('infomsg',$res[0]);
            return view();
        }else{
            $this->error('请完善个人信息',url('userinfo/infoedit'));
        }
    }
    public function infoedit()
    {
        $id=session('id');
        $res=db('userinfo')->where('id',$id)->select();
//        dump($res);die();
        if($res){
            //dump($res);die();
            $opp['province']=db('tree')->where('id',$res[0]['province'])->value('name');
            $opp['city']=db('tree')->where('id',$res[0]['city'])->value('name');
            $opp['town']=db('tree')->where('id',$res[0]['town'])->value('name');
            $this->assign('Opp',$opp);
            $province = db('Tree')->where ( array('pid'=>1) )->select ();
            $this->assign('province',$province);
            $this->display();
            $this->assign('infomessage',$res[0]);
        }else{
            $province = db('Tree')->where ( array('pid'=>1) )->select ();
            $this->assign('province',$province);
            $this->display();
            $opp['province']="";
            $opp['city']="";
            $opp['town']="";
            $this->assign('Opp',$opp);
            $arr=[
                'uname'=>'',
                'phone'=>'',
                'province'=>'',
                'city'=>'',
                'town'=>'',
                'address'=>'',
                'zcood'=>'',
            ];
            //dump($arr);die();
            $this->assign('infomessage',$arr);
        }

        return $this->fetch();
        return view();
    }
    public function updata(){
        $res=input('post.');
        //dump($res);die();
        $id=session('id');
        $obj=db('userinfo')->where('id',$id)->select();
        if($obj){
            if($res['province']==0||$res['city']==0||$res['town']==0){
                $res['province']=$res['cprovince'];
                $res['city']=$res['ccity'];
                $res['town']=$res['ctown'];
            }
            $arr=db('userinfo')->update([
                'id'=>$res['id'],
                'uid'=>$res['uid'],
                'uname'=>$res['uname'],
                'phone'=>$res['phone'],
                'province'=>$res['province'],
                'city'=>$res['city'],
                'town'=>$res['town'],
                'address'=>$res['address'],
                'zcood'=>$res['zcood'],
            ]);
        }else{
            $arr=db('userinfo')->insert([
                'id'=>$res['id'],
                'uid'=>$res['uid'],
                'uname'=>$res['uname'],
                'phone'=>$res['phone'],
                'province'=>$res['province'],
                'city'=>$res['city'],
                'town'=>$res['town'],
                'address'=>$res['address'],
                'zcood'=>$res['zcood'],
            ]);
        }



//        dump($arr);die();
        if($arr>0){
            $this->success('修改个人信息成功',url('userinfo/infoindex'));
        }else{
            $this->error('修改个人信息失败');
        }
    }

    public function infoorder(){
        $sid=session('id');
        //return view();die();
        if($sid){
            $res=db('sendfood')->where('sid',$sid)->order("finish asc")->select();
            if($res){
                $this->assign('Foodorder',$res);
                return view();
            }else{
                $this->error('您还没订餐记录哦！',url('index/index'));
            }
        }
    }

    public function getRegion(){
        $Region=db('Tree');
        $map['pid']=$_REQUEST["pid"];
        $map['type']=$_REQUEST["type"];
        $list=$Region->where($map)->select();
        echo json_encode($list);
    }
}
