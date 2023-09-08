#include <stdio.h>

int main(){

int contador=0;
float menor, maior, media, soma= 0, mediaT ;

while (1){


printf("Digite um valor: "); 
scanf("%f", &media);

 if (media < 0) {
            break;
        }

        contador++;

        if (contador == 1) {
            maior = media;
            menor = media;
        } else {
            if (media > maior) {
                maior = media;
            }

            if (media < menor) {
                menor = media;
            }
        }

        soma += media;
    }


    if (contador > 0) {
         mediaT = soma / contador;

printf("A media eh: %.2f a menor nota eh %.2f a maior eh: %.2f", mediaT,menor, maior );

return 0;

}
}