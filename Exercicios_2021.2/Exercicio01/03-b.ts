enum Estados {
	"PI",
	"CE",
	"MA"
};

for (let i: number = 0; i < Object.keys(Estados).length / 2; i ++) {
	let estado: string = Estados[i];
	console.log(Object.keys(Estados).indexOf(estado));
}
