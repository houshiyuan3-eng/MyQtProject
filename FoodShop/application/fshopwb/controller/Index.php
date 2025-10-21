<?php
namespace app\fshopwb\controller;
use think\Controller;
use think\Request;
use app\fshopwb\model\Cfood as CfoodModel;
class Index extends  Controller
{
    public function index()
    {
        $fooda=db('cfood')->where('uid',1)->select();
        $foodb=db('cfood')->where('uid',2)->select();
        $foodc=db('cfood')->where('uid',3)->select();
        $foodd=db('cfood')->where('uid',4)->select();
        $foode=db('cfood')->where('uid',5)->select();
        $foodf=db('cfood')->where('uid',6)->select();
        $foodg=db('cfood')->where('uid',7)->select();
        $foodh=db('cfood')->where('uid',8)->select();
        $foodi=db('cfood')->where('uid',9)->select();
      // dump($fooda);die();

        $this->assign('fooda',$fooda);
        $this->assign('foodb',$foodb);
        $this->assign('foodc',$foodc);
        $this->assign('foodd',$foodd);
        $this->assign('foode',$foode);
        $this->assign('foodf',$foodf);
        $this->assign('foodg',$foodg);
        $this->assign('foodh',$foodh);
        $this->assign('foodi',$foodi);

        $res=db('advert')->select();
        $this->assign('imgmsg',$res);
        $commentfood=db('commentfood')->select();
        //dump($commentfood);die();
        $this->assign('comment',$commentfood);
        $discountfood=db('discountfood')->select();
        //dump($commentfood);die();
        $this->assign('discount',$discountfood);
        return view();
    }
    public function foodinfo()
    {
        $id=Request::instance()->param("id/d");
//        dump($id);die();
        $res=db('cfood')->where('id',$id)->select();
        //dump($res[0]);die();
        $this->assign('Foodinfo',$res[0]);
        return view();
    }
    public  function addfoodcar(){
        if(!session('id')){
            $this->error('请您先登录！',url('index/index'));
        }else{
            $arr=input('post.');
            //dump($arr);die();
            $res=db('foodcar')->insert($arr);
            if($res>0){
                $this->success('添加购物车成功',url('index/index'));
            }else{
                $this->error('添加购物车失败！');
            }
        }

    }
    public  function loginout(){
            session(null);
            $this->success('退出系统成功！',url('user/login'));

    }
}
