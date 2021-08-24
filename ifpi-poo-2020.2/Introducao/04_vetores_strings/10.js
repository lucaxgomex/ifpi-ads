const prompt = require('prompt-sync')()
const texto = prompt('Insira aqui o seu texto: ')
const vogais = ['a', 'A', 'e', 'E', 'i', 'I', 'o', 'O', 'u', 'U']

for (var i = 0; i < texto.length; i++) {
	for (var j = 0; j < vogais.length; j++) {
		if (texto[i] === vogais[j]) {
			texto.replace(texto[i], ' ')
		}
	}
}

console.log(`Novo texto => ${texto}`)