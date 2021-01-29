public class Teste {
	public static void main(String args[]) {
		try {
			throw new RuntimeException();
		} catch (RuntimeException e) {
			try {
				throw new RuntimeException();
			} catch (RuntimeException e2) {
				System.out.println("A");
			}
			System.out.println("B");
		}
		System.out.println("C");
	}
}