const prompt = require('prompt-sync')()
const s = prompt('Digite uma string qualquer: ')
const a = prompt('Informe o primeiro caractere: ')
const b = prompt('Informe o segundo caractere: ')

console.log(`Nova string => ${s.replace(a, b)}`)