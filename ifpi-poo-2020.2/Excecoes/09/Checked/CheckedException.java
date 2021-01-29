import java.io.*;
import java.util.Scanner;

public class CheckedException {  
	public static void main(String args[]) {
		int i; 
		FileInputStream file = null;
		Scanner sc = new Scanner(System.in);

		System.out.println("Informe uma opcao: \n1 - Arquivo completo; \n2 - Arquvio vazio;");
		int option = sc.nextInt();

		if (option == 1) {
			try {
	    		file = new FileInputStream("full.txt"); 
			} catch(FileNotFoundException exc) {
				System.out.println("Arquivo nao encontrado");
			}				

			try {
			    while((i = file.read()) != -1) { 
					System.out.print((char) i); 
			    } 
			    file.close(); 
			} catch (IOException io) {
			    System.out.println("Erro de entrada e saida: " + io);
			}
			finally {
				System.out.println("\n");	
			}
		} else if (option == 2) {
			try {
			    file = new FileInputStream("empty.txt"); 
			} catch(FileNotFoundException e) {
				System.out.println("Arquivo nao encontrado");
			}
		}
	}
}