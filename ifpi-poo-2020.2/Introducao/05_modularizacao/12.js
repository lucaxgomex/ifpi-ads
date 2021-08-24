function tempo(segundos) {
	var horas = Math.floor(segundos / 3600)
	var resto = Math.floor(segundos % 3600)

	var minutos = Math.floor(resto / 60)
	resto = Math.floor(resto % 60)

	segundos = resto

	return `${horas}:${minutos}:${segundos}`
}

console.log(`Valor de tempo convertido => ${tempo(4301)}`)