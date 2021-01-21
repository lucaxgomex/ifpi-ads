public class Calculadora {
	private int at1;
	private int at2;
	
	Calculadora(int at1, int at2) {
		this.at1 = at1;
		this.at2 = at2;
	}
	
	public int soma() {
		return this.at1 + this.at2;
	}
	
	public int sub() {
		return this.at1 - this.at2;
	}
}	