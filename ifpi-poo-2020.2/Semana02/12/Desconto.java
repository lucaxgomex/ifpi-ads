public class Desconto {
	double valor, desconto;

	double calcula() {
		return valor * (1 - desconto);
	}

	void mostraValor() {
		System.out.println("Valor calculado --> " + calcula());
	}
}