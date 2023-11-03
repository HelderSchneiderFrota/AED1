#include <stdio.h>
#include <math.h>

int main (){

float a,b;

    printf("Vamos calcular a area do circulo??!!!\n");

    printf ("Digite o valor do raio: \n");
scanf ("%f", &a);

if (a>0){
b = 3.14* a * a;
    printf ("O valor da area do circulo eh :%.2f", b);
}
else{

    printf ("O raio é negativo");
}

printf ("\n");

return 0;
}
