# Respostas das Questões Assertivas
---
### 1
A partir do momento que uma variável é declarada numa classe, esta torna-se uma atributo da classe e o compilador irá considerá-la como sendo zero caso não inicializada.

---

### 2
O erro referido é de que a classe ***Hotel*** não possui parâmetros.

---

### 3
O operador ***this*** será responsável por apanhar um atributo próprio da classe em questão.

---

### 4
Há uma dificuldade de interpretação pelo fato de tanto o parâmetro quando o atributo terem o mesmo nome, tornando-se necessário o uso do operador ***this***. Além disso, não há um retorno na função e nem mesmo uma instrução para retornar um valor.
~~~java
//Correção do código
double x(double valor) {
	valor += valor;
	return valor;
}
~~~

---

### 5
O erro é gerado pelo fato do construtor na classe ***TestaRadio*** não apresentar nenhum argumento, consideramento que um parâmetro fora declarado no construtor da classe ***Radio***.

---

###  6
### a)
O valor de saída para ambos os casos será ***90***.

### b)
Digamos, por exemplo, que o objeto ***c1*** estava armazenado no endereço de memória Conta@0x12 e o ***c2***, em Conta@0x14. A partir do momento que a atribuição ***c1 = c2*** é realizada, ***c1*** passa a apontar para o endereço de ***c2***. Ou seja, qualquer valor que o objeto ***c2*** possua, aconterá o mesmo com o outro objeto.

---

### Pesquisa
Uma definição breve acerca do que se compreende o ***encapsulamento*** em POO é a seguinte: 

> Encapsulamento se refere ao agrupamento de dados com os métodos que operam nesses dados ou à restrição de acesso direto a alguns dos componentes de um objeto.
> Fonte: <https://en.wikipedia.org/wiki/Encapsulation_(computer_programming)>

Deixando a parte de ocultação de informações um pouco de lado, a finalidade do encapsulamento é o de organização de dados. Estes mesmos seriam os objetos de uma determinada classe, seus atributos e seu métodos.

Assim sendo, o propósito do encapsulamento é o de organizar os dados que sejam relacionados, agrupando-os (encapsulando-os) em objetos (classes), reduzindo as colisões de nomes de variáveis (dado que variáveis com o mesmo nome estarão em namespaces distintos) e, da mesma forma, reunindo métodos relacionados às suas propriedades (ou variáveis de classe).