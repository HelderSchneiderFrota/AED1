#include <stdio.h>

int main(){

int i=1,m=0, a;
float n;
while( i <= 5  ){
printf ("Informe um numero: \n");
scanf ("%i", &a);
if (a % 2 != 0){
    n = n + a;
    m++;
    
}
i=i+1;
}
n = n/m;
printf("a a media dos impares eh: %.1f \n",n );
return 0;
}
