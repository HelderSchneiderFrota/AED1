#include <stdio.h>

int main (){

    char palavra[30];
    
    int conta=0;
    int converte;

    printf("Digite uma palavra: ");
    gets(palavra);

        for(int i=0; i<=conta; i++){

            converte = palavra[i];
            printf("%d \n", converte);

            switch (converte)
            {
            case 65 ... 90:
                conta++;
                printf("contagem: %d\n", conta);
                break;
            case 97 ... 122:
                conta++;
                printf("essa contagem: %d\n", conta);
            default:
                break;
            }
        }
        

    return 0;
}