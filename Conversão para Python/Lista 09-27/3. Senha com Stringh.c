#include <stdio.h>
#include <string.h>

int main(){

int i=3;
int senha[4], verificasenha[4];
char vetor[30], verificavetor[30];
    	printf("Digite seu nome: ");
        gets(vetor);
        printf("Digite sua senha: ");
        gets(senha);

    do{
        printf("Para realizar o login digite seu nome: \n");
        gets(verificavetor);
        if(strcmp(verificavetor, vetor) == 0){
            printf("Nome correto\n");
            printf("Digite sua senha: ");
            gets(verificasenha);
                if (strcmp(verificasenha,senha) == 0){
                    printf("Senha correta \n");
                    return 0;
                }
                else{
                    printf("senha errada tente novamente\n");
                    i--;
                }
        }
        else{
            printf("Nome errado, tente novamente\n");
            i--;
        }
    }while(i != 0);


return 0;
}