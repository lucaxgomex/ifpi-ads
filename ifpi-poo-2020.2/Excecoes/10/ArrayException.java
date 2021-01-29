public class ArrayException {  
    public static void main(String[] args) {        
        int a[] = new int[5];    
        int count = 2;

        for (int i = 0; i < 10; i ++) {
	        try {    
	            a[i] = count / 0;    
	            count *= 2;
	        }    
	        catch(ArithmeticException | ArrayIndexOutOfBoundsException e) {  
	        	System.out.println("Excecao Aritmetica e de Indice fora do Array");  
	        }    

	        /*
	        catch(ArrayIndexOutOfBoundsException e) {  
	            System.out.println("ArrayIndexOutOfBounds Exception occurs");  
	        } 
	        */   
	        
	        catch(Exception e) {  
	            System.out.println("Erro Generico");  
	        }             
	        finally {
	        	System.out.println("Finalizacao do resto do codigo");    
	        	System.out.println("\n");    
	        }
        }

    }  
}  