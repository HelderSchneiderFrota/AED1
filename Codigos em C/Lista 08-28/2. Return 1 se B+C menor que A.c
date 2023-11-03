#include <stdio.h>

int a,b,c;

int funcao(int A, int B, int C){
    if (B+C < A){
    return printf("1");
    }
    else{
    return printf("0"); ;
    }
}

int main(){
    printf("Digite o primeiro numero: \n");
    scanf("%d", &a);
    printf("Digite o segundo numero: \n");
    scanf("%d", &b);
    printf("Digite o terceiro numero: \n");
    scanf("%d", &c);
    funcao(a,b,c);
}