public class DecimalNumber {
	double numero;

	int retornaInteiro() {
		return (int) numero;
	}

	double retornaDecimal() {
		return numero % 1;
	}
}