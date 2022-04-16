-- phpMyAdmin SQL Dump
-- version 4.7.0
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Generation Time: 19-Mar-2019 às 13:19
-- Versão do servidor: 5.7.17
-- PHP Version: 5.6.30

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
SET AUTOCOMMIT = 0;
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `etec`
--

-- --------------------------------------------------------

--
-- Estrutura da tabela `produtos`
--

CREATE TABLE `produtos` (
  `codigo` int(11) DEFAULT NULL,
  `produto` varchar(50) DEFAULT NULL,
  `qtd` int(11) DEFAULT NULL,
  `valorUnitario` decimal(5,2) DEFAULT NULL
) ENGINE=MyISAM DEFAULT CHARSET=latin1;

--
-- Extraindo dados da tabela `produtos`
--

INSERT INTO `produtos` (`codigo`, `produto`, `qtd`, `valorUnitario`) VALUES
(1, 'Mesa', 3, '12.00'),
(2, 'Maçaneta', 5, '13.00'),
(3, 'Computadores', 10, '14.00'),
(4, 'Mouse', 20, '15.00'),
(5, 'Teclado', 17, '16.00'),
(6, 'Monitor', 20, '17.00'),
(7, 'Gabinete', 15, '17.00'),
(8, 'Cabo de Rede', 25, '19.00'),
(9, 'Lampada', 80, '20.00'),
(10, 'Televisão', 5, '21.00'),
(11, 'Telefone Fixo', 10, '22.00'),
(12, 'Estabilizador', 20, '23.00'),
(14, 'Cortinas', 15, '23.00'),
(15, 'Cadeiras', 80, '27.00'),
(16, 'Bolsa', 10, '225.00'),
(17, 'Roteador', 15, '153.00'),
(18, 'Merenda seca', 100, '147.00'),
(19, 'Celular', 5, '123.00'),
(20, 'Apagador', 30, '777.00');
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
