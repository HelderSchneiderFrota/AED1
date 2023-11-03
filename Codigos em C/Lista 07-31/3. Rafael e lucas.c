#include <stdio.h>

int main(){

int contador=0;
float Rafael=150, lucas=120 ;
printf("Rafael tem 150cm e lucas 120cm\n");

while (1){
    
Rafael += 2.5;
lucas += 4;
contador++;
    
    if (lucas > Rafael){
        break;
    }
}

printf ("em %i anos Lucas sera maior que Rafael", contador);
return 0;

}