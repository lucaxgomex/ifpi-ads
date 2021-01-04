public class Jogador {
    int forca;
    int nivel;
    int pontosAtuais;

    Jogador(int forca, int nivel, int pontosAtuais){
        this.forca = forca;
        this.nivel = nivel;
        this.pontosAtuais = pontosAtuais;
    }

    int pontosAtaque(int forca, int nivel) {
        return forca * nivel;
    }

    void atacar(Jogador outroJogador){
        outroJogador.pontosAtuais -= this.pontosAtaque(forca, nivel);
    }
}
