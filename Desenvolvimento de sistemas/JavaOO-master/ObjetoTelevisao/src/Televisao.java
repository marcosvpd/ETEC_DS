
public class Televisao {
	
	//O que a tv tem
	String modelo;
	String polegadas;
	boolean smartv;
	boolean internet;
	boolean quatrok;
	String marca;
	boolean ligado;
	
	
	
	//O que ela faz
	
	public void ligar() {
		if(ligado==true) {
			System.out.println("Televis�o ligada!");
		}
		else {
			System.out.println("Ligue sua televis�o!");
		}
	}
	
	public void acessarnet() {
		if(internet==true) {
			System.out.println("\nSua televis�o tem acesso � internet.");
		}
		else {
			System.out.println("\nSua tv n�o tem acesso a internet.");
		}
	}
	
}
