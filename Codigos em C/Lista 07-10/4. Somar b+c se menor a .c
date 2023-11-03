#include <stdio.h>
#include <math.h>

int main (){

float a,b,c,d;

     printf ("Digite um numero: \n");
scanf ("%f", &a);
    printf ("Digite um numero: \n");
scanf ("%f", &b);
    printf ("Digite um numero: \n");
scanf ("%f", &c);

if((c+b) <a){
d=b+c;
    printf ("a soma do primeiro numero com o segundo eh menor que o primeiro %.1f", d);

}
else{
    printf ("coloque outro numero");
}

printf ("\n");
return 0;
}
