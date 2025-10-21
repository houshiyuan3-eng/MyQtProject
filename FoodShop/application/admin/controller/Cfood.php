<?php
namespace app\admin\controller;
use think\Controller;
use think\Request;
use app\admin\model\Cfood as CfoodModel;
class Cfood extends Controller
{
    public function add()
    {
        return view();
    }
    public function insertfood()
    {
        $res=input('post.');
//        var_dump($res);die();
        $arr=db('cfood')->insert($res);
        if($res>0){
            $this->success('添加食品成功',url('add'));
        }else{
            $this->error('添加食品失败');
        }
        return view();
    }
    public function lst()
    {
        $obj=new CfoodModel();
        $res =$obj->order("id desc")->paginate(8);
        $this->assign("rows",$res);
        return view();
    }
    public function edit()
    {
        $id=Request::instance()->param("id/d");
        $res=CfoodModel::get($id);
        $this->assign('Foodmsg',$res);
        return view();
    }
    public function update(){
        $res=input('post.');
        if($res['image']==''){
            $res['image']=$res['fadeadr'];
        }
        //var_dump($res);die();
        $arr=db('cfood')->update(['id'=>$res['id'],'uid'=>$res['uid'],'image'=>$res['image'],'cname'=>$res['cname'],'unit'=>$res['unit'],'price'=>$res['price'],'introduce'=>$res['introduce']]);
        if($arr>0){
            $this->success('修改食品信息成功',url('cfood/lst'));
        }else{
            $this->error('修改食品信息失败');
        }
    }
    public  function classify(){
        $uid=Request::instance()->param('id/d');
        $res=db('cfood')->where('uid',$uid)->select();
        $this->assign("rows",$res);
        return view();
//        var_dump($res);die();
    }
    public  function setcomment(){
        $id=Request::instance()->param('id/d');
        $res=db('cfood')->where('id',$id)->select();
//        var_dump($res);die();
        $arr=db('commentfood')->insert($res[0]);
        if($arr>0){
            $this->success('置为推荐餐品成功',url('cfood/lst'));
        }else{
            $this->error('置为推荐餐品失败');
        }
    }
    public function commentfood(){
        $res=db('commentfood')->select();
        $this->assign("rows",$res);
        return view();
    }
    public  function cmtclassify(){
        $uid=Request::instance()->param('id/d');
        $res=db('commentfood')->where('uid',$uid)->select();
        $this->assign("rows",$res);
        return view();
//        var_dump($res);die();
    }
    public  function setdiscount(){
        $id=Request::instance()->param('id/d');
        $res=db('cfood')->where('id',$id)->select();
//        var_dump($res);die();
        $arr=db('discountfood')->insert($res[0]);
        if($arr>0){
            $this->success('置为打折餐品成功',url('cfood/lst'));
        }else{
            $this->error('置为打折餐品失败');
        }
    }
    public function discountfood(){
        $res=db('discountfood')->select();
        $this->assign("rows",$res);
        return view();
    }
    public  function dstclassify(){
        $uid=Request::instance()->param('id/d');
        $res=db('discountfood')->where('uid',$uid)->select();
        $this->assign("rows",$res);
        return view();
//        var_dump($res);die();
    }
    public function delete($id){
        $obj=CfoodModel::get($id);
        if(is_null($obj)){
            return  $this->error('不存在ID为'.id.'的数据，删除失败');
        }else{
            $obj->delete();
            return $this->success('删除成功！',url('lst'));
        }
    }
}
