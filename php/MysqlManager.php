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
          if(isset($_POST["nom"]))
        {
        $id_user = $_POST["id_user"];
        $user = $_POST["user"];
        $password = $_POST["password"]; 
        
        $this->User= new requete ("INSERT INTO `User`(`id_user`, `user`, `password`) values('$id_user','$user','$password')"); 
        echo "Utilisateur enregistrer";
        }
    }

        public function deleteUser()
        {

            
        echo "utilisateur supprimer";        
        }

        public function deleteHistorique()
        {


        echo "historique supprimer";
        }

        public function afficherHistorique()
        {


        echo "voici l'historique de la date demander";  
        }    
}
?>