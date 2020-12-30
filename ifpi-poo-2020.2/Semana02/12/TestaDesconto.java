public class TestaDesconto {
	public static void main(String[] args) {
		Desconto objeto = new Desconto();
		objeto.valor = 12;
		objeto.desconto = 10 / 100;

		objeto.calcula();
		objeto.mostraValor();
	}
}