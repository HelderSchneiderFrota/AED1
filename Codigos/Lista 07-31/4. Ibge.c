#include <stdio.h>

int main() {
    char sexo, olhos, cabelo;
    int idade, contador = 0, p, HLC = 0, MAP = 0;
    float media, maior = 0, soma = 0;

    printf("Quantas pessoas na cidade: ");
    scanf("%i", &p);
    printf("\n");

    while (1) {
        if (contador == p) {
            break;
        }
        contador++;
        printf("%iª pessoa\n", contador);
        printf("Qual seu sexo? M para Masculino e F para feminino: \n");
        fflush(stdin);
        scanf(" %c", &sexo);
        printf("Qual a cor dos seus olhos? A para Azul, C para castanho e V para verde: \n");
        fflush(stdin);
        scanf(" %c", &olhos);
        printf("Qual a cor do seu cabelo? L para Louro, C para castanho, R para ruivo e P para preto: \n");
        fflush(stdin);
        scanf(" %c", &cabelo);
        printf("Qual sua idade: ");
        scanf("%i", &idade);

        if ((sexo == 'M') && (olhos == 'C') && (cabelo == 'L') && (idade >= 20 && idade <= 25)) {
            HLC = HLC + 1;
        } 
 
        if ((sexo == 'F') && (olhos == 'A') && (cabelo == 'P') && (idade >= 34 && idade <= 41)) {
            MAP = MAP + 1;
            
        }
        soma += idade;
        if (idade > maior) {
            maior = idade;
        }
    }

    if (contador > 0) {
        media = soma / contador;
    }

    printf("\nA maior idade eh: %.1f \n", maior);
    printf("A media das idade eh: %.2f \n", media);
    printf("Homens Loiros e olhos castanhos na idade entre 20 a 25 anos: %i \n", HLC);
    printf("Mulheres com olhos Azuis e cabelo preto com idade entre 34 a 41 anos: %i \n", MAP);

    return 0;
}

