public class UncheckedException { 
   public static void main(String args[]) { 
   	try {
      int a = 0; 
      int b = 10; 
      int c = a / b; 
   	} catch (ArithmeticException e) {
   		e.printStackTrace();
   	} finally {
   		System.out.println("Ocorrencia de erro");
   	}
  } 
} 