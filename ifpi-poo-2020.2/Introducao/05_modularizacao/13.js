function calculaRetorno(n, d) {
	var string = n.toString()
	var contador = d.toString()
	var quantidade = 0

	for (var i = 0; i < string.length; i++) {
		if (d > 9) {
			break;
		} 

		if (contador === string[i]) {
			quantidade++
		}
	}
	console.log(`Quantidade => ${d} aparece ${quantidade} vezes`)
}

calculaRetorno(7677, 7)