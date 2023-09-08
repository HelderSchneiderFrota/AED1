#include <stdio.h>
#include <stdlib.h>
#include <time.h>


double Estoque[10], Clientes[10];


void limpatela(){
    
#ifdef _WIN32
        system("cls"); // Para Windows
    #else
        system("clear"); // Para Unix/Linux
    #endif
}


void tabelaItens(){
    printf("\tSeja Bem vindo ao Helder e Kaue suplementos\n ");
    printf("\n");
    printf("Codigo\t\t   Item \t\t Preço \n");
    printf("\n");
    printf("1\t  Barrinha de proteina \t\t 04.50 R$ \n");
    printf("2\t  Creatina             \t\t 75.00 R$\n");
    printf("3\t  Whey protein         \t\t 99.00 R$\n");
    printf("4\t  Beta alanina         \t\t 59.00 R$\n");
    printf("5\t  Pre treino           \t\t 89.00 R$\n");
    printf("6\t  Cafeina              \t\t 40.00 R$\n");
    printf("7\t  Glutamina            \t\t 32.89 R$\n");
    printf("8\t  Maca peurana         \t\t 21.00 R$\n");
    printf("9\t  BCAA                 \t\t 12.50 R$\n");
    printf("5\t  Pre treino           \t\t 89.00 R$\n");
    printf("10\t  Omega 3              \t\t 20.30 R$\n");
}


void menu(){
    int menu;
    printf("\t\t\tMenu\n");
    printf("O que deseja fazer?\n");
    printf("\n");
    printf("1\t Simular compra\n");
    printf("2\t Consultar debidos de clientes do Crediario\n");
    printf("3\t Preencher estoque\n");
    printf("4\t Consultar estoque\n");
    printf("5\t Pagar debitos do clientes do Crediario (total ou parcial)\n");
    printf("6\t Sortear cliente que terá sua divida do crediario perdoada\n");
    printf("\n");
    printf("Digite o numero referente ao opcao: \n");
    scanf("%d", &menu);
    
}


void sorteio(){
    srand(time(0));
    printf("\n Aqui está um numero sorteado :%d ", rand()%10);
}


int main(){
    
    sorteio();
    
    tabelaItens();
    
    menu();
    
    limpatela();
    
return 0;
}
