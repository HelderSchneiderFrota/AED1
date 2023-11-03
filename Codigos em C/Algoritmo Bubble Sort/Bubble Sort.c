#include <stdio.h>
#define TAM 5

int main(){

int Vetor[TAM], auxiliar, a;

for(int i=0; i < TAM; i++){
    printf("Digite valores do seu vetor: \n");
    scanf("%d", &a);
    Vetor[i] = a;
}

printf("Os valores do seu vetor  ficou: \n");

for(int i=0; i <TAM; i++){
   printf("%d ", Vetor[i]);
}

for (int i=0; i < TAM-1; i++){
    for(int j=0; j< TAM -1; j++){
        if(Vetor[j] > Vetor[j+1]){
            auxiliar = Vetor[j+1];
            Vetor[j+1] = Vetor[j];
            Vetor[j] = auxiliar;
        }
    }
}
printf("\nO vetor depois do bubble sort: \n");

for (int i=0; i < TAM; i++){
    printf("%d ", Vetor[i]);
}
}