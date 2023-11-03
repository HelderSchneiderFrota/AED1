#include <stdio.h>

int main()
{
   int i;
   char a;
   float somatotal, v, D, P, C;
   
   for (i=1;i<=10; i++){
printf ("Qual a forma de pagamento? C - cartao; P - pix ; D - dinheiro: ");
fflush (stdin);
scanf("%s", &a);

switch(a){

case 'D':
 printf("Qual o valor %iº valor: ", i);
 fflush (stdin);
 scanf("%f", &v);
 somatotal+=v;
 D+=v;
break;
 case'P':
 printf("Qual o valor %iº valor: ", i);
 fflush (stdin);
 scanf("%f", &v);
 somatotal+=v;
 P+=v;
break;
case 'C':
 printf("Qual o valor %iº valor: ", i);
 fflush (stdin);
 scanf("%f", &v);
 somatotal+=v;
 C+=v;
break;

}
fflush (stdin);
}
printf("a soma de todas transacoes eh: %.1f \n",somatotal);
printf("Compras pagas no cartao: %.1f \n", C);
printf("Compras pagas no PIX: %.1f \n", P);
printf("Compras pagas em dinheiro em especie: %.1f \n", D);

    return 0;
}