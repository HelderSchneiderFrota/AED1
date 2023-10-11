#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main(){

    srand(time(0)); 
    double Corno[15], somatorio =0, media=0;

        for(int linha= 0; linha <= 14; linha++){
                Corno[linha] = rand()%1000;
                somatorio += Corno[linha];
                printf("Gado [%d] Peso: %.0lf \n", linha, Corno[linha]);
            }    
            media = somatorio/15;
            printf("A media eh: %.0lf \n", media);

        for(int linha= 0; linha <= 15; linha++){
            if(Corno[linha] < media){
                printf("O gado da posicao: %d esta a baixo da media \n", linha);
            }
        }


return 0;
}
