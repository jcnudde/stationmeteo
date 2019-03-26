-- phpMyAdmin SQL Dump
-- version 4.6.6deb4
-- https://www.phpmyadmin.net/
--
-- Client :  localhost:3306
-- Généré le :  Lun 18 Mars 2019 à 16:03
-- Version du serveur :  10.1.26-MariaDB-0+deb9u1
-- Version de PHP :  7.0.33-0+deb9u1

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Base de données :  `meteo`
--

-- --------------------------------------------------------

--
-- Structure de la table `donnees_meteo`
--

CREATE TABLE `donnees_meteo` (
  `ID_donnees_meteo` int(10) NOT NULL,
  `anemometre` int(5) NOT NULL,
  `girouette` char(5) NOT NULL,
  `barometre` int(5) NOT NULL,
  `thermometre` int(5) NOT NULL,
  `capteur_humidite` int(5) NOT NULL,
  `solarimetre` int(5) NOT NULL,
  `detecteur_pluie` int(1) NOT NULL,
  `detecteur_lumiere` int(1) NOT NULL,
  `pluviometre` int(5) NOT NULL,
  `date` datetime NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Contenu de la table `donnees_meteo`
--

INSERT INTO `donnees_meteo` (`ID_donnees_meteo`, `anemometre`, `girouette`, `barometre`, `thermometre`, `capteur_humidite`, `solarimetre`, `detecteur_pluie`, `detecteur_lumiere`, `pluviometre`, `date`) VALUES
(1, 27, 'NE', 900, 22, 30, 100, 1, 1, 1, '2019-03-14 10:31:30');

-- --------------------------------------------------------

--
-- Structure de la table `User`
--

CREATE TABLE `User` (
  `id_user` int(100) NOT NULL,
  `user` char(15) NOT NULL,
  `password` char(15) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Contenu de la table `User`
--

INSERT INTO `User` (`id_user`, `user`, `password`) VALUES
(0, 'admin', 'admin'),
(0, '$user', '$password');

--
-- Index pour les tables exportées
--

--
-- Index pour la table `donnees_meteo`
--
ALTER TABLE `donnees_meteo`
  ADD PRIMARY KEY (`ID_donnees_meteo`);

--
-- AUTO_INCREMENT pour les tables exportées
--

--
-- AUTO_INCREMENT pour la table `donnees_meteo`
--
ALTER TABLE `donnees_meteo`
  MODIFY `ID_donnees_meteo` int(10) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=2;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
