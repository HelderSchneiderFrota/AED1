 #include <stdio.h>

int main() {
    
int Codigo;
float quantidade, preco, A, B, C;

printf ("Seja bem vindo a PVagri\n");
printf ("\n");
printf ("Confira os precos para pulverizacoa de lavouras por tipo de pestes \n");
printf ("(Tipo 1) Largatas     =  75.00 R$ por metros quadrado \n");
printf ("(Tipo 2) Gafanhotos   =  98.00 R$ por metros quadrado \n");
printf ("(Tipo 3) Ferrugem     = 108.00 R$ por metros quadrado \n");
printf ("(Tipo 4) Todos acima  = 202.00 R$ por metros quadrado \n");
    printf("Digite o Tipo referente ao servico: ");
    scanf("%i", &Codigo);
    printf("Digite a quantidade de metros quadrado :");
    scanf ("%f", &quantidade);
    
switch (Codigo){
        case 1:
    printf ("voce escolheu %.2f metros quadrado para a pulverizacoa contra Largatas\n", quantidade);
    preco = quantidade * 75;
    printf ("O valor ficou %.2f R$\n", preco);
             if (quantidade > 500){
     preco = preco - (preco * 0.05);
     printf ("Voce ganhou um desconto então o valor ficou %.2f R$\n", preco);
             }     else {
     }
                 if (preco >50000){
         A = (preco - 50000);
         B = (A*0.15);
         C = (B- preco)*(-1);
        printf ("Mas ganhou outro desconto entao ficou %.2f R$\n", C);
     }
    break;
    case 2:
            printf ("voce escolheu %.2f metros quadrado para a pulverizacoa contra Gafanhotos\n", quantidade);
    preco = quantidade * 98;
    printf ("O valor ficou %.2f R$\n", preco);
    if (quantidade > 500){
     preco = preco - (preco * 0.05);
     printf ("Voce ganhou um desconto então o valor ficou %.2f R$\n", preco);
    }
          else {
     }
     if (preco >50000){
         A = (preco - 50000);
         B = (A*0.15);
         C = (B- preco)*(-1);
        printf ("Mas ganhou outro desconto entao ficou %.2f R$\n", C);
     }
    break;
    case 3:
           printf ("voce escolheu %.2f metros quadrado para a pulverizacoa contra Ferrugem\n", quantidade);
    preco = quantidade * 108;
    printf ("O valor ficou %.2f R$\n", preco);
    if (quantidade > 500){
     preco = preco - (preco * 0.05);
     printf ("Voce ganhou um desconto então o valor ficou %.2f R$\n", preco);
    }
          else {
     }
     if (preco >50000){
         A = (preco - 50000);
         B = (A*0.15);
         C = (B- preco)*(-1);
        printf ("Mas ganhou outro desconto entao ficou %.2f R$\n", C);
     }
    break;
case 4:
      printf ("voce escolheu %.2f metros quadrado para a pulverizacoa contra Todos as pestes\n", quantidade);
    preco = quantidade * 202;
    printf ("O valor ficou %.2f R$\n", preco);
    if (quantidade > 500){
preco = preco - (preco * 0.05);
     printf ("Voce ganhou um desconto então o valor ficou %.2f R$\n", preco);
    }
     else {
     }
     if (preco >50000){
         A = (preco - 50000);
         B = (A*0.15);
         C = (B- preco)*(-1);
        printf ("Mas ganhou outro desconto entao ficou %.2f R$\n", C);
     }
 break;
 default:
 printf("Valores invalidos");
    }
printf("\n");
    return 0;
}