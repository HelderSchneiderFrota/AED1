#include <stdio.h>
#include <math.h>

int main (){

float valor, a;
    printf ("Digite o valor do produto da etiqueta:");
scanf("%f", & valor);
    printf ("Qual a forma de pagamento? \n");
    printf ("Digite 1 para pix \n");
    printf ("Digite 2 para cartao de debito \n");
    printf ("Digite 3 para a vista cartao de cretido \n");
    printf ("Digite 4 para parcelado cartao de cretido \n");
scanf ("%f", &a);

if (a==1){
    printf ("Voce escolheu pix recebeu 10 porcento de desconto, o valor final ficou: %.2f \n", valor - valor * 10/100);
}
else if (a==2){
     printf ("Voce escolheu cartao de debito  recebeu 5 porcento de desconto, o valor final ficou: %.2f \n", valor - valor * 5/100);
}
else if (a==3){
     printf ("Voce escolheu vista cartao de cretido recebeu 2 porcento de desconto, o valor final ficou: %.2f \n", valor - valor * 2/100);
}
else if (a==4){
     printf ("Voce escolheu parcelado, o valor final ficou: %.2f \n", valor);

}

else{
    printf ("opcao invalida");
}

printf ("\n");

return 0;
}
