#include <stdio.h>

// Estácio - Desafio Batalha Naval
// Nível Novato

int main() {
    // matriz do tabuleiro 5x5
    int tabuleiro[5][5];

    // preencher 0
    int i, j;
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // posição inicial e tamanho do navio horizontal
    int hLinha = 2;
    int hColuna = 1;
    int hTamanho = 3;

    // posição inicial e tamanho do navio vertical
    int vLinha = 0;
    int vColuna = 4;
    int vTamanho = 4;

    // navio horizontal (valor 3)
    for (j = 0; j < hTamanho; j++) {
        tabuleiro[hLinha][hColuna + j] = 3;
    }

    // navio vertical (valor 3)
    for (i = 0; i < vTamanho; i++) {
        tabuleiro[vLinha + i][vColuna] = 3;
    }

    // imprime coordenadas do navio horizontal
    printf("Coordenadas do navio horizontal:\n");
    for (j = 0; j < hTamanho; j++) {
        printf("(%d, %d)\n", hLinha, hColuna + j);
    }

    // imprime coordenadas do navio vertical
    printf("\nCoordenadas do navio vertical:\n");
    for (i = 0; i < vTamanho; i++) {
        printf("(%d, %d)\n", vLinha + i, vColuna);
    }

    return 0;
}
