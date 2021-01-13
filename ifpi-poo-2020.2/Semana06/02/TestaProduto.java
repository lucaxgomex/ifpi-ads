public class TestaProduto {
	public static void main(String[] args) {
		ProdutoPerecivel produto = new ProdutoPerecivel();
		
		produto.setDataValidade("11/01/2021");
		produto.dataValida("13/01/2021");
	}
}