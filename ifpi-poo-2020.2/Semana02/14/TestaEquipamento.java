public class TestaEquipamento {
    public static void main(String[] args) {
        Equipamento computador = new Equipamento();
        Equipamento ventilador = new Equipamento();
        
        computador.ligado = true;
        ventilador.ligado = false;

        computador.inverte();
        ventilador.inverte();

        //Bloco computador
        if (computador.estaLigado() == true) {
            System.out.println("Computador ligado");
        } else {
            System.out.println("Computador desligado");
        }

        //Bloco ventilador
        if (ventilador.estaLigado() == true) {
            System.out.println("Ventilador ligado");
        } else {
            System.out.println("Ventilador desligado");
        }
    }   
}