public class TestaDecimalNumber {
	public static void main(String[] args) {
		//double number = 3.14159265;		
		DecimalNumber n = new DecimalNumber();
		n.numero = 3.14159265;

		System.out.println("Parte inteira --> " + n.retornaInteiro());
		System.out.println("Parte decimal --> " + n.retornaDecimal());
	}
}