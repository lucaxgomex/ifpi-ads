const prompt = require('prompt-sync')()
var numeros = 0
var soma = 0

while (true) {
	const numeros = parseInt(prompt('Informe os numeros: '))

	if (numeros === -1) {
		break
	}
	soma += numeros
}

console.log(`Resultado => ${soma}`)
