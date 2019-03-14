<?php
	class Bdd 	{
		private $_db; 
		private $ip_bdd = "192.168.65.66";
		private $name_bdd = "meteo";
		private $user_bdd = "root";
		private $mdp_bdd = "root";


		/* constructeur qui permet la connection à la bdd */
		public function __construct($ip_bdd,$name_bdd,$user_bdd,$mdp_bdd) 
		{
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