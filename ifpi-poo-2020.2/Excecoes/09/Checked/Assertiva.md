> Definição sobre *checked exceptions*
Tratam-se de exceções as quais é necessário haver um tratamento, seja com um bloco **try/catch** ou mesmo com um **throws** (relançando a mesma para outro local). Em suma, as *checked exceptions* são empregradas em um contexto onde os erros são recuperáveis e contornáveis, onde o programador tem em mente a possibilidade da ocorrência de um erro.


Checked exceptions são utilizadas para erros recuperáveis enquanto que Unchecked exceptions são utilizadas para erros irrecuperáveis. Significa dizer que quando você sabe que seu erro pode ser tratado, você utiliza Checked Exceptions, caso contrário utilize Unchecked Exceptions.

Para ilustrar isso, imagine que você criou uma Exception chamada “ValorPagamentoMenorTaxaEmbarqueException”, isso significa que quando o valor do pagamento for menor que a taxa de embarque você lançará uma Exception e tratará da forma que achar melhor, por exemplo: Pedindo para o usuário aumentar o valor do pagamento. Essas são as Checked Exceptions, você sabe que o erro poderá ocorrer e já sabe como corrigi-lo caso ocorra.
