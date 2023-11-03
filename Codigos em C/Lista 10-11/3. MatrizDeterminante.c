#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    srand(time(0)); //tomei a liberdade de fazer um sorteio
    int MatrizA[2][2], determinante=0, multa=1,multb=1;

        for(int linha= 0; linha < 2; linha++){
            for(int coluna=0; coluna < 2; coluna++){
             MatrizA[linha][coluna] = rand()%10;  
                printf("\t %d", MatrizA[linha][coluna]);   
                    }
            printf("\n");
            }  
            printf("\n");
     for(int linha= 0; linha < 2; linha++){
            for(int coluna=0; coluna < 2; coluna++){
                if(coluna==linha){
                    multa *= MatrizA[linha][coluna];
                }
                else{
                    multb *= MatrizA[linha][coluna];
                }
            }
     }
determinante = multa - multb;
printf("O determinante eh: %d", determinante);
return 0;           
}
