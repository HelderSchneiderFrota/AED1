#include <stdio.h>

int main(){

int contador=0;
float valor, n, media, soma = 0;

printf("Digite um valor: "); 
scanf("%f", &valor);

while (valor != -1){

contador++;

soma = soma + valor; 
printf("Digite um valor: ");
scanf("%f", &valor);

}
media = soma/contador;
printf("A media eh: %.2f e o total da folha eh %.2f", media, soma);

return 0;

}