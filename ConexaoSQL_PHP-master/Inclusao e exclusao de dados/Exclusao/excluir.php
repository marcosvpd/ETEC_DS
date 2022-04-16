<?php
$servername = "localhost";
$username = "root";
$password = "";
$dbname = "times";

$codigo = $_POST['codigo'];


$conn = new mysqli($servername, $username, $password, $dbname);

if ($conn->connect_error) {
    die("ERRO NA CONEXAO: " . $conn->connect_error);
} 

$sql = "DELETE FROM times WHERE codtime = $codigo"; 

if ($conn->query($sql) === TRUE) {
    echo "DADOS EXCLUIDOS COM SUCESSO";
} else {
    echo "Erro: " . $sql . "<br>" . $conn->error;
}

$conn->close();
?>