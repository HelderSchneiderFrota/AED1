#include <stdio.h> //necesário transformar em função 

int main() {
    int vetor[10]; 

    
    vetor[1] = 1; //Barrinha de Ceral 
    vetor[2] = 2; //Creatina
    vetor[3] = 3; //Whey Protein
    vetor[4] = 4; //Betalanina
    vetor[5] = 5; //Pre Treino
    vetor[6] = 6; //Cafeina
    vetor[7] = 7; //Glutamina 
    vetor[8] = 8; //Maca Peruana
    vetor[9] = 9; //BCAA
    vetor[10] = 10;//Omega 3

    
    printf("Os 10 números armazenados no vetor são:\n");
    for (int i = 1; i <= 10; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}
