 #include <stdio.h>

int main() {
    
int Codigo,quantidade;
float preco;

printf ("Seja bem vindo a lanchonete\n");
printf ("                               CHAPA QUENTE \n");
printf ("\n");
printf ("            Cardapio: \n");
printf ("(200) Baguncinha        = 21.80 R$ \n");
printf ("(201) Bagunca caseiro   = 28.90 R$ \n");
printf ("(202) X salada          = 18.20 R$ \n");
printf ("(203) Bauru simples     = 15.90 R$ \n");
printf ("(204) Refrigerante lata = 06.00 R$ \n");
printf ("(205) Agua mineral      = 04.00 R$ \n");


    printf("Digite o Codigo referente ao lanche: ");
    scanf("%i", &Codigo);
    printf("Digite a quantidade:");
    scanf ("%i", &quantidade);
    
switch (Codigo) {
    case 200:
    printf ("voce escolheu %i Baguncinha\n", quantidade);
    preco = quantidade * 21.80;
    printf ("O valor total é %.2f R$", preco);
    break;
    case 201:
        printf ("voce escolheu %i Bagunca caseiro\n", quantidade);
    preco = quantidade * 28.90;
    printf ("O valor total é %.2f R$", preco);
    break;
    case 202:
        printf ("voce escolheu %i X salada\n", quantidade);
    preco = quantidade * 18.20;
    printf ("O valor total é %.2f R$", preco);
    break;
    case 203:
        printf ("voce escolheu %i Bauru simples\n", quantidade);
    preco = quantidade * 15.90;
    printf ("O valor total é %.2f R$", preco);
    break;
    case 204:
        printf ("voce escolheu %i Refrigerante lata\n", quantidade);
    preco = quantidade * 6;
    printf ("O valor total é %.2f R$", preco);
    break;
    case 205:
        printf ("voce escolheu %i Agua mineral\n", quantidade);
    preco = quantidade * 4;
    printf ("O valor total é %.2f R$", preco);
    break;
default:
  printf("A letra digitada é uma consoante.\n");
 break;
    }
printf("\n");
    return 0;
}
