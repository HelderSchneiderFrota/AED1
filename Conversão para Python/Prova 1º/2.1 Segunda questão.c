#include <stdio.h>



int main(){



int i;

float soma=0;



printf("\t Bem vindo ao Chapa quente\n");

printf("Escolha seu produto!!!\n");

printf("10 \ Baguncinha      \ R$21.70\n");

printf("20 \ Bagunca caseiro \ R$28.90\n");

printf("30 \ X-salada        \ R$18.20\n");

printf("40 \ Bauru simples   \ R$15.99\n");

printf("50 \ refri lata      \ R$9\n");

printf("60 \ agua mineral    \ R$6\n");

printf("Digite o codigo do produto: ");

scanf("%d", &i);



while(i!=-2){

   switch(i){

   case 10:

       soma+= 21.70;

       printf("Adicionado Baguncinha ao carrinho!");

       printf("Para finalizar digite -2\nDigite o codigo do produto: ");

       break;

   case 20:

       soma+= 28.90;

       printf("\nAdicionado Bagunca caseiro ao carrinho!");

       printf("Para finalizar digite -2\nDigite o codigo do produto: ");

       break;

   case 30:

       soma+= 18.20;

       printf("\nAdicionado x-salada ao carrinho!");

       printf("Para finalizar digite -2\nDigite o codigo do produto: ");

       break;

   case 40:

       soma+= 15.90;

       printf("\nAdicionado bauru simples ao carrinho!");

       printf("Para finalizar digite -2\nDigite o codigo do produto: ");

       break;

   case 50:

       soma+= 9;

       printf("\nAdicionado refri lata ao carrinho!");

       printf("Para finalizar digite -2\nDigite o codigo do produto: ");

       break;

   case 60:

       soma+= 6;

       printf("\nAdicionado agua mineral ao carrinho!");

       printf("Para finalizar digite -2\nDigite o codigo do produto: ");

       break;

   default:

    printf("\nCodigo invalido\nPara finalizar digite -2\n");

    printf("Total dos pedidos: %.2f", soma);

    break;

   }

    scanf("%d", &i);

}



printf("Total dos pedidos: %.2f", soma);



return 0;

}
