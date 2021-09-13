function exibir(...input: any): void {
	//console.log(input);
	for (let i of input) {
		console.log(i);
	}
}

exibir('a', 'b');
exibir('a', 'b', 'c');
exibir('a', 'b', 'c', 'd');
