#include <stdio.h>

#include <math.h>



int main(){



int A,B,C,SOMA,D,E;

    printf("Digite um valor de numero inteiro: \n");

scanf("%d", &A);

    printf("Digite um segundo valor de numero inteiro: \n");

scanf("%d", &B);

    printf("Digite um terceiro valor de numero inteiro: \n");

scanf("%d", &C);



if ( A < B && C ){

D = A;



    if ( B < C ) {

        D = B;

        }

        else{

            E = C;

        }

    }

else if ( B < A && C ){

D =  B;

        if( A < C) {

            E = A;

        }

            else{

                E = C;

            }

    }

else if ( C < A && B ){

D = C;

        if( A < B ) {

            E = A;

        }

            else{

                E = B;

        }

    }

else{

    printf ("Favor Digite um numeros diferentes entre si\n");

}

SOMA = (D + E);

if (SOMA % 2 != 0){

    printf("Ja que o numero eh impar, foi somado os dois menores e multiplicado pelo seu triplo, entao: %d \n",SOMA * 3);

}

else{

    printf("Nao eh um numero impar, entao somente foi somado os dois menores valores, %d",SOMA);

}



return 0;

printf ("\n");

}