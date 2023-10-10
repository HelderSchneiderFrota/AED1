#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main(){

    int somatorio=0, lm =0, cm =0, MaiorLinha=0, MaiorColuna=0;

    srand(time(0)); //tomei a liberdade de fazer um sorteio para não precisar ficar digitando um a um;
    double matriz[7][12], anterior =0;

        for(int linha= 0; linha < 7; linha++){
            for(int coluna=0; coluna <= 10; coluna++){
                matriz[linha][coluna] = rand()%1000;
                somatorio += matriz[linha][coluna];
            }
            matriz[linha][11] = somatorio/10;
        }

        for(int linha= 0; linha <  7; linha++){
            for(int coluna=0; coluna <= 10; coluna++){
                printf("Posicao [%d][%d]: %.lf\n",linha, coluna ,matriz[linha][coluna]);
                if(linha == anterior){
                    anterior++;
                    MaiorLinha = linha;
                    MaiorColuna = coluna;
                }
            }
        }
    
printf("Maior do dia foi venda foi Posicao [%d] [%d] : %.lf", MaiorLinha, MaiorColuna, matriz[MaiorLinha][MaiorColuna]);

                
//printf("O maior venda ficou na posicao [%d][%d]: %.2lf \n",MaiorLinha,MaiorColuna ,matriz[MaiorLinha][MaiorColuna]);
    
return 0;
}