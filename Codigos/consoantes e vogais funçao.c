#include <stdio.h>

void funcao(char LETRA){
    
switch (LETRA) {
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
}
int main() {
    char letra;

    printf("Digite uma letra: ");
    scanf("%c", &letra);
    funcao(letra);

printf("\n");
    return 0;
}

