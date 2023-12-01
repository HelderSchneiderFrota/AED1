#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    srand(time(0)); //tomei a liberdade de fazer um sorteio
    int MatrizA[3][3], MatrizB[3][3], MatrizC[3][3];

        for(int linha= 0; linha < 3; linha++){
            for(int coluna=0; coluna < 3; coluna++){
             MatrizA[linha][coluna] = rand()%10;  
                printf("\t %d", MatrizA[linha][coluna]);   
                    }
            printf("\n");
            }  
            printf("\n");

        for(int linha= 0; linha < 3; linha++){
            for(int coluna=0; coluna <3; coluna++){
             MatrizB[linha][coluna] = rand()%10;  
                printf("\t %d", MatrizB[linha][coluna]);   
                    }
            printf("\n");
            } 
        printf("Os maiores valores das duas matrizes: \n");
                    
        for(int linha= 0; linha < 3; linha++){
            for(int coluna=0; coluna <3; coluna++){
                if(MatrizA[linha][coluna]>=MatrizB[linha][coluna]){
             MatrizC[linha][coluna] = MatrizA[linha][coluna];
                }
                else{
                    MatrizC[linha][coluna] = MatrizB[linha][coluna];
                }
                printf("\t %d", MatrizC[linha][coluna]);   
                    }
            printf("\n");
            }
return 0;        
}