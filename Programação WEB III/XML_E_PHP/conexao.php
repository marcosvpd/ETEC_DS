<?php
$xml=simplexml_load_file("livros.xml") or die("Erro: não foi possível criar objeto");
$servername = "localhost";
$username = "root";
$password = "";
$dbname = "Etec270819";

$conn = new mysqli($servername, $username, $password, $dbname);
if ($conn->connect_error) {
    die("Connection failed: " . $conn->connect_error);
} 


foreach($xml->children() as $books) { 
$autor = $books->autor;
$nome = $books->nome;
$ano = $books->ano;
$preco = $books->preco;
$chave = md5($books->nome);

$sql = "INSERT INTO Livros (nome, autor, ano, preco, chave) VALUES ('$nome', '$autor', '$ano', '$preco', '$chave')";
$result = $conn->query($sql);

if ($conn == TRUE) {
	echo("Sucesso");
} else {
	echo "Falha<br>" .$sql. "<br>" . $conn->error;
}
} 








$conn->close();
?>