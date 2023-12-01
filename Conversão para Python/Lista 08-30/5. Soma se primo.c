#include <stdio.h>
int funcao(int A){
    return printf("1");
}
int impar(int C, int D){
    int soma;
    soma = C+D;
    if(soma % 2 != 0){
        funcao(soma);
    }
    else{
        return printf("0");
    }
}
int main() {
    int a,b;

    printf("Digite um numero: ");
    scanf("%d", &a);
    printf("Digite um numero: ");
    scanf("%d", &b);
    impar(a,b);
printf("\n");
    return 0;
}

