public class TestaNumberUtils {
	public static void main(String[] args) {
		NumberUtils objeto = new NumberUtils();

		objeto.n = 12;
		System.out.println("Par: " + objeto.isPair());
        System.out.println("Impar: " + objeto.isOdd());
        System.out.println("Numero primo: " + objeto.isPrime());	
        objeto.printCount();
        System.out.println("");
        objeto.printReverseCount();
        System.out.println("\n");
	}
}