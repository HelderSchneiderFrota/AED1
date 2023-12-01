#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int maior=0, MaiorLinha=0;

    srand(time(0)); //tomei a liberdade de fazer um sorteio para não precisar ficar digitando um a um;
    double matriz[7][12], somatorio=0, menor=0;

        for(int linha= 0; linha < 7; linha++){
            for(int coluna=0; coluna <= 10; coluna++){
                matriz[linha][coluna] = rand()%1000;
                somatorio += matriz[linha][coluna];
            }
            matriz[linha][11] = somatorio/10;
        }

        for(int linha= 0; linha <  7; linha++){
            for(int coluna=0; coluna <= 10; coluna++){
                printf("Posicao [%d][%d]: %.lf \n",linha, coluna ,matriz[linha][coluna]);
                if(matriz[linha][11] > menor){
                    MaiorLinha = linha;
                    menor = matriz[linha][11];
                }


            }
            printf("A media do dia foi: %.lf \n", matriz[linha][11]);
        }
    
printf("O dia que teve a maior media de faturamento foi o dia: %d  \n",MaiorLinha);
    
return 0;
}