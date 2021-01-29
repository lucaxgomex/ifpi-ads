import java.util.Scanner;

public class ArrayException {  
    public static void main(String[] args) {        
    	Scanner sc = new Scanner(System.in);

        System.out.print("Informe a quantidade maxima para um vetor: ");
        int m = sc.nextInt();

        System.out.print("Agora informe um valor ficticio: ");
        int f = sc.nextInt();

        try {    
	        int a[] = new int[m];    
    	    int count = 2;

        	for (int i = 0; i < f; i ++) {
            	a[i] = count / 0;    
            	count *= 2;
            }
        }    
        catch (ArithmeticException exc) {
        	System.out.println("Primeira ocorrencia de uma excecao");   
        	
        	exc.getMessage();
        	exc.printStackTrace();
        }

        catch (IndexOutOfBoundsException exc) {
        	System.out.println("Segunda ocorrencia de uma excecao");    
        	
        	exc.getMessage();
        	exc.printStackTrace();
        }
        
        finally {
        	System.out.println("Finalizacao do resto do codigo");    
        	System.out.println("\n");    
        }
    }  
}  