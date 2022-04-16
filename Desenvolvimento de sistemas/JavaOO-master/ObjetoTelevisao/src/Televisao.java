
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
			System.out.println("Televisão ligada!");
		}
		else {
			System.out.println("Ligue sua televisão!");
		}
	}
	
	public void acessarnet() {
		if(internet==true) {
			System.out.println("\nSua televisão tem acesso á internet.");
		}
		else {
			System.out.println("\nSua tv não tem acesso a internet.");
		}
	}
	
}
