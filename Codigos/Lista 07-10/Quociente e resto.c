#include <stdio.h>
#include <math.h>

int main (){

int a,b,c,d;

    printf ("Digite um numero: \n");
scanf ("%d", &a);

    printf ("Digite um numero: \n");
scanf ("%d", &b);

c = a/b;
d = a%b;

printf ("seu quociente eh %.1d e seu resto eh %.1d", c,d);


printf ("\n");

return 0;
}

