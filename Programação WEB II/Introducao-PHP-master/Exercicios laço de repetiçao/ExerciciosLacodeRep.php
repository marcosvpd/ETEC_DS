<?php
	//Exercicio 1
	echo "<b>EXERCICIO 1</b>";
	$a = 1000;
	$b = 2000;
	while ($a <= $b) {
		$a++;
		if ($a % 11 == 5) {
			echo "<br><b>$a</b> é divisivel por 11 e produz resto igual a 5.";
		}
}
	//Exercicio 2
	echo "<br><b>EXERCICIO 2</b><br>";
	for ($n=1; $n <=5 ; $n++) { 
		$s = 1;
		echo "<br>" . $s + 1/$n . "<br>";
	}

	//Exercicio 3
	echo "<b>EXERCICIO 3</b>";
	for ($t=1; $t <=10 ; $t++) { 
			for ($i=0; $i <=10 ; $i++) { 
				echo "<br>$t x $i = " . $t * $i;
			}
	}

	//Exercicio 4


	//Exercicio 5
	echo "<b><br>EXERCICIO 5</b><br>";
	$clienteNome = array("Carlos","Marcos","Lucas","Rosana","Marcela","Jhony","Pedro","Patricia","Ana","Gabriel","Edson","Celso","Gustavo","Vivian","Guilherme" );
	$clienteCompra = array(900,1200,1300,500,800,600,1700,1800,1900,100,1100,500,1300,1400,500);

	for ($y=0; $y < 15 ; $y++) { 
					if ($clienteCompra[$y] <= 1000) {
					$bonus = $clienteCompra[$y]  + ($clienteCompra[$y] * 0.10);
						echo "<br>" . $clienteNome[$y] . " teve a compra do ano passado com o valor menor que 1000R$ e teve 10% de bônus, sendo assim o valor: $bonus <br>";

					}
					else{
					$bonus = $clienteCompra[$y]  + ($clienteCompra[$y] * 0.15);
						echo "<br>"  . $clienteNome[$y] . " teve a compra do ano passado com o valor maior que 1000R$ e teve 15% de bônus, sendo assim o valor: $bonus <br>";
					}
			}
	//Exercicio 6
	echo "<b><br>EXERCICIO 6</b><br>";
	//Ingresso a 5 reais vendem 120 ingressos, a cada 50cents a menos vendem mais 26 ingressos.
	$venda = 120;
	$p = 5;
	while ($p >= 1) { 
		$venda+=26;
		echo "<br>Os ingressos vendidos a $p Reais, venderam-se $venda ingressos gerando renda de: " . $venda * $p . " Reais";
		$p -= 0.50;
	}
	//Exercicio 7
	echo "<b><br>EXERCICIO 7</b><br>";	
	$idade = array(18,15,16,19,20,26,30,12,14,23);
	$maior = 0;
		for ($id=0; $id < 10 ; $id++) { 
			if ($idade[$id] >= 18) {
				$maior++;
			}
		}
		echo "<br> $maior Pessoas são maiores de idade! <br>";

	//Exercicio 8
	echo "<b><br>EXERCICIO 8</b><br>";
	$g1=0;
	$g2=0;
	$g3=0;
	$g4=0;
	$g5=0;

	$idfe = array(12,10,16,19,20,25,13,65,70,82,55,40,35,50,14);

	for ($fe=0; $fe < 15 ; $fe++) { 
	if ($idfe[$fe] <= 15) {
		$g1++;
	}
	elseif ($idfe[$fe] >= 16 && $idfe[$fe] <= 30) {
		$g2++;
	}
	elseif ($idfe[$fe] >= 31 && $idfe[$fe] <= 45) {
		$g3++;
	}
	elseif ($idfe[$fe] >= 46 && $idfe[$fe] <= 60) {
		$g4++;
	}
	else{
		$g5++;
	}
}

	echo "<br>Idades até 15 anos: $g1";
	echo "<br>De 16 a 30 anos: $g2";
	echo "<br>De 31 a 45 anos: $g3";
	echo "<br>De 46 a 60 anos: $g4";
	echo "<br>Acima de 60 anos: $g5";
	echo "<br>Porcentagem de pessoas na primeira faixa etária: " . 100 * $g1 / 15;
	echo "<br>Porcentagem de pessoas na ultima faixa etária: " . 100 * $g5 / 15 . "<br>";

	//Exercicio 9
	echo "<b><br>EXERCICIO 9</b><br>";
	$tbd = 2;
	for ($tb=0; $tb <=10 ; $tb++) { 
		echo "<br> $tbd x $tb = " . $tbd * $tb;
	}
	//Exercicio 10
	echo "<br><b>O EXERCICIO 10 É A MESMA COISA QUE O 3</b><br>";
	//Exercicio 11
	echo "<br><b>EXERCICIO 11</b><br>";
	

$tra = array(1000, 1200, 1300, 1500, 500, 600, 700, 890, 800, 450, 1600, 1700, 1800, 1900, 1100);

$pv = array("p","v","p","v","v","p","v","v","p","p","v","p","v","p","v",); 

for ($y=0; $y < 10 ; $y++) { 
	if ($pv[$y] == "v") {
		echo "<br>O valor da compra a vista é: " .$tra[$y];
	}else if ($pv[$y] == "p"){
	$jsj = ($tra[$y] / 3);
		
		echo "<br>O valor da primeira prestação será: " . $jsj;
		
		echo "<br>O valor da compra a prazo é: " .$tra[$y];
	}

		echo "<br>O valor total das comprs é: ".array_sum($tra);
}
	//Exercicio 12
	echo "<br><b>EXERCICIO 12</b><br>";

	$idPessoa = array(15,26,30,40,50,60,80,19,10,21,32,43,54,65,46,17,28,25,20,35,22,53,24,25,35);
	$altPessoa = array(1.70,1.80,2,1.30,1.40);
	$pesoPessoa = array(30,50,30,70,80,95,70,55,67,60,50,30,70,80,95,70,55,67,60,50,40,70,30,95,30);
	$id50 = 0;
	$id1020 = 0;
	$somaAI = 0;
	$pesoMenor = 0;
	for ($k=0; $k < 25; $k++) {

		if ($pesoPessoa[$k] < 40) {
			$pesoMenor++;
		}

		if ($idPessoa[$k] > 50) {
			$id50++;
		}
		elseif ($idPessoa[$k] >= 10 && $idPessoa[$k]<= 20) {
			$id1020++;
		}
	}
	for ($md=0; $md < 5; $md++) {
			$somaAI += $altPessoa[$md]; 
			if ($md = 4) {
				echo "<br>Média das alturas das pessoas com idades entre 10 e 20 anos: " . $id1020 / $somaAI;
			}
	}
	echo "<br>Pessoas com a idade maior que 50: " . $id50;
	echo "<br>Porcentagem de pessoas com peso inferior a 40 quilos entre todas as pessoas analisadas " . ($pesoMenor * 100) / 25 . "%";

	//Exercicio 13
	echo "<br><b>EXERCICIO 13</b><br>";

	$idade13 = array(14,20,30,24,15,16,27);
	$peso13 = array(91,96,80,55,75,63,58);
	$somaid = 0;
	$somaps = 0;

	for ($q=0; $q < 7 ; $q++) { 
			$somaid += $idade13[$q];

		if ($peso13[$q] > 90) {
			$somaps++;
		}
	}

	echo "<br>Quantidade de pessoas com mais de 90 kilos: " . $somaps;
	echo "<br>Média da idade das sete pessoas: " . $somaid / 7;

	//Exercicio 14
	echo "<br><b>EXERCICIO 14</b><br>";

	$id14 = array(15,26,30,40,50,60,80,19,10,21,32,43,54,65,46,17,28,25,20,35,22,53,24,25,35);
	$ps14 = array(30,50,30,70,80,55,70,55,67,60,50,30,70,80,95,70,55,67,60,50,40,70,30,95,30);
	$al14 = array(1.70,1.80,2,1.30,1.40,1.70,1.80,2,1.30,1.40,1.70,1.80,2,1.30,1.40,1.70,1.80,2,1.30,1.40,1.70,1.80,2,1.30,1.40);
	$corolho = array("A","P","V","C","C","A","P","V","C","C","A","P","V","C","C","A","P","V","C","C","A","P","V","C","C");
	$corcab = array("P","C","L","R","P","P","C","L","R","P","P","C","L","R","P","P","C","L","R","P","P","C","L","R","P");
	$p50i60 = 0;
	$p2=0;
	$pazul=0;
	$rsema=0;
	$idd14=0;
	for ($ex=0; $ex < 25; $ex++) { 
		if ($id14[$ex] > 50 && $ps14[$ex] < 60) {
			$p50i60++;
		}
		elseif ($al14[$ex] < 1.50) {
			$p2++;
			$idd14 += $id14[$ex];
		}
		elseif ($corolho[$ex] == "A") {
			$pazul++;
		}
		if ($corcab[$ex] == "R" && $corolho[$ex] != "A") {
			$rsema++;
		}
	}

	echo "<br>Pessoas com a idade superior a 50 anos e peso inferior a 60 kilos: " . $p50i60;

	echo "<br>Média da idade das pessoas com altura inferior a 1,50: " . $idd14 / $p2;
	echo "<br>Porcentagem de pessoas com olhos azuis entre todas as pessoas analisadas: " . ($pazul * 100) / 25 . "%";
	echo "<br>Pessoas ruivas que nao possuem olhos azuis: " . $rsema;


	//Exercicio 15
	echo "<br><b>EXERCICIO 15</b><br>";

	$numalt = array(10,20,30,40,50,60,70,80,90,100);
	$num30 = 0;
	for ($ale=0; $ale < 10; $ale++) { 
		if ($numalt[$ale] >= 30 && $numalt[$ale] <= 90) {
			$num30++;
		}
	}
	echo "<br>Quantidade de numeros entre 30 e 90: " . $num30;

	//Exercicio 16
	echo "<br><b>EXERCICIO 16</b><br>";

$iiuyy = array(18,15,16,59,20,76,80,82,18,93);

$hhg = array(1.60,1.70,1.99,1.45,1.79,1.80,1.99,1.44,1.30,1.20);

$pooo = array(66,50,80,30,20,77,55,88,100,120);




for ($dj=0; $dj < 10 ; $dj++) { 
			
				
			if ($iiuyy[$dj] > 90 && $hhg[$dj] < 1.50) {
				echo "<br>A posição das pessoas cuja o peso é maior que 90 e a altura é menor que 1.50 são: ".$dj;
			} 

		else if ($iiuyy[$dj] >= 10 && $iiuyy[$dj] <= 30 ) {
					echo "<br>A posição das pessoas cuja a idade está entre 10 e 30 são: ".$dj;
		}

				else if ($hhg[$dj] > 1.90 ) {
					echo "<br>A posição das pessoas cuja a altura é maior que 1.50 são:" .$dj;
				}
				
}
echo "<br>A média das idades é:". (array_sum($iiuyy) / 10);


	//Exercicio 17
echo "<br> <b> EXERCÍCIO 17 </b> ";



$sd = array(18,25,16,59,15,66,80);
$sex = array("M","F","M","F","F","M","F");

for ($rf=0; $rf < 7 ; $rf++) { 
			
				
			if ($sex[$rf] == "F") {
				echo "<br>As idades femininas são: " .$sd[$rf];

			} 

		else if ($sex[$rf] == "M" ) {
				echo "<br>As idades masculinas são:" .$sd[$rf]; 
		}
				
}

echo "<br>A média das idades é:". (array_sum($sd) / 7);

//Exercicio 18
echo "<br> <b> EXERCÍCIO 18 </b> ";

$carro = 6000;
$parcelas = 12;

echo "<br>Carro: ". $carro . "Parcelas: " . $parcelas;
echo "<br>Comprado a vista: ". ($carro * 20 / 100);

echo "<br>Preço final: " .($carro * 6 * $parcelas / 100) ;

//Exercicio 19
echo "<br> <b> EXERCÍCIO 19 </b> ";

$mdi = array(12,82,2,82,78,72,67,82,42);

echo "<br>O valor da média das idades é: " . (array_sum($mdi) / 9);

//Exercicio 20
echo "<br> <b> EXERCÍCIO 20 </b> ";

$idade20 = array(18,15,16,19,20,26,40,12,18,23);
		echo "<br>O menor valor é :" .min($idade20);
		echo "<br>O maior valor é :" .max($idade20);	

?>