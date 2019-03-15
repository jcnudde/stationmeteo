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
          if(isset($_GET["nom"]))
        {
        $id_user = $_GET["id_user"];
        $user = $_GET["user"];
        $password = $_GET["password"]; 
        
        $this->User= new requete ("INSERT INTO `User`(`id_user`, `user`, `password`) values('$id_user','$user','$password')"); 
        echo "Utilisateur enregistrer";
        }
    }

        public function deleteUser()
        {

            
        echo "utilisateur supprimer";        
        }

        public function delete_historique()
        {


        echo "historique supprimer";
        }

        public function afficher_historique()
        {


        echo "voici l'historique de la date demander";  
        }    
}
?>