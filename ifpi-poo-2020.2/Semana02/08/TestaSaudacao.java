public class TestaSaudacao {
	public static void main(String[] args) {
		Saudacao objeto = new Saudacao();

		objeto.texto = "Hello";
		objeto.destinatario = "World!";

		System.out.println(objeto.obterSaudacao());
	}
}