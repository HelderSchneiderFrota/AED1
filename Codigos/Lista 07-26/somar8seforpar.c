#include <stdio.h>

int main(){

int i=1,a,n;

while( i <= 8  ){
printf ("Informe um numero: \n");
scanf ("%i", &a);
if (a % 2 == 0){
    n = n + a;
}
i=i+1;
}
printf("a soma dos pares eh: %i \n", n);
return 0;
}
