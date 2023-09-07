#include <stdio.h>



void funcao(int A, int B){
int i;
    for(A; i<B; i++){
        if(i % 2 != 0){
        printf("%d", i);
        }
    }
}

int main(){
    int a,b;
    printf("numero 1 do intervalo: ");
    scanf("%i", &a);
    printf("numero 2 do intervalo: ");
    scanf("%i", &b);
    funcao(a,b);

    return 0;
}
