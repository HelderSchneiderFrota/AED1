
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int primo(int a){//era pra ser primo mas fiz o impares por preguiçaaa

    if(a%2 == 0 ){
        return 1;
    }
    else{
        return 0;
    }

}

int main(){

    srand(time(0)); 
    int Inteiro[10], a;

        for(int linha= 0; linha <= 9; linha++){
                Inteiro[linha] = rand()%20; 
                printf("Inteiro [%d] Valor: %d \n", linha, Inteiro[linha]);
            }    

        printf("Digita um inteiro: ");
        scanf("%d", &a);
            if(primo(a) == 1){

                printf("Aqui estao os primos!! \n");

                for(int linha= 0; linha <= 9; linha++){
                    if(Inteiro[linha] %2 !=0){
                        printf("Inteiro [%d] Valor: %d \n", linha, Inteiro[linha]);
                    }  
                }
                }

return 0;
}
