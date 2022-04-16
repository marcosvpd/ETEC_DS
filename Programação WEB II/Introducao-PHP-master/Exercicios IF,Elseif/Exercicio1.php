<?php

	//Exercicio 1
		echo "Exercicio 1<br>";
	$num = 1;

	if ($num < 0) {
		echo "O valor é negativo!";
	}
	elseif ($num == 0) {
		echo "O valor é igual a zero!";
	}
	elseif ($num > 0) {
		echo "<br>O valor é positivo! <br>";
	}

	//Exercicio 2
		echo "<br>Exercicio 2<br>";
	$tab = 4;

	for ($i=0; $i <= 10; $i++) { 
		echo "<br>" . $tab . " x " . $i . " = " . ($tab * $i) . "<br>";
	}

	//Exercicio 3/4
		echo "<br>Exercicio 3/4<br>";
	$poui = 3;

		if ($poui % 2 == 0) {
			echo "<br>O numero é Par!<br>";
		}
		else {
			echo "<br>O numero é impar!<br>";
		}
	//Exercicio 5
		echo "<br>Exercicio 5<br>";
	$a = 5;
	$b = 3;
		if ($a > $b) {
			echo "<br>A é maior que B!<br>";
		}
		elseif ($b > $a) {
			echo "<br>B é maior que A!<br>";
		}
	//Exercicio 6
		echo "<br>Exercicio 6<br>";

		$notas = array(5,4,10);
		$somanota = $notas[0] + $notas[1] + $notas[2];

		$media = $somanota / 3;

		if ($media > 6) {
			echo "<br>Você foi aprovado com média de: " . $media;
		}
		else {
			echo "<br>Você foi reprovado com média de: " . $media . "<br>";
		}

	//Exercicio 7
		echo "<br>Exercicio 7<br>";
		$nome = "Marcos";
		$idade = 17;

		if ($idade > 18) {
			echo $nome . " É maior de 18 e tem" . $idade . "anos";
		}
		else {
			echo $nome . " é menor de 18 e tem " . $idade . " anos.";
		}
	//Exercicio 8
		echo "<br>Exercicio 8<br>";
		$num1 = 10;
		$num2 = 15;
		$soma = $num1 + $num2;
			if ($soma > 20) {
				echo $soma + 8;
			}
			else{
				echo $soma - 5;
			}
	//Exercicio 9
		echo "<br>Exercicio 9<br>";
		$div = 20;

		if ($div % 10 == 0) {
			echo "<br>O número é divisivel por 10!";
		}
		elseif ($div % 5 == 0) {
			echo "<br>O número é divisivel por 5!";
		}
		elseif ($div % 2 == 0) {
			echo "<br>O número é divisivel por 2!";
		}
		else{
			echo "<br>O numero nao é divisel por 10,5 ou 2!";
		}
	//Exercicio 10
		echo "<br>Exercicio 10<br>";
		$nomeex = "Claudia";
		$sexo = "Feminino";
		$idadeex = 23;

		if ($sexo == "Feminino" && $idadeex < 25) {
			echo "<br>ACEITA<br>";
		}
		else{
			echo "<br>Não aceita!";
		}
?>