#include <stdio.h>
#include <ctype.h>

int main(){
    char vetor[30];
    int a=0, i;

    printf("Digite a palavra em minusculo: ");
    gets(vetor);
    for(i=0; i<29; i++){
        if(isalpha(vetor[i]) == 2){ 
            a++;
            //printf("%d", a);
        }
    }
    printf("Convertendo a palavra ficou:");
   for(i=0; i<a; i++){
    vetor[i] = toupper(vetor[i]);
    printf("%c",vetor[i]);
   }

}
