#include <stdio.h>
#include <string.h>
int main() {

int codigo, quantidade;
char A;
float preco;

printf ("\n");
printf ("            Atacadista Frota: \n");
printf ("(79001) Sabonete              = 02.10  R$ ou 01.95  R$ para 3 ou mais \n");
printf ("(79002) Pao de forma          = 08.39  R$ ou 08.20  R$ para 2 ou mais \n");
printf ("(79003) Macarrao T. Espaguete = 04.21  R$ ou 03.99  R$ para 4 ou mais \n");
printf ("(79004) Oleo de soja          = 04.99  R$ ou 04.80  R$ para 3 ou mais \n");
printf ("(79005) Arroz 5kg             = 21.00  R$ ou 19.85  R$ para 2 ou mais \n");
printf ("(79006) Feijao 1Kg            = 05.99  R$ ou 05.55  R$ para 5 ou mais \n");
printf ("(79007) Milho de pipoca       = 02.15  R$ ou 01.99  R$ para 7 ou mais \n");

    printf("Vc possui o cartão da loja? Digite S para Sim e N para Nao: \n");
    fflush(stdin);
    scanf ("%s", &A);
    switch(A){
        case 'S':
             while(1){
                printf("Digite o Codigo referente ao produto \n");
                scanf("%i", &codigo);
                  if (codigo < 0) {
                    break;
                    }
printf("Qual a quantidade: \n");
scanf("%i", &quantidade);
if (codigo == 79001) {
        printf ("Sabonete * %i\n", quantidade);
        preco += 1.95 * quantidade;
}
else if (codigo == 79002){
        printf ("Pao de forma * %i\n", quantidade);
        preco += 8.20 * quantidade;
}
else if (codigo == 79003){
        printf ("Macarrao T. Espaguete * %i\n", quantidade);
        preco += 3.99 * quantidade;
}
else if (codigo == 79004){
        printf ("Oleo de soja * %i\n", quantidade);
        preco += 4.80 * quantidade;
}
else if (codigo == 79005){
        printf ("Arroz 5kg * %i\n", quantidade);
        preco += 19.85 * quantidade;
}
else if (codigo == 79006){
        printf ("Feijao 1Kg * %i\n", quantidade);
        preco += 5.55 * quantidade;
}
else if (codigo == 79007){
        printf ("Milho de pipoca * %i\n", quantidade);
        preco += 1.99 * quantidade;
}
    }
    break;
    case 'N':
             while(1){
                printf("Digite o Codigo referente ao produto \n");
                scanf("%i", &codigo);
                  if (codigo < 0) {
                    break;
                    }
printf("Qual a quantidade: \n");
scanf("%i", &quantidade);
if (codigo == 79001) {
    if(quantidade >= 3){
        printf ("Sabonete * %i\n", quantidade);
        preco += 1.95 * quantidade;
    }
    else{
    printf ("Sabonete * %i\n", quantidade);
        preco += 2.10 * quantidade;
    }
}
else if (codigo == 79002){
    if (quantidade>=2){
        printf ("Pao de forma * %i\n", quantidade);
        preco += 8.20 * quantidade;
    }
    else{
        printf ("Pao de forma * %i\n", quantidade);
        preco += 8.39 * quantidade;
    }
}
else if (codigo == 79003){
    if(quantidade>=4){
        printf ("Macarrao T. Espaguete * %i\n", quantidade);
        preco += 3.99 * quantidade;
    }
    else{
        printf ("Macarrao T. Espaguete * %i\n", quantidade);
        preco += 4.21 * quantidade;
    }
}
else if (codigo == 79004){
    if(quantidade>=3){
        printf ("Oleo de soja * %i\n", quantidade);
        preco += 4.80 * quantidade;
    }
    else{
        printf ("Oleo de soja * %i\n", quantidade);
        preco += 4.99 * quantidade;
    }
}
else if (codigo == 79005){
    if(quantidade>= 2){
        printf ("Arroz 5kg * %i\n", quantidade);
        preco += 19.85 * quantidade;
    }
    else{
        printf ("Arroz 5kg * %i\n", quantidade);
        preco += 19.85 * quantidade;
    }
}
else if (codigo == 79006){
    if(quantidade>=5){
        printf ("Feijao 1Kg * %i\n", quantidade);
        preco += 5.55 * quantidade;
    }
    else{
         printf ("Feijao 1Kg * %i\n", quantidade);
        preco += 5.99 * quantidade;
    }
}
else if (codigo == 79007){
    if(quantidade>=7){
        printf ("Milho de pipoca * %i\n", quantidade);
        preco += 1.99 * quantidade;
}
else{
    printf ("Milho de pipoca * %i\n", quantidade);
        preco += 2.15 * quantidade;
}
}
}
    break;
    default:
    printf("Caractere invalido!");
    break;
}
printf("O valor toral eh: %.2f\n", preco);
    return 0;
}