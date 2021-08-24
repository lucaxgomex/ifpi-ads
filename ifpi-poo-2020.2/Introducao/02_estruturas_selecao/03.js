const prompt = require('prompt-sync')()
var valores = []
var maior = 0

var maiorValor = () => {
	for (var i = 0; i < 3; i++) {
		const valor = prompt('Insira um valor inteiro: ')
		valores.push(valor)

		if (valor > maior) {
			maior = valor;
		}
	}
	return maior
}

console.log(`Maior valor => ${maiorValor()}`)