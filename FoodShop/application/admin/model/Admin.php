<?php
/**
 * Created by PhpStorm.
 * User: 你二哥的电脑
 * Date: 2022/3/12
 * Time: 23:27
 */

namespace app\admin\model;
use think\Model;

class Admin extends Model{
     public function login($data){
         $admin=Admin::getByname($data['name']);
         if($admin){
             if($admin['password']==$data['password']){
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