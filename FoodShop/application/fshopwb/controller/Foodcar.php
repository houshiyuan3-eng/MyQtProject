<?php
namespace app\fshopwb\controller;
use think\Controller;
use app\fshopwb\controller\Common;
use  app\fshopwb\model\Foodcar as FoodcarModeal;
use think\Request;
header("Content-type: text/html; charset=utf-8");
class Foodcar extends  Common
{
    public function lst()
    {
        $res=db('foodcar')->select();
        if($res){
            $this->assign("Foodmsg",$res);
        }else{
            $this->error('sorry您没有选择餐品！',url('index/index'));
        }

        return view();
    }
    public function userfood()
    {
        $id=session('id');
        $res=db('userinfo')->where('id',$id)->select();
        $res[0]['province']=db('tree')->where('id',$res[0]['province'])->value('name');
        $res[0]['city']=db('tree')->where('id',$res[0]['city'])->value('name');
        $res[0]['town']=db('tree')->where('id',$res[0]['town'])->value('name');
       // dump($res[0]['province']);die();
        $this->assign('Userinfo',$res[0]);
        $obj=db('foodcar')->select();
        $this->assign("Foodmsg",$obj);
        return view();
    }
    public function delete($id){
        $obj=FoodcarModeal::get($id);
//        dump($obj);die();
        if(is_null($obj)){
            return  $this->error('不存在ID为'.id.'的数据，删除失败');
        }else{
            $obj->delete();
            return  $this->redirect('lst');
        }
    }
    public function update(){
        $id=session('id');
        $obj=db('userinfo')->where('id',$id)->select();
        if($obj){
            $arr=input('post.');
            $len=count($arr['id']);
            for($i=0;$i<$len;$i++){
//            $res=[[
//                'id'=>$arr['id'][$i],
//                'fid'=>$arr['id'][$i],
//                'sid'=>$arr['id'][$i],
//                'image'=>$arr['id'][$i],
//                'cname'=>$arr['id'][$i],
//                'introduce'=>$arr['id'][$i],
//                'price'=>$arr['id'][$i],
//                'unit'=>$arr['id'][$i],
//                'number'=>$arr['id'][$i]
//
//            ]];
                $res=db('foodcar')->update([
                    'id'=>$arr['id'][$i],
                    'fid'=>$arr['fid'][$i],
                    'sid'=>$arr['sid'][$i],
                    'image'=>$arr['image'][$i],
                    'cname'=>$arr['cname'][$i],
                    'introduce'=>$arr['introduce'][$i],
                    'price'=>$arr['price'][$i],
                    'unit'=>$arr['unit'][$i],
                    'number'=>$arr['number'][$i]
                ]);

            }
            if($arr>0){
                $this->redirect('foodcar/userfood');
            }else{
                $this->error('修改信息失败');
            }
            //  dump($arr['id'][0]);die();
//        dump(count($image));die();
        }else{
            $this->error('请完善个人信息',url('userinfo/infoedit'));
        }

    }

    public function sendfood(){
        $arr=input('post.');
        //dump($res);die();
        $len=count($arr['fid']);
        for($i=0;$i<$len;$i++){
            $res=db('sendfood')->insert([
                'fid'=>$arr['fid'][$i],
                'sid'=>$arr['sid'][$i],
                'image'=>$arr['image'][$i],
                'uname'=>$arr['uname'][$i],
                'cname'=>$arr['cname'][$i],
                'price'=>$arr['price'][$i],
                'unit'=>$arr['unit'][$i],
                'number'=>$arr['number'][$i],
                'spend'=>$arr['spend'][$i]
            ]);
            $obj=db('foodcar')->where('id',$arr['id'][$i])->delete();
        }
        if($res>0){
            $this->success('订餐成功',url('index/index'));
        }else{
            $this->error('订餐成功失败');
        }
    }
}
