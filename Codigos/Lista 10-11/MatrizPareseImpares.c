#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main(){

    srand(time(0)); //tomei a liberdade de fazer um sorteio
    double MatrizA[3][7], somapar=0, somaimpar=0,mediapar=0;

        for(int linha= 0; linha < 3; linha++){
            for(int coluna=0; coluna < 7; coluna++){
                MatrizA[linha][coluna] = rand()%10;  
                printf("\t [%d][%d] %.lf",linha, coluna, MatrizA[linha][coluna]);

                    if((coluna%2) == 0){
                        somapar += MatrizA[linha][coluna];
                    }
                    else{
                       somaimpar += MatrizA[linha][coluna];
                    }
                    }
            printf("\n");
            } 
mediapar = somapar/7;

printf("A soma dos elementos que estao nas colunas de indices pares: %.lf\n", somapar);
printf("A soma dos elementos que estao nas colunas de indices impares: %.lf\n", somaimpar);
printf("A media dos elementos que estao nas linhas de indices pares: %.lf\n", mediapar);
return 0;
}
