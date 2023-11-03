#include <stdio.h>

int main(){



int n = 0, soma = 0, soma2, contagem = 0;

float media;



    do{

        printf("Digite um numero: ");

        scanf("%d", &n);

            if ( n % 2 != 0 && n >0){

            contagem++;

            soma += n;

            media= soma/contagem;

            }



    }while (n != -2);



printf("a soma dos  impares numeros digitados eh %i \n",soma );

printf("foram digitados %i numeros impares \n",contagem );

printf("a media eh %f", media);



return 0;

}

