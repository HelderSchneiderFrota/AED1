#include <stdio.h>
#include <math.h>

int main (){

float A,B,c;

printf("Vamos calular seu IMC?");
printf ("\n");

printf("Qual sua altura:");
scanf("%f" , &A);

printf("Qual seu peso:");
scanf("%f" , &B);

c =  B /( A * A );

printf ("Seu IMC eh: %f \n", c);

if (c <= 17 ){

printf ("Muito baixo do peso");
}
else if(c <= 18.49){

printf ("Abaixo do peso");

}

else if(c <= 24.49){

printf ("peso normal");
}

else if(c <=29.99) {
    printf ("acima do peso peso");
}
else if(c <= 34.99) {
    printf ("Obesidade 1");
}
else if(c <= 39.99) {
    printf ("obesidade 2");
}

else {

printf ("Obesidade morbida");

}










return 0;
}
