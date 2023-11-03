#include <stdio.h>

#include <ctype.h>





int main(){



char Vetor[40];

int numero=0, letrasM=0;



printf("Digite uma palavra com numeros: ");

gets(Vetor);



for (int i=0; i<40; i++){

    if(isdigit(Vetor[i]) == 1){

        //tem numeros

        numero++;

    }

    if(isupper(Vetor[i]) == 1){

        letrasM++;

    }

}

printf("Tem %d numeros na palavra digitada \n", numero);

printf("Tem %d letras maiscula na palavra digitada \n", letrasM);



return 0;

}

