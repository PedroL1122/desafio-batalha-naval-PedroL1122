#include <stdio.h>

int main() {
    // Tamanho do tabuleiro
    const int linhas = 5;
    const int colunas = 5;

    // Matriz representando o tabuleiro (inicializada com 0)
    int tabuleiro[linhas][colunas] = {0};

    // Navio vertical (tamanho 3)
    int navio_vertical_inicio_x = 1;  // linha
    int navio_vertical_inicio_y = 2;  // coluna

    // Posiciona navio vertical (3 posições)
    for (int i = 0; i < 3; i++) {
        tabuleiro[navio_vertical_inicio_x + i][navio_vertical_inicio_y] = 1;
    }

    // Navio horizontal (tamanho 4)
    int navio_horizontal_inicio_x = 4;  // linha
    int navio_horizontal_inicio_y = 0;  // coluna

    // Posiciona navio horizontal (4 posições)
    for (int j = 0; j < 4; j++) {
        tabuleiro[navio_horizontal_inicio_x][navio_horizontal_inicio_y + j] = 2;
    }

    // Exibe as coordenadas dos navios
    printf("Coordenadas do Navio Vertical (valor 1):\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            if (tabuleiro[i][j] == 1) {
                printf("(%d, %d)\n", i, j);
            }
        }
    }

    printf("\nCoordenadas do Navio Horizontal (valor 2):\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            if (tabuleiro[i][j] == 2) {
                printf("(%d, %d)\n", i, j);
            }
        }
    }

    return 0;
}