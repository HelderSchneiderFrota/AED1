#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int Matriz[4][5];

int intervalo(int a){
    if(a>= 2 && a<=9){
        return 1;
    }
    else{
        return 0;
    }
}

void contamultiplos(int a){
    int d=0;
    for(int linha=0; linha < 4; linha++){
        for(int coluna=0;coluna<5; coluna++){
            if((Matriz[linha][coluna]%a) == 0){
                d++;
            }
        }
    }
    printf("Existem %d numeros na Matriz multiplos de %d", d, a);
}
int main(){
    int a,b;

    srand(time(0));

    for(int linha=0; linha < 4; linha++){
        for(int coluna=0;coluna<5; coluna++){
            Matriz[linha][coluna] = (rand()%20);
            printf("O  elemento [%d][%d] : %d \n", linha, coluna, Matriz[linha][coluna]);
            //printf("Digite o elemento [%d][%d] : \n", linha, coluna);
            //scanf("%d", &Matriz[linha][coluna]);
        }
    }
    for(int linha=0; linha < 4; linha++){
        for(int coluna=0;coluna<5; coluna++){
            printf("\t %d",Matriz[linha][coluna]);
        }
        printf("\n");
    }
        do{
            printf("Digite um numero entre 2 e 9: ");
            scanf("%d", &a);
            b = intervalo(a);
        }while(b != 1);
    contamultiplos(a);


return 0;
}

