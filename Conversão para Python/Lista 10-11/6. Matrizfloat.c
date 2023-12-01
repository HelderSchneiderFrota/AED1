#include <stdio.h>
#include <stdlib.h>
#include <time.h>

float funcaoA(float matriz[3][5]) { // o menor elemento da matriz
    float menor = matriz[0][0];
    for (int linha =0; linha < 3; linha++) {
        for (int coluna = 0; coluna < 5; coluna++) {
            if (matriz[linha][coluna] < menor) {
                menor = matriz[linha][coluna];
            }
        }
    }
    return menor;
}

int funcaoB(float matriz[3][5]) {
    int contador = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            float elemento = matriz[i][j];
            for (int k = 0; k < 3; k++) {
                for (int l = 0; l < 5; l++) {
                    if (matriz[k][l] == elemento) {
                        contador++;
                    }
                }
            }
        }
    }
    return contador;
}


int main() {
    float matriz[3][5], menor;
    int quantidade;
    srand(time(0));
    
    for (int linha =0; linha < 3; linha++) {
        for (int coluna = 0; coluna < 5; coluna++) {
            matriz[linha][coluna] = rand()%100;
            printf("Elemento [%d][%d]: %.f \n", linha, coluna, matriz[linha][coluna]);
        }
        
    }
    menor = funcaoA(matriz);
    printf("O menor elemento da matriz eh: %.f\n", menor);

    quantidade = funcaoB(matriz);
    printf("A quantidade de elementos iguais na matriz eh: %d\n", quantidade);

    return 0;
}
