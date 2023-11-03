#include <stdio.h>

int main() {
    
int A;

    printf("Digite um numero de 1 a 12: ");
    scanf("%i", &A);

switch (A) {
    case 1 :
    if (A=1){
        printf("Janeiro");
    }
    break;
    case 2 :
    if (A=2){
        printf("Fevereiro");
    }
    break;
    case 3 :
     if (A=3){
        printf("Marco");
    }
    break;
    case 4 :
     if (A=4){
        printf("abril");
    }
    break;
    case 5 :
     if (A=5){
        printf("Maio");
    }
    break;
    case 6 :
     if (A=6){
        printf("Junho");
    }
    break;
    case 7 : 
     if (A=7){
        printf("Julho");
    }
    break;
    case 8 :
     if (A=8){
        printf("Agosto");
    }
    break;
    case 9 : 
    if (A=9){
        printf("Setembro");
    }
    break;
    case 10:
     if (A=10){
        printf("Outubro");
    }
    break;
    case 11: 
    if (A=11){
        printf("Novembro");
    }
    break;
    case 12:
    if (A=12){
        printf("Dezembro");
    }
    break;
default:
  printf("Numero invalido\n");
 break;
    }
printf("\n");
    return 0;
}
