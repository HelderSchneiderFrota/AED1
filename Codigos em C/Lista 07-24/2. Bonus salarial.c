#include <stdio.h>
int main() {
    
float salario, bonus,a,b;    
int anos, c;
printf("Quals eu salario: \n");   
scanf ("%f", &salario);
printf("Quantos anos vc ja trabalhou na empresa: \n");
scanf ("%i", &anos);
a = salario*25/100;
b = salario*10/100;
anos >= 5 ? printf ("Seu bonus é de :%.2f \n", a) : printf ("Seu bonus é de :%.2f \n", b) ;

printf("\n");
return 0;
}