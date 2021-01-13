public class TestaCarroAutomatico extends TestaCarro {
	public static void main(String[] args) {
		CarroAutomatico tesla = new CarroAutomatico();
		
		tesla.placa = "EUS31Z7";
		tesla.ano = 2018;
		tesla.modelo = "Roadster";
		tesla.autonomiaBateria = 97;
		
		System.out.println("Placa do carro: " + tesla.placa);
		System.out.println("Ano do carro: " + tesla.ano);
		System.out.println("Modelo do carro: " + tesla.modelo);
		System.out.println("Duracao da bateria: " + tesla.autonomiaBateria);
	}
}