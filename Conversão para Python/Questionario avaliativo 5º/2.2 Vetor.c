
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int Vetor[10];

void adicao(){

    int a,b, soma=0;

    printf("Digite a posiçao do primeira numero que deseja somar: \n");
    scanf("%d", &a);

    if(a>=0 && a<= 9){
        printf("Digite a posiçao do segundo numero que deseja somar: \n");
        scanf("%d", &b);
        if(b>=0 && b<= 9){
            soma = Vetor[a] + Vetor[b];
            printf("A soma eh: %d \n", soma);
            menu();
        }
        else{
            printf("Numero invalido Digite novamente!! \n");
            adicao();
        }

    }
    else{
        printf("Numero invalido Digite novamente!! \n")
        adicao();
    }
}

void media(){
    float media =0;
    for(int i=0; i<10; i++){
        media += Vetor[i];

    }
    printf("A media eh: %.2f \n", media/10);
    menu();
}

void pares(){
    printf("numeros pares são: ");
    for(int i=0; i<10; i++){
        if(Vetor[i]%2 == 0){
          printf("%d ", Vetor[i]);  
        }
    }
    menu();

}

int menu(){

    int a;

    printf("\n\tDigite a opção que deseja fazer\n");
    printf("1 - Realizar a operação de adição entre dois elementos do vetor\n");
    printf("2 - Calcular e exibir a média de todos os elementos do vetor \n");
    printf("3 -  Exibir na tela apenas os elementos do vetor que são pares \n");
    printf("0 - Para encerrar o programa \n");
    scanf("%d", &a);
    switch(a){
        case 1:
            adicao();
            break;
        case 2:
            media();
            break;
        case 3:
            pares();
            break;
        case 0:
            return 0;
        break;
        default://Aqui era pra aparecer opção invalida
            menu();
        break;
    }
}

int main(){
    int a,b;
    srand(time(0));
    for(int i=0; i<10; i++){
        Vetor[i] = rand()%10;
        //printf("Digita o %d da Vetor: \n", i);
        //scanf("%d", &Vetor[i]);
    }
    printf("O Vetor escrito foi: ");
    for(int i=0; i<10; i++){
       printf("%d ", Vetor[i]);
    }
    menu();
}