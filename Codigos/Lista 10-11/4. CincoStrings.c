#include <stdio.h>
#include <ctype.h>

int main(){

int i=1;
char string[5][10];

    for(int linha=0; linha < 5; linha++){
        printf("Digite sua %d string :", i);
        gets(string);
        i++;
    }

    for(int linha=0; linha < 5; linha++){
        for(int coluna=0; coluna < 10; coluna++){
        printf("%c", string[linha][coluna]);
    }
    printf("\n");
    }
        



    return 0;
}