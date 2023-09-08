#include <stdio.h>
#include <math.h>


int main (){

int A,B,C;
float peso1, peso2, peso3, mediaP;

printf("Primeira nota: \n");
scanf ("%i", &A);

printf("Segunda nota: \n");
scanf("%i" , &B);

printf("Terceira nota: \n");
scanf("%i" , &C);


if (A % 2 == 0){

peso1 = 5.5;

}
else {
peso1 = 4.5;

}
if (B % 2 == 0){

peso2 = 5.5;

}
else {
peso2 = 4.5;

}
if (C % 2 == 0){

peso3 = 5.5;

}
else {
peso3 = 4.5;

}

mediaP = (A * peso1 ) + (B * peso2) + (C * peso3);
mediaP = ( mediaP / (peso1 + peso2 + peso3));

printf ("SUA MEDIA eh: %f", mediaP);

return 0;



}
