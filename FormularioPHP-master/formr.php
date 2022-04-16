<!DOCTYPE html>
<html lang="pt-br">
<head>
	<meta charset="utf-8">
	<title>Recuperando dados do formulário</title>
</head>
<body>

	<?php
	$nome = $_POST['nome'];
	$email = $_POST['email'];
	$sexo = $_POST['sexo'];
	$regiao = $_POST['regiao'];
	$opiniao = $_POST['opiniao'];
	$receber = $_POST['receber'];
	$escondido = $_POST['escondido'];

	print "Nome: <strong>$nome</strong><br />";
	print "Email: <strong>$email</strong><br />";
	print "Sexo: <strong>$sexo</strong><br />";
	print "Regiao: <strong>$regiao</strong><br />";
	print "Opiniao: <strong>$opiniao</strong><br />";
	print "Recebe?: <strong>$receber</strong><br />";
	print "Nao visualizado pelo usuário: <strong>$escondido</strong><br />"

	?>

</body>
</html>