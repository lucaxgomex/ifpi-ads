public class TestaCarro extends Carro {
	public static void main(String[] args) {
		Carro ford = new Carro();
		
		ford.placa = "BRA2519";
		ford.ano = 2019;
		ford.modelo = "Edge";
		
		System.out.println("Placa do carro: " + ford.placa);
		System.out.println("Ano do carro: " + ford.ano);
		System.out.println("Modelo do carro: " + ford.modelo);
	}	
}