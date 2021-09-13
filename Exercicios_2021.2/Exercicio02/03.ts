let array: Array<number> = [];

for (let i: number = 0; i < 15; i ++) {
	array.push(i + 1);
}

function isPair(value: any) {
	return value % 2 == 0;

}
let pair: any = (): void => {
	console.log(array.filter(isPair));
}

pair();
