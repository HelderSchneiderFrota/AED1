#include <stdio.h>

int main(){

int contador=1;
float tabuada, n ;
printf("Digite um valor : \n");
        scanf("%f", &n);
do{
        tabuada = contador * n;
printf("%.0i X %.0f = %.0f\n", contador, n, tabuada);
 contador++;
 }while (contador <= 10);

return 0;

}