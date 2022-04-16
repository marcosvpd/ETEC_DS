package primeiraaula;

public class QuartaAula {
	public static int soma (int n1, int n2) {
		int total = n1 + n2;
		return total;
	}

	public static double mult(int n1, int n2) {
		double total = n1 * n2;
		return total;
	}
	public static int sub(int n1, int n2) {
		int total = n1 - n2;
		return total;
	}
	public static double divis(int n1, int n2) {
		double total = n1 / n2;
		return total;
	}
	public static void main(String[] args) {
	
	System.out.println(soma(10,2));
	System.out.println(mult(10,2));
	System.out.println(sub(10,2));
	System.out.println(divis(10,2));
	}
}
