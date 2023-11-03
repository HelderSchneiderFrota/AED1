#include <stdio.h>

float saldoConta;
int senhaTentativa, tentativas=0, senhaCadastro;

float depositar(float valorDeposito){
    saldoConta = saldoConta + valorDeposito;
}
float extrato( n){
    if(n==1){
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
}


int main ()
{
    int operacao,  flagSenha=0;
    double valor=0, valorSaque=0;

    printf("Cadastre uma senha: ");
    scanf("%d", &senhaCadastro);

    printf("Digite 1 para DEPOSITAR\n");
    printf("Digite 2 para EXTRATO\n");
    printf("Digite 3 para SACAR\n");
    scanf("%d", &operacao);

    while (operacao != -1)
    {
        flagSenha=0;
        tentativas=0;

        if (operacao == 1){
            printf("Digite o valor do deposito: ");
            scanf("%f", &valor);
            depositar(valor);

        }
        else if (operacao == 2)
        {
            extrato(1);
            printf("%f", extrato);

        }
        else if (operacao == 3)
        {

            do
            {
                printf("Digite a sua senha: ");
                scanf("%d", &senhaTentativa);
                tentativas++;
                if (senhaCadastro == senhaTentativa)
                {
                    printf("Digite o valor a ser sacado: ");
                    scanf("%lf", &valorSaque);

                    if (valorSaque <= saldoConta)
                    {
                        saldoConta -= valorSaque;
                    }
                    else
                    {
                        printf("Saldo insuficiente");
                    }
                }
                else if ((senhaCadastro != senhaTentativa)&&(tentativas==3))
                {
                    printf("Senha invalida, sua conta foi bloqueada");
                    //flagSenha=1;
                    //break;
                    return 0;
                }
                else
                {
                    printf("Senha invalida\n");
                }

            }
            while (senhaCadastro != senhaTentativa);


        }
        else
        {
            printf("operacao invalida\n");
        }

        // if (flagSenha != 1){
        printf("\nRepita a operacao: ");
        scanf("%d", &operacao);
        //}
        // else {
        //   break;
        //}

    }





}
