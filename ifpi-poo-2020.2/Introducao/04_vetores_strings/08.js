const prompt = require('prompt-sync')()
var valor = 0
var valoresPares = 0
var vetor = []

for (var i = 0; i < 20; i++) {
	valor = parseInt(prompt('Informe o valor do vetor: '))
	vetor.push(valor)

	if (valor % 2 === 0) {
		valoresPares++
	}
}

console.log(`Quantidade de valores pares => ${valoresPares}`)