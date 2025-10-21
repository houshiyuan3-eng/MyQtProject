<?php
/**
 * Created by PhpStorm.
 * User: 你二哥的电脑
 * Date: 2022/3/12
 * Time: 23:27
 */

namespace app\fshopwb\model;
use think\Model;

class User extends Model{
     public function judge($data){
         $user=User::getByname($data['name']);
         if($user){
             if($user['password']==$data['password']){
                 session('id',$user['id']);
                 session('name',$user['name']);
                 return 2;//login success
             }else{
                 return 3;//password error
             }
         }else{
             return 1;//user no exist
         }
     }
}
?>