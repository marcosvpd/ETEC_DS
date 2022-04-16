package calculos;

public class FuncoesMatematicas {
	public double soma(double a, double b) {
		double total = a + b;
		return total;
	}
	public double subt(double c, double d) {
		double totsub = c - d;
		return totsub;
	}
	public double mult(double e, double f) {
		double totmult = e * f;
		return totmult;
	}
	public double div(double g, double h) {
		double totdiv = g / h;
		return totdiv;
	}
	public double mod(double j) {
		double totmod = j / 100;
		return totmod;
	}
	public double raiz(double r) {
		r = Math.sqrt(r);
		return r;
	}
	public double frac(double l) {
		double totfrac = 1 / l;
		return totfrac;
	}
}