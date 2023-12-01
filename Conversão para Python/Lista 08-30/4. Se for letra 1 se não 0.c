#include <stdio.h>

int funcao(char LETRA){
    
switch (LETRA) {
    case 'a':
    case 'b':
    case 'c':
    case 'd':
    case 'e':
    case 'f':
    case 'g':
    case 'h':
    case 'i':
    case 'j':
    case 'k':
    case 'l':
    case 'm':
    case 'n':
    case 'o':
    case 'p':
    case 'q':
    case 'r':
    case 's':
    case 't':
    case 'u':
    case 'v':
    case 'w':
    case 'x':
    case 'y':
    case 'z':
   return printf("1");
    break;
default:
  return printf("0");
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

