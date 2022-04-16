package primeiraaula;

public class PrimeiraAula {
	public static void main(String[] args) {
		int numero = 10, numero2 = 1, total = 0;
		/*Operadores Matemáticos
		 * + -> Adicao
		 * - -> Subtracao
		 * * -> Multiplicacao
		 * '/' -> Divisao
		 * */
		
total = numero * numero2;
		
		/* Operadores Lógicos
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
			System.out.println("O valor é igual a 10");
		}else{
			System.out.println("O valor é inferior a 10");
		}
		
		/*Laços de repetição
		 * 
		 * */
		
		int i = 0;
		
		//Enquanto
		while(i <= 100) {
			System.out.println("MARCÃO");
			i = i + 1;
		}
		

		}
		
		
		
		
}