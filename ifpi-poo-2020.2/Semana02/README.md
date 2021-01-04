# Respostas das questões discursivas

---
> Observação: as questão que não estão disponibilizadas neste README estão todas em seus respectivos diretórios.
---

### Questão 1)
Para que seja possível executar uma classe em Java, é preciso primeiro compilar um arquivo .java através da instrução de compilação **javac NomeDaClasse.java**. A partir de então, a classe poderá ser executada por meio da instrução **java NomeDaClasse**. 
- **javac**: compilador.
- **java**: comando da JVM que executa a classe.

---

### Questão 2)
O erro inicial apresentado no momento da compilação mostra que um '**(**' está faltando após a definição da método main. Ademais, outro erro de compilação se refere ao fato de que a variável **contador** não foi inicializada. 
```Java
/*Correção*/
public class Aplicacao {
    public static void main(String[] args) {
        int contador = 1; //Ou um valor qualquer
        System.out.println(contador++);
    }
}
```

---

### Questão 3)
O resultado da execução da classe **Exemplo** é 9, pois a partir do momento que a condição **(a > 11)** retorna o valor booleano **false**, é executado o bloco **System.out.println(a - b)**;

---

### Questão 4)
A instrução **break** deve ser utilizada no final de uma condição condizente com um case para que o restante das condições no código não sejam utilizadas.
```Java
/*Correção*/
public class Valor { 
    public static void main(String[] args) {
        int op = 1;
        switch (op) {
            case 1: 
                System.out.println(op);
                break;
            case 2: 
                System.out.println(op);
                break;
            default:
                System.out.println(op);
        }
    }
}
```

---

### Questão 5)
Na instrução **System.out.println("Soma: " + a + b)**, há uma concatenação entre os valores 10 e 1, resultando no valor **101**.
```Java
/*Correção*/
import java.util.*;

public class Test {
	public static void main(String args[]) {
		int a = 10;
		int b = 1;
		System.out.format("Soma: %d\n", a + b);
	}
}
```

---

### Questão 9)
- ***Abordagem estruturada***: a classe resultante da ***questão 6*** é considereda mais etruturada pela simplicidade de seu código;

- ***Abordagem orientada a objeto***: a ***questão 8*** é a única na qual se é necessário instanciar um objeto;

- ***Abordagem modularizada***: o método definido na ***questão 7*** é possível ser utilizado na ***questão 8***.

- ***Abordagem burocrática***: apesar da organização do código, é necessário certo conhecimento em OO para que se possa resolver a ***questão 8***.