<?php
	class Bdd 	{

		/* parametre pour se connecter a la BDD*/
		private $_db; 
		private $ip_bdd ;
		private $name_bdd ;
		private $user_bdd ;
		private $mdp_bdd ;


		/* constructeur qui permet la connection à la bdd */
		public function __construct($ip_bdd,$name_bdd,$user_bdd,$mdp_bdd) 
		{
			 $this->ip_bdd = $ip_bdd;
			 $this->name_bdd = $name_bdd;
			 $this->user_bdd = $user_bdd;
			 $this->mdp_bdd = $mdp_bdd;
			try
			{
				$this->_db = new PDO('mysql:host='.$ip_bdd.';dbname='.$name_bdd.';charset=utf8',$user_bdd,$mdp_bdd);
			}
			catch (Exception $e)
			{
	        	die('Erreur : ' . $e->getMessage());
			}
		}
		public function requete($requete)
		{
			$requeste=$this->_db->query($requete);
			return $requeste;
		}
			
	}
?>