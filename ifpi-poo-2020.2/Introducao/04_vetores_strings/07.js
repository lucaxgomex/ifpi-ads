const prompt = require('prompt-sync')()
var valor = 0
var vetor = []

for (var i = 0; i < 5; i++) {
	valor = parseInt(prompt('Informe o valor do vetor: '))
	vetor.push(valor)
}

console.log(`Vetor => ${vetor}`)