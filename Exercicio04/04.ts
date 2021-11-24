//Exercício 04
/*
1. Crie um array de números em typescript e escreva um código que exibe a soma  dos elementos.
*/
let valores: number[] = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12];
let soma: number = 0;

for (let i: number = 0; i < valores.length; i++) {
    soma += valores[i];
}

console.log(`Somatorio => ${soma}`);

//----------------------------------------------------------------------------------------

/*
 2. Considere o trecho de código abaixo e descreva o que acontece com a execução  do código abaixo:
 */
let a : number[] = [1,2,3,4,5];

for (let i : number = 0; i <= a.length; i++) {
    console.log(a[i]);
}
/*
 EXPLICAÇÃO:
 O código acima será responsável por exibir todos os valores presentes no array. Contudo, há um problema: a variável que contará os indexes começa em zero e vai até o tamanho menor ou igual ao tamanho, isto é, neste caso, totalizando um total de 6 voltas no laço de repetição for. Como o array é de tamanho 5, haverá um valor de undefined no final da última iteração.
 */

//----------------------------------------------------------------------------------------

/*
3. Declare um array com 10 números e exiba-os em ordem crescente e em ordem  decrescente.
*/
let a : number[] = [2, 5, 3, 4, 1, 6, 7, 9, 8];

// utilizacao de metodos para gerenciar as ordens do array
console.log(`Ordem crescente => ${a.sort()}`)
console.log(`Ordem decrescente => ${a.reverse()}`)

//----------------------------------------------------------------------------------------

/*
4. Declare uma string com o texto “Instituto Federal do Piauí” e use métodos específicos  para:
a. Exibir a string toda em maiúsculo;
b. Retornar o caractere da posição 10;
c. Retornar a última posição da vogal “o”;
d. Dividir a frase em um array de strings tendo como delimitador os caracteres de  espaço.
*/
let texto: string = "Instituto Federal do Piaui";

console.log(`String em maiusculo => ${texto.toUpperCase()}`);
console.log(`Posicao 10 => ${texto.charAt(10)}`);
console.log(`Retornar ultima posicao => ${texto.lastIndexOf('o')}`);
console.log(`Dividir a frase => ${texto.split(" ")}`);

