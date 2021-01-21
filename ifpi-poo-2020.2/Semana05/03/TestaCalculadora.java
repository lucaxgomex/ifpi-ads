import java.util.Scanner;

public class TestaCalculadora {
	public static void main(String[] args) {
		Scanner obj = new Scanner(System.in);
		
		System.out.println("Informe o primeiro valor");
		int x = obj.nextInt();
		
		System.out.println("Informe o segundo valor");
		int y = obj.nextInt();
		
		obj.close();
		
		Calculadora c = new Calculadora(x, y);
		
		System.out.println("Soma: " + c.soma());
		System.out.println("Subtracao: " + c.sub());
	}
}