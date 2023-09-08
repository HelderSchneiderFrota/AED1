#include <stdio.h>

#include <math.h>



int main(){



float rmensal,vemprestimo,nprestacoes;



    printf("Qual eh a sua renda mensal:");

scanf("%f", &rmensal);

    printf("Qual eh o valor do emprestimo:");

scanf("%f", &vemprestimo);

    printf("Qual eh quantidade de prestacoes:");

scanf("%f", &nprestacoes);



if (vemprestimo >= rmensal * 8 && nprestacoes >= rmensal * 30/100 ){

    printf("O emprestimo nao pode ser conscedido");

    }

    else{

    printf("O emprestimo pode ser concedido");



}

return 0;

printf ("\n");

}



