#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){

    int a[3][3], soma=0;
    float  media=0;
    srand(time(0));
    printf("Imprimindo a matriz em formato tabular...\n");
    for(int linha=0; linha < 3; linha++){
        for(int coluna=0; coluna < 3; coluna++){
            a[linha][coluna] = rand()%100;
            soma += a[linha][coluna];
            printf("%d \t",a[linha][coluna]);
        }
        printf("\n");
    }
    
    media = soma/9;
    printf("A media da matriz eh: %.2f", media*1.0);

    return 0;

}