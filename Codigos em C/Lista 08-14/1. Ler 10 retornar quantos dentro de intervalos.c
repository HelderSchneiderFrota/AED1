#include <stdio.h>


int main(){
int c1=0, c2=0, c3=0, n;
    for(int i; i<10; i++){
        
        printf("Digite %d numero: \n", i);
        scanf("%d", &n);
    
            if(n<5 || n>15){
                c1++;
            }
                if(n<32 || n>45){
                c2++;
                }
                     else{
                        c3++;
                     }
    }
    printf("Possui %d numeros no intervalo de 5 a 15\n", c1);
    printf("Possui %d numeros no intervalo de 32 a 45\n", c2);
    printf("Possui %d numeros no fora dos intervalos previstos acima\n", c3);
}
