#include <stdio.h>

float saldoConta,  valorSaque=0;
int senhaTentativa, tentativas=0, senhaCadastro;

float depositar(float n){
    saldoConta += n;
}

float extrato(){
    do{
        printf("Digite a sua senha: ");
        scanf("%d", &senhaTentativa);
        tentativas++;
            if (senhaCadastro == senhaTentativa){
                printf("O saldo eh: %f", saldoConta);
            }
                else if ((senhaCadastro != senhaTentativa)&&(tentativas==3)){
                    printf("Senha invalida, sua conta foi bloqueada");
                    return 0;
                }
                    else{
                        printf("Senha invalida\n");
                }
}while (senhaCadastro != senhaTentativa);
}
float saque(){
            do{
                printf("Digite a sua senha: ");
                scanf("%d", &senhaTentativa);
                tentativas++;
                if (senhaCadastro == senhaTentativa){
                    printf("Digite o valor a ser sacado: ");
                    scanf("%f", &valorSaque);

                    if (valorSaque <= saldoConta){
                        saldoConta -= valorSaque;
                        printf("%f", saldoConta);
                    }
                    else{
                        printf("Saldo insuficiente");
                    }
                }
                else if ((senhaCadastro != senhaTentativa)&&(tentativas==3)){
                    printf("Senha invalida, sua conta foi bloqueada");
                    return 0;
                }
                else{
                    printf("Senha invalida\n");
                }
            }while (senhaCadastro != senhaTentativa);
}


int main (){
    int operacao,  flagSenha=0;
    float valor=0;

    printf("Cadastre uma senha: ");
    scanf("%d", &senhaCadastro);

    printf("Digite 1 para DEPOSITAR\n");
    printf("Digite 2 para EXTRATO\n");
    printf("Digite 3 para SACAR\n");
    scanf("%d", &operacao);

    while (operacao != -1){
        flagSenha=0;
        tentativas=0;

        if (operacao == 1){
            printf("Digite o valor do deposito: ");
            scanf("%f", &valor);
            depositar(valor);
            printf("%f", saldoConta);
        }
        else if (operacao == 2)
        {
            extrato();
        }
        else if (operacao == 3){
            saque();
        }
        else
        {
            printf("operacao invalida\n");
        }
        printf("\nRepita a operacao: ");
        scanf("%d", &operacao);
    }
}
