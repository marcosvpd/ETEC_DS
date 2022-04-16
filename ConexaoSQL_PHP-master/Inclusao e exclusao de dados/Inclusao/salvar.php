<?php
$servername = "localhost";
$username = "root";
$password = "";
$dbname = "times";

$campo1 = $_POST['campo1'];
$campo2 = $_POST['campo2'];


$conn = new mysqli($servername, $username, $password, $dbname);

if ($conn->connect_error) {
    die("ERRO NA CONEXAO: " . $conn->connect_error);
} 

$sql = "insert into times (codtime, nometime) VALUES ($campo1, '$campo2')"; 

if ($conn->query($sql) === TRUE) {
    echo "DADOS INCLUIDOS COM SUCESSO";
} else {
    echo "Erro: " . $sql . "<br>" . $conn->error;
}

$conn->close();
?>