#include <stdio.h>
#include <ctype.h>

void minhaFuncao(char vetor[]){
    int a=0, b=0;
    for (int i = 0; i < 29; i++){
        if(isdigit(vetor[i]) == 1){
            a++;
        }
        if((isalpha(vetor[i]) == 1) || (isalpha(vetor[i]) == 2)){
            b++;
        }

    }
    printf("A palavra tem um total de %d letras e %d numeros", b, a);

}

int main(){

char vetor[30];
    	printf("Digite uma palavra: ");
        gets(vetor);
minhaFuncao(vetor);
return 0;
}