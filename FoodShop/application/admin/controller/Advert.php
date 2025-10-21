<?php
namespace app\admin\controller;
use think\Controller;
use think\Request;
use app\admin\model\Advert as AdvertModel;
class Advert extends Controller
{
    public function lst()
    {
        $res=db('advert')->select();
        $this->assign('rows',$res);
        return view();
    }
    public function edit()
    {
        $id=Request::instance()->param("id/d");
        $res=AdvertModel::get($id);
        $this->assign('Advert',$res);
        return view();
    }
    public function update(){
        $res=input('post.');
        if($res['adress']==''){
            $res['adress']=$res['fadeadr'];
        }
        $arr=db('advert')->update(['adress'=>$res['adress'],'title'=>$res['title'],'id'=>$res['id']]);
        if($arr>0){
            $this->success('修改轮播图信息成功',url('advert/lst'));
        }else{
            $this->error('修改信息失败');
        }
    }
}
