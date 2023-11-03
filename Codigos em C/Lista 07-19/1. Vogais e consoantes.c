#include <stdio.h>

int main() {
    char letra;

    printf("Digite uma letra: ");
    scanf("%c", &letra);

switch (letra) {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    printf("A letra digitada é uma vogal.\n");
    break;
default:
  printf("A letra digitada é uma consoante.\n");
 break;
    }
printf("\n");
    return 0;
}
