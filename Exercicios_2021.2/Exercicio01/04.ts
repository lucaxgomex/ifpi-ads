enum DiasSemana {
	"Segunda",
	"Terça",
	"Quarta",
	"Quinta",
	"Sexta",
	"Sábado",
	"Domingo"
};

namespace verificarDiasSemana {
	export function isDiaUtil(day: any) {
		if (day == "Sábado" || day == "Domingo") {
			return false;
		}
		return true;
	}
}

for (let i: number = 0; i < 7; i++ ) {
	console.log(`${DiasSemana[i]}: ${verificarDiasSemana.isDiaUtil(DiasSemana[i])}`);
}
