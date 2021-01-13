//import java.time.LocalDate;

public class ProdutoPerecivel extends Produto {
	/*
	static LocalDate dataAtual = LocalDate.now();
	static LocalDate dataVencimento = LocalDate.parse("2022-01-27");
	
	static int anoAtual = dataAtual.getYear();
	static int anoVencimento = dataVencimento.getYear();
	
	void validade() {
		if (anoVencimento <= anoAtual) {
			System.out.println("Produto normal.");
		} else {
			System.out.println("Produto vencido.");
		}
	}
	*/
	private String dataValidade;
	
	public String getDataValidade() {
		return dataValidade;
	}
	
	public void setDataValidade(String dataValidade) {
		this.dataValidade = dataValidade;
	}
	
	public void dataValida(String dataAtual) {
		String dataValidadeDividida[] = this.dataValidade.split("/");
		String dataAtualDividida[] = dataAtual.split("/");
		
		if (Integer.parseInt(dataAtualDividida[2]) <= Integer.parseInt(dataValidadeDividida[2])) {
			if (Integer.parseInt(dataAtualDividida[1]) <= Integer.parseInt(dataValidadeDividida[1])) {
				if( Integer.parseInt(dataAtualDividida[0]) <= Integer.parseInt(dataValidadeDividida[0]) ){
                    //return true; //Produto normal
					System.out.println("Produto normal");
                }
			}
		} 
		//return false; //Produto vencido
		System.out.println("Produto vencido");
	}
}