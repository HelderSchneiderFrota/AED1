#include <stdio.h>



int main(){



int i, dobro;



printf("Digite um numero, para finalizar digite 0 ou menores que 0: ");

scanf("%d", &i);



while(i>0){





    if(i % 3 == 0){

       printf("o dobro do numero digitado eh :%d \n", i*2);

    }

    else{

       printf("O numero digitado eh: %d \n", i);



    }

printf("Digite um numero: ");

scanf("%d", &i);

}

printf("Progama finalizado");

return 0;

}

