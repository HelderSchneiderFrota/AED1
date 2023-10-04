// era pra ser primos, mas eu fiz os impares kk
#include <stdio.h>



int intervalo(int A, int B){



    for(int i=A; B>=i; i++){

        if(i%2!=0){ // precisaria mudar essa condiçõa aqui

            printf("%d \n", i);

        }

    }

}



int main(){



    int a,b;



    printf("Digite o primeiro numero do intervalo: ");

    scanf("%d", &a);

    printf("Digite o segundo numero do intervalo: ");

    scanf("%d", &b);

    intervalo(a,b);



return 0;

}