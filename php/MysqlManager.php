<?php
include 'Mysql.php';


class MysqlManager
{

    private $mysql;

    public function __construct($ip_bdd,$name_bdd,$user_bdd,$mdp_bdd) 
    {
        $this->mysql= new Mysql($ip_bdd,$name_bdd,$user_bdd,$mdp_bdd);
    }

        // insérer un utilisateur dans la BDD
        public function addUser()
    {
          if(isset($_POST["nom"]))
        {
            // $id_user = $_POST["id_user"];
            $user = $_POST["user"];
            $password = $_POST["password"]; 
        
        $this->User= new requete ("INSERT INTO `User`(`id_user`, `user`, `password`) values('','$user','$password')"); 
        echo "Utilisateur enregistrer";
        }
    }
        // suppression utilisateur de la BDD
        public function deleteUser()
    {
            if(isset($_POST["user"]))
        {
            $id_user = $_POST["id_user"];
            $user = $_POST["user"];

            $this->User= new requete ("DELETE FROM `User` WHERE `user` values '$user'");
        echo "utilisateur supprimer";    
        }    
    }
        // purge de la table donnes_meteo
        public function deleteHistorique()
    {
        
        $this->historique= new requete ("DELETE FROM `donnees_meteo`") ;

        echo "historique supprimer";
    }

        // afficher les donnés de la bdd en fonction de la date
        public function afficherHistorique()
    {
            $this ->affiche= new requete ("SELECT* FROM `donnees_meteo` WHERE `date` VALUES '$sdate");

        echo "voici l'historique de la date demander";  
    }    
}
?>