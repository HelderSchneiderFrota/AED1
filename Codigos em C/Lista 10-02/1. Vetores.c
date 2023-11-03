#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main(){

    srand(time(0)); 
    int VetorA[10],VetorB[10], VetorC[20] , a=0;

        for(int linha= 0; linha <= 9; linha++){
                VetorA[linha] = rand()%10;
                printf("VetorA [%d] Peso: %d \n", linha, VetorA[linha]);
            }
            printf("\n");
        for(int linha= 0; linha <= 9; linha++){
                VetorB[linha] = rand()%100;
                printf("VetorB [%d] Peso: %d \n", linha, VetorB[linha]);
            }
            printf("\n");
        for(int linha= 0; linha <= 9; linha++){
               VetorC[linha] = VetorA[linha]; 
            }
        for(int lin=10 ; lin <= 19; lin++){
                    VetorC[lin] = VetorB[a]; 
                    a++;
            }
        for(int linha= 0; linha <= 19; linha++){
            printf("VetorC[%d] Peso: %d \n", linha, VetorC[linha]);
            }

return 0;
}   