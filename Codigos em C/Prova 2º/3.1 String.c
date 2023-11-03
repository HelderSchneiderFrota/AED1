#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

int verifica(char string[40]){
     for(int i=0; i<40;i++){
        if(isdigit(string[i]) != 0){
            printf("string invalida");
            return 1;
            break;
        }
    }
}

int main(){

    char string[40];
    int tam;
    printf("Digite a string: \n");
    fgets(string, 40, stdin);
    tam = strlen(string);
    if(verifica(string) != 1){
    printf("A string tem %d caracters\n", tam-1);
    printf("A string trandormada eh: ");
    for(int i=0; i<tam;i++){

        string[i] = toupper(string[i]);
        printf("%c",string[i]);
    }
    }
    else{
        return 0;
    }

}