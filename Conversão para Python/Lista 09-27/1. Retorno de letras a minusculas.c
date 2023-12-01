#include <stdio.h>

int minhaFuncao (char vetor[]){
    int a=0, b=0;
    for (int i = 0; i < 29; i++){
        b = vetor[i];// convertendo para inteiro
        if(b == 97){// 97 é equivalente ao a na tabela assci
            a++;
        }    
    }
   return printf("Tem %d letras a na palavra", a);

}

int main(){

char vetor[30];
    	printf("Digite uma palavra: ");
        gets(vetor);
minhaFuncao(vetor);
return 0;
}