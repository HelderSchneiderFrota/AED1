#include <stdio.h>

float valorproduto, valor;

float pix (float P){
    valor +=P - (P * 0.10);
    printf("o valor ficou: %f\n", valor);
}
float debito (float D){
    valor +=D - (D * 0.05);
    printf("o valor ficou: %f\n", valor);
}
float credito (float C){
    valor +=C - (C * 0.02);
    printf("o valor ficou: %f \n", valor);
}
float parcelado(){
    printf("Não possui desconto\n");
    printf("o valor ficou: %f\n", valor);
}


int main(){
    
int operacao;
    printf("Qual é o valor do produto: \n");
    scanf("%f", &valorproduto);
    printf("Digite 1 para Pix, 2 para debito e 3 para credito: \n");
    scanf("%d", &operacao);
    do{
        if(operacao== 1){
        pix(valorproduto);
        }
        else if(operacao== 2){
        debito(valorproduto);
        }
        else if (operacao== 3){
        credito(valorproduto);
        }
        else if (operacao ==4){ 
        parcelado(valorproduto);
        }
        else{
        printf("operacao cancelada, o valor final eh: %f" ,valor);
        break;
        }
    printf("Qual é o valor do produto: \n");
    scanf("%f", &valorproduto);
    printf("Digite 1 para Pix, 2 para debito e 3 para credito: \n");
    scanf("%d", &operacao);
}while(operacao != 1 || 2 || 3 || 4);
}