 #include <stdio.h>
#include <string.h>
int main() {

int codigo, quantidade;
char A[10];
float preco;

printf ("\n");
printf ("            Laboratorio: \n");
printf ("(501) Hemograma completo = 28.97 R$ \n");
printf ("(502) Colesterol         = 22.87 R$ \n");
printf ("(503) Creatinina e ureia = 23.74 R$ \n");
printf ("(504) Glicemia           = 19.74 R$ \n");
printf ("(505) Triglicerideos     = 26.22 R$ \n");
printf ("(506) Transaminases      = 33.47 R$ \n");
printf ("(507) Acido urico        = 29.99 R$ \n");

    printf("Digite o Codigo referente ao exame: \n");
    scanf("%i", &codigo);
    printf("Vc possui planos digite S para sim e N para nao: \n");
    scanf ("%s", &A);

switch (codigo) {
    case 501:
    if (strcmp (A, "N") == 0){
        printf ("voce escolheu Hemograma completo 1\n");
        preco = 28.97;
        printf ("O valor total eh %.2f R$", preco);
    }
    else{
    printf ("voce escolheu Hemograma completo 2\n");
    preco = 28.97-(28.97 * 15/100);
    printf ("O valor total eh %.2f R$", preco);

    return 1;
    }
    break;

    case 502:
        if (strcmp (A, "N") == 0){
        printf ("voce escolheu Colesterol\n");
    preco = 22.87;
    printf ("O valor total eh %.2f R$", preco);
    }
    else{
    printf ("voce escolheu Colesterol 2\n");
    preco = 22.87-(22.87 * 15/100);
    printf ("O valor total eh %.2f R$", preco);
    return 1;
    }
    break;

    case 503:
        if (strcmp (A, "N") == 0){
        printf ("voce escolheu Creatinina e ureia\n");
    preco =  23.74;
    printf ("O valor total eh %.2f R$", preco);
     }
    else{
             printf ("voce escolheu Creatinina e ureia 2\n");
    preco = 23.74-  (23.74 * 15/100);
    printf ("O valor total eh %.2f R$", preco);
    return 1;
    }
    break;
    case 504:
        if (strcmp (A, "N") == 0){
        printf ("voce escolheu Glicemia\n");
    preco =  19.74;
    printf ("O valor total eh %.2f R$", preco);
         }
    else{
             printf ("voce escolheu Glicemia 2\n");
    preco = 19.74- (19.74 * 15/100);
    printf ("O valor total eh %.2f R$", preco);
    return 1;
    }
    break;
    case 505:
        if (strcmp (A, "N") == 0){
        printf ("voce escolheu Triglicerideos\n");
    preco =  26.22;
    printf ("O valor total eh %.2f R$", preco);
             }
    else{
             printf ("voce escolheu Triglicerideos 2\n");
    preco = 26.22-(26.22 * 15/100);
    printf ("+ (O valor total eh %.2f R$", preco);
    return 1;
    }
    break;
    case 506:
        if (strcmp (A, "N") == 0){
        printf ("voce escolheu Transaminases\n");
    preco =  33.47;
    printf ("O valor total eh %.2f R$", preco);
     }
    else{
             printf ("voce escolheu Transaminases 2\n");
    preco = 33.47-(33.47 * 15/100);
    printf ("O valor total eh %.2f R$", preco);
    return 1;
    }
    break;
     case 507:
         if (strcmp (A, "N") == 0){
        printf ("voce escolheu acido urico\n");
    preco =  29.99;
    printf ("O valor total eh %.2f R$", preco);
     }
    else{
             printf ("voce escolheu acido urico 2\n");
    preco =  29.99- (29.99 * 15/100);
    printf ("O valor total eh %.2f R$", preco);
    return 1;
    }
    break;
default:
  printf("Codigo invalido.\n");
 break;
    }
printf("\n");
    return 0;
}
