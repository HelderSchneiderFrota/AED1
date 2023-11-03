#include <stdio.h>

int main(){

int i=1,a,n;

while( i <= 10  ){
printf ("Informe um numero: \n");
scanf ("%i", &a);
if (a < 0){
    n++;
}
i=i+1;
}
printf("a quantidade de negativos  eh: %i \n", n);
return 0;
}
