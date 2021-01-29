> Definição sobre *unchecked exceptions*
O uso das *unchecked exceptions* está atrelado a possibilidade de poder tratar ou não determinado erro, ou seja, o programador pode tratar apenas se quiser, se sentir que é necessário para o bom funcionamento da sua aplicação.


Por outro lado, imagine um NullPointerException inesperado na sua aplicação. Esse erro não pode ser tratado, o erro ocorreu e pronto, você deve apenas mostrar uma mensagem ao usuário dizendo que o erro ocorreu, mas nada poderá ser feito para corrigi-lo, se não reiniciar todo o processamento. Essas são as Unchecked Exceptions, que geralmente são filhas de RuntimeException, isso porque estas são exceções que ocorrem em tempo de execução (runtime) e não em tempo de design.

Quando você cria um bloco de código que exige que você use **try-catch** ou **throws**, estará em frente a uma típica Checked Exception, diferente das RuntimeExceptions que só ocorrem em tempo de execução e são inesperadas. As Unchecked Exceptions pelo fato de não serem obrigatoriamente tratadas, automaticamente relançam suas exceções, ou seja, possuem throws implícito no método que as criou.
