#Questão 12

No primeiro **try**, ele lança uma exceção do tipo **RuntimeException**, o **catch** identifica a exceção lançada
e começa executar o que está dentro dele.

Como dentro **catch** tem um **try** que lança também uma exceção do tipo **RuntimeException**, o **catch** identifica a exceção lançada e começa executar o que está dentro dele.

E os dois primeiros comandos de print estão sendo executados dentro dos catchs e o último está dentro da main.
E todos são executados sem a quebra de linha.

Como os erros que são lançados nos try são do tipo RuntimeException e os catchs estão esperando erros do tipo RuntimeException
os catchs sempre serão executados.

Inicialmente é percepível a existência de um bloco de execução **try/catch** dentro de um **catch** que identifica uma **RuntimeException**. Esta exceção fora anteriormente lançada pela instrução **try**. Assim, passa a ser execução um bloco.

Nesse bloco, ocorre o mesmo processo anterior de lançamento, captura e identificação de exceções, desta vez por meio de uma nova variável. Quando a variável **e2** é capturada pela segunda instrução **catch**, é executado o primeiro *print* no console.

As instruções subsequentes são resultados da saída do segundo e do primeiro bloco **try/catch**. Nesse caso, o resultado é mostrado da seguinte forma:
```
A
B
C
```
