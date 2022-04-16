<?php

$login = $_POST['login'];
$senha = $_POST['senha'];

//CRIANDO A CONEXÃO COM O BANCO DE DADOS

//CRIANDO A VARIÁVEL

$connect = mysql_connect('localhost','root','123');
$db = mysql_select_db('php',$connect);

$query_select = "SELECT login FROM usuarios WHERE login = '$login'";
$select = mysql_query($query_select,$connect);
$array = mysqli_fetch_array($select);
$logarray = $array['login'];

//criando as validações para os campos

if ($login == "" || $login== null) {
	echo <script language = 'javascript' type='text/javascript'>alert('O campo login deve ser preenchido');window.location.href='telalogin.html';</script>
}else{
	if ($logarray == $login) {
	echo <script language = 'javascript' type='text/javascript'>alert('Esse login já existe');window.location.href='telalogin.html';</script>
	die();
	}else{
		$query = "INSERT INTO usuarios (login,senha) VALUES ('$login,$senha')";

		$insert = mysql_query($query,$connect);

		if ($insert) {
			echo <script language = 'javascript' type='text/javascript'>alert('Usuario cadastrado com sucesso!');window.location.href='telalogin.html';</script>
		}
	}
}

?>