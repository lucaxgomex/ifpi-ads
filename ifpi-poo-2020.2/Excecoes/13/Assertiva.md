#a
### Alternativa 1:
A desconsideração de um determinado trecho de código poderá acarretar a dificuldade para compreender se determinada aplicação funcionou como o previsto.

### Alternativa 2:
A exibição de uma exibição de mensagem de erro mediante uma falha no sistema é ineficaz. Sistemas mais robustos e mais difundidos raramente ou quase nunca irão depender de um console para que se possa checar a saída desta mensagem.

### Alternativa 3:
O retorno de uma *flag* indicando erro também é algo ineficaz mediante dois fatores. Durante o desenvolvimento, os programadores poderão se confundir em relação ao que necessariamente poderá significar tal código de erro, o que poderá prejudicar a documentação. Além deste fator, o usuário final terá certo tempo perdido diante do entedimento deste código. 

#b
O intuito do uso de exceções é deixar o programa mais seguro do ponto de vista de previsão de falhas, por meio das quais quaisquer exceções poderão ser tratadas e contornadas por meio de alguma lógica interna, o que permitirá o funcionamento do mesmo.

#c
Sim. O uso de estruturas como **try/catch/finally** e o lançamento de exceções como **throw** são os exemplos mais evidentes. Por meio da lógica empregada por meio destes, o código por sua vez torna-se mais elegante e até mesmo independente da estrutura condicional **if/else**.