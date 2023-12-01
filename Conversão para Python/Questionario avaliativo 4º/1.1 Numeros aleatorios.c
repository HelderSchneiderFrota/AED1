#include <stdio.h>

#include <stdlib.h>

#include <time.h>





int main(){



int Vetor[10], numero,a=0,b=0;

float media =0;



srand(time(0));



for (int i=0; i<10; i++){

    numero=  rand()%40;

    Vetor[i]= numero;

    printf("O %d posicao do vetor foi gerado com o valor: %d \n", i, numero);

    media += numero;

}

media /= 10;

printf("A media dos numeros gerados foi: %.2f \n", media);

for (int i=0; i<10; i++){

    if(Vetor[i] >= media){

        a++;

    }

    else{

        b++;

    }

}

    printf("A quantidade de numeros maiores que a media eh: %d \n", a);

    printf("A quantidade de numeros menores que a media eh: %d \n", b);



return 0;

}