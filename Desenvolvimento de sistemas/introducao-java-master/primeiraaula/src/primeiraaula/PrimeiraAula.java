package primeiraaula;

public class PrimeiraAula {
	public static void main(String[] args) {
		int numero = 10, numero2 = 1, total = 0;
		/*Operadores Matem�ticos
		 * + -> Adicao
		 * - -> Subtracao
		 * * -> Multiplicacao
		 * '/' -> Divisao
		 * */
		
total = numero * numero2;
		
		/* Operadores L�gicos
		 * > -> Maior que
		 * < -> Menor que
		 * == -> igual
		 * >= -> Maior ou igual
		 * <= -> Menor ou igual
		 * != -> Diferente
		 * && -> E
		 * || -> Ou
		 * */
		
		if(total > 10) {
			System.out.println(total);
		}else if(total == 10) {
			System.out.println("O valor � igual a 10");
		}else{
			System.out.println("O valor � inferior a 10");
		}
		
		/*La�os de repeti��o
		 * 
		 * */
		
		int i = 0;
		
		//Enquanto
		while(i <= 100) {
			System.out.println("MARC�O");
			i = i + 1;
		}
		

		}
		
		
		
		
}