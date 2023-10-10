#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int num, lm =0, cm =0; //SIM USEI VARIAVEIS GOBLAIS;

int main(){

    num = 5;

    srand(time(0)); //tomei a liberdade de fazer um sorteio para não precisar ficar digitando um a um;
    int matriz[num][num], maior =0;

        for(int linha= 0; linha <= num; linha++){
            for(int coluna=0; coluna <= num; coluna++){
                matriz[linha][coluna] = rand()%50;
            }
        }
        for(int linha= 0; linha <= num; linha++){
            for(int coluna=0; coluna <= num; coluna++){
                if(matriz[linha][coluna]>maior){
                    maior = matriz[linha][coluna];
                    lm = linha;
                    cm = coluna;
                }
            printf("posicao [%d][%d]: %d \n",linha, coluna ,matriz[linha][coluna]);
            }
        }
    printf("O maior ficou na posicao [%d][%d]: %d \n",lm, cm ,matriz[lm][cm]);
    return 0;
}