package primeiraaula;

public class Testestring {
	public static void main (String[] args) {
	String str = "Isto é uma string Java";
	String xyz = new String ("Isto é uma string Java"); {
	if (str == xyz) System.out.println ("Igual");
	else System.out.println ("Diferente");
	if (str.equals (xyz)) {
		System.out.println("Tamanho da String = " + str.length());
		System.out.println("Substring: " + str.substring(0 , 10));
		System.out.println("Caracter na posição 5: " .charAt(5) );
	str = str.trim();
	str = str.replace("a", "@");
	System.out.println (str);
	str = str.replaceAll("string", "Cadeia de caracteres");
	}
	}
	}
}
	
