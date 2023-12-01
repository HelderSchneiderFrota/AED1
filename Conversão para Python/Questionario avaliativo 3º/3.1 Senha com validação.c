#include <stdio.h> // está errado



int senha;

int temo2(int num){

    int digito;

    while(num!=0){

    digito = num % 10;

    num /=10;

    if(digito==2){

        printf("Senha valida");

        return 0;

    }

}

}


void verificasenha(int num){

int contagem=0, digito;

   do{

    digito = num % 10;

    num /=10;

    contagem++;
   }while(num!=0);

   printf("%d", contagem);

    if(contagem == 4){

        temo2(senha);

        }

    else{

        printf("Senha invalida!");

        main();

    }

}


int main(){





printf("Digite a sua senha: ");

scanf("%d", &senha);

verificasenha(senha);



return 0;

}