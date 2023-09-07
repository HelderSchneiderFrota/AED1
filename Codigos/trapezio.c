#include <stdio.h>
#include <math.h>

int main (){

float A,b,B,C;

printf("Vamos calcular a aerea de um trapezio?");
printf ("\n");
printf ("Digite a base menor: ");
scanf ("%f", &b);

printf ("Digite a base maior: ");
scanf ("%f", &B);

printf ("Digite a altura: ");
scanf ("%f", &C);

A =((B+b)*C/2);

printf ("O Area ficou:  %.1f", A);
printf ("\n");
return 0;
}
