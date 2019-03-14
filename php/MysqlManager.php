<?php
include 'Mysql.php';


class MysqlManager
{

    private $mysql;

    public function __construct($ip_bdd,$name_bdd,$user_bdd,$mdp_bdd) 
    {
        $this->mysql= new Mysql($ip_bdd,$name_bdd,$user_bdd,$mdp_bdd);
    }
    public function addUser()
    {
        
    }
}


?>