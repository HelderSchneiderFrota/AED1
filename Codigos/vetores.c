#include <stdio.h>
#define ever;;

int main(){

int i=0, posicao=0, tam=0;


printf("Digita o tamanho: ");
scanf("%d", &tam);


double notas[tam], maior=0, media=0;


for(ever){

printf("digita a %d nota: ",i+1);
scanf("%lf", &notas[i]);
media += notas[i];
    if(notas[i]> maior){
        posicao = i;
        maior = notas[i];
    }

i++;

    if(i==tam){
            media = media/tam;
        break;
    }
}

printf("a maior nota eh:%.1lf e a posicao eh: %d e a media eh: %.1lf",maior, posicao, media);

return 0;
}
