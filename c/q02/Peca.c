#include <stdio.h>
#include <stdbool.h>

// Definição dos tipos de peças
enum Tipo {
    REI,
    RAINHA,
    TORRE,
    BISPO,
    CAVALO,
    PEAO
};

enum Cor {
    BRANCO,
    PRETO
};

struct PecaXadrez {
    enum Tipo tipo;
    enum Cor cor;
    int posicaoX;
    int posicaoY;
};

void moverPeca(struct PecaXadrez *peca, int novaPosX, int novaPosY) {

}

void capturarPeca(struct PecaXadrez *peca, struct PecaXadrez *adversaria) {

}

void obterInformacoes(struct PecaXadrez peca) {

}