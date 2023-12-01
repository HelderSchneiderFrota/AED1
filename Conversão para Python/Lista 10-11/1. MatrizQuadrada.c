    """
    Uma matriz 3 x 7 com valores do tipo int. Seu código deve retornar:
    a) A soma dos elementos que estão nas colunas de índices pares
    b) A soma dos elementos que estão nas colunas de índices ímpares
    c) A média dos elementos que estão nas linhas de índices pare

    """
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    srand(time(0)); //tomei a liberdade de fazer um sorteio
    int MatrizQuadrada[4][4], somaAcima=0, somaAbaixo=0, mult=1;

        for(int linha= 0; linha < 4; linha++){
            for(int coluna=0; coluna < 4; coluna++){
                MatrizQuadrada[linha][coluna] = rand()%10;  
                printf("\t %d",MatrizQuadrada[linha][coluna]);   
                    if(linha>=2+coluna){
                    }
                    else if(coluna>linha){
                        somaAcima += MatrizQuadrada[linha][coluna];
                    }
                    else if(coluna<linha){
                        somaAbaixo += MatrizQuadrada[linha][coluna];
                    }
                    else if(linha==coluna){
                        mult *= MatrizQuadrada[linha][coluna]; 
                    }
                    }
                    
            printf("\n");
            }  
            
printf("A soma dos elementos que estao acima da diagonal principal eh: %d \n", somaAcima);
printf("A soma dos elementos que estao abaixo da diagonal principal eh: %d \n", somaAbaixo);
printf("A Multiplicacao dos elementos que estao na diagonal principal eh: %d", mult);
return 0;        
}