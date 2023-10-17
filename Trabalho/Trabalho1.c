#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

double Estoque[10], Clientes[10];

void limpatela(){
    system("cls");
}

void ConsutarCrediario(){
    int CodigoCliente;
    printf("Digite o Codigo do cliente: \n");
    scanf("%d", &CodigoCliente);
    if(CodigoCliente>=0 && CodigoCliente<=9){
        printf("O Saldo em aberto do Cliente eh: %.2lf\n", Clientes[CodigoCliente]);
        sleep(2);
        limpatela();
        MENU();
    }
    else{
        printf("Digite o codigo do cliente correto!! \n");
        ConsutarCrediario();
    }
}

void PreencherEstoque(int d, int f){
    Estoque[d] += f;
    printf("Estoque preenchido\n");
    sleep(2);
    limpatela();
    MENU();
}

void PagamentoCrediario(int a) { // a é o codigo do cliente
    float pagamentocliente;
    printf("O Saldo em aberto do Cliente eh: %.2lf\n", Clientes[a]);
    printf("Digite o valor que deseja pagar: ");
    scanf("%f", &pagamentocliente);
        if(Clientes[a] >= pagamentocliente){
            Clientes[a] -= pagamentocliente;
            printf("Pagamento realizado com sucesso!! \n");
            printf("O valor no crediario ficou: %.2lf", Clientes[a]);
            sleep(3);
            limpatela();
            MENU();
        }
        else{
            printf("Por favor, faca pagamentos somente no valor total ou parcial \n");
            PagamentoCrediario(a);
        }
}

void Pagamento(float VALOR){
    int Paga, CodigoCliente;
    float total;
    printf("Digite a forma de Pagamento, 1 para PIX, 2 para Cartao, 3 para Dinheiro, 4 para Crediario: ");
    scanf("%d", &Paga);
        switch (Paga){
            case 1://PIX 5% de desconto
                total = VALOR - (VALOR*0.05);
                printf("Ganhou um desconto de 5 por cento, o valor total ficou: %.2f \n", total);
                printf("Pagamento realizado");
                sleep(3);
                limpatela();
                MENU();
                break;
            case 2://CARTÃO sem desconto
                printf("O valor total ficou: %.2f\n", VALOR);
                printf("Pagamento realizado");
                sleep(3);
                limpatela();
                MENU();
                break;
            case 3://DINHEIRO 2% de desconto
                total = VALOR - (VALOR*0.02);
                printf("Ganhou um desconto de 2 por cento, o valor total ficou: %.2f\n", total);
                printf("Pagamento realizado");
                sleep(3);
                limpatela();
                MENU();
                break;
            case 4: //CREDIARIO
                printf("Digite o codigo do cliente: ");
                scanf("%d", &CodigoCliente);
                if(CodigoCliente>=0 && CodigoCliente<=9){
                    Clientes[CodigoCliente] += VALOR;
                    printf("Valor inserido no crediario do cliente: %.2f \n", VALOR);
                    sleep(3);
                    limpatela();
                    MENU();
                }
                else{
                    printf("Digite um codigo do cliente correto!!!\n");
                    total = VALOR;
                    Pagamento(total);
                }
                break;
            default:
                printf("Escolha um metodo de pagamento correto!!!\n");
                total= VALOR;
                Pagamento(total);
                break;
        }
}

void tabelaItens(){
    int Quantidade=0, Produto;
    float  Valor;
    sleep(1);
    printf("Codigo\t\t   Item \t\t Preco \n");
    printf("\n");
    printf("0\t  Barrinha de proteina \t\t 04.50 R$ \n");
    printf("1\t  Creatina             \t\t 75.00 R$\n");
    printf("2\t  Whey protein         \t\t 99.00 R$\n");
    printf("3\t  Beta alanina         \t\t 59.00 R$\n");
    printf("4\t  Pre treino           \t\t 89.00 R$\n");
    printf("5\t  Cafeina              \t\t 40.00 R$\n");
    printf("6\t  Glutamina            \t\t 32.89 R$\n");
    printf("7\t  Maca peurana         \t\t 21.00 R$\n");
    printf("8\t  BCAA                 \t\t 12.50 R$\n");
    printf("9\t  Omega 3              \t\t 20.30 R$\n");
    printf("0\t Finalizar compra\n");
    printf("Digite o codigo referente ao produto que deseja: ");
    scanf("%d", &Produto);
        
    do{
        printf("Digite a Quantidade: ");
        scanf("%d", &Quantidade);

        if(Estoque[Produto] >= Quantidade){
            switch (Produto){
                case 0://Barrinha de proteina
                    if(Quantidade>=5){
                        printf("Compra no atacado, recebeu um desconto de 5 por cento no valor!!");
                        Valor+=(Quantidade*4.50)*0.95;

                        printf("\nBarrinha de proteina\tqnt:%d\tvalor:R$%.2f\n\n",Quantidade,Valor);
                    }
                    else{
                        Valor+=Quantidade*4.50;

                        printf("\nBarrinha de Cereal\tqnt:%d\tvalor:R$%.2f\n\n",Quantidade,Valor);

                    }
                    Estoque[Produto] -= Quantidade;
                    break;

                case 1: //Creatina
                    if(Quantidade>=2){
                        printf("Compra no atacado, recebeu um desconto de 5 por cento no valor!!");
                        Valor+=(Quantidade*75)*0.95;

                        printf("\nCreatina\tqnt:%d\tvalor:R$%.2f\n\n",Quantidade,Valor);
                    }
                    else{
                        Valor +=  (Quantidade*75);
                        printf("\nCreatina\tqnt:%d\tvalor:R$%.2f\n\n",Quantidade,Valor);
                    }
                    Estoque[Produto] -= Quantidade;
                    break;

                case 2: //Whey protein
                    if(Quantidade>=2){
                        printf("Compra no atacado, recebeu um desconto de 5 por cento no valor!!");
                        Valor+=(Quantidade*99)*0.95;

                        printf("\nWhey Protein\tqnt:%d\tvalor:R$%.2f\n\n",Quantidade,Valor);
                    }
                    else{
                        Valor +=  (Quantidade*99);
                        printf("\nWhey Protein\tqnt:%d\tvalor:R$%.2f\n\n",Quantidade,Valor);
                    }
                    Estoque[Produto] -= Quantidade;
                    break;

                case 3://Beta alanina
                    if(Quantidade>=3){
                        printf("Compra no atacado, recebeu um desconto de 5 por cento no valor!!");
                        Valor+=(Quantidade*59)*0.95;

                        printf("\nBeta Alanina\tqnt:%d\tvalor:R$%.2f\n\n",Quantidade,Valor);
                    }
                    else{
                        Valor += (Quantidade*59);
                        printf("\nBeta Alanina\tqnt:%d\tvalor:R$%.2f\n\n",Quantidade,Valor);
                    }
                    Estoque[Produto] -= Quantidade;

                    break;
                case 4://Pre treino
                    if(Quantidade>=2){
                        printf("Compra no atacado, recebeu um desconto de 5 por cento no valor!!");
                        Valor+=(Quantidade*89)*0.95;

                        printf("\nPre treino\tqnt:%d\tvalor:R$%.2f\n\n",Quantidade,Valor);
                    }
                    else{
                        Valor += (Quantidade*89);
                        printf("\nPre treino\tqnt:%d\tvalor:R$%.2f\n\n",Quantidade,Valor);
                    }
                    Estoque[Produto] -= Quantidade;

                    break;
                case 5://cafeina
                    if(Quantidade>=4){
                        printf("Compra no atacado, recebeu um desconto de 5 por cento no valor!!");
                        Valor+=(Quantidade*40)*0.95;

                        printf("\nCafeina\tqnt:%d\tvalor:R$%.2f\n\n",Quantidade,Valor);
                    }
                    else{
                        Valor += (Quantidade*40);
                        printf("\nCafeina\tqnt:%d\tvalor:R$%.2f\n\n",Quantidade,Valor);
                    }
                    Estoque[Produto] -= Quantidade;

                    break;
                case 6://glutamina
                    if(Quantidade>=3){
                        printf("Compra no atacado, recebeu um desconto de 5 por cento no valor!!");
                        Valor+=(Quantidade*32.89)*0.95;

                        printf("\nCafeina\tqnt:%d\tvalor:R$%.2f\n\n",Quantidade,Valor);
                    }
                    else{
                        Valor += (Quantidade*40);
                        printf("\nCafeina\tqnt:%d\tvalor:R$%.2f\n\n",Quantidade,Valor);
                    }
                    Estoque[Produto] -= Quantidade;
                    break;
                case 7://Maca peruna
                    if(Quantidade>=4){
                        printf("Compra no atacado, recebeu um desconto de 5 por cento no valor!!");
                        Valor+=(Quantidade*21)*0.95;

                        printf("\nMaca Peruana\tqnt:%d\tvalor:R$%.2f\n\n",Quantidade,Valor);
                    }
                    else{
                        Valor += (Quantidade*21);
                        printf("\nMaca Peruana\tqnt:%d\tvalor:R$%.2f\n\n",Quantidade,Valor);
                    }
                    Estoque[Produto] -= Quantidade;
                    break;
                case 8: //Bcaa
                    if(Quantidade>=4){
                        printf("Compra no atacado, recebeu um desconto de 5 por cento no valor!!");
                        Valor+=(Quantidade*12.50)*0.95;

                        printf("\nBCAA\tqnt:%d\tvalor:R$%.2f\n\n",Quantidade,Valor);
                    }
                    else{
                        Valor += (Quantidade*12.50);
                        printf("\nBCAA\tqnt:%d\tvalor:R$%.2f\n\n",Quantidade,Valor);
                    }
                    Estoque[Produto] -= Quantidade;
                    break;
                case 9://omega 3
                    if(Quantidade>=3){
                        printf("Compra no atacado, recebeu um desconto de 5 por cento no valor!!");
                        Valor+=(Quantidade*20.30)*0.95;
                        printf("\nOmega 3\tqnt:%d\tvalor:R$%.2f\n\n",Quantidade,Valor);
                    }
                    else{
                        Valor += (Quantidade*20.30);
                        printf("\nOmega 3\tqnt:%d\tvalor:R$%.2f\n\n",Quantidade,Valor);
                    }
                    Estoque[Produto] -= Quantidade;
                    break;
                default:
                    printf("Codigo invalido");
                    break;
            }
        }
        else{
            printf("Produto sem estoque!! \n");
        }
    printf("Digite o codigo referente ao produto que deseja: ");
    scanf("%d", &Produto);
    }while (Produto != 0);
    Pagamento(Valor);
}

void sorteio(){
    srand(time(0));
    int aleatorio =  rand()%10;
    Clientes[aleatorio] -=  Clientes[aleatorio];
    printf("\nO cliente sortudo foi o referente ao codigo:");
    sleep(1);
    printf("\n.");
    sleep(2);
    printf("\n.");
    sleep(3);
    printf("\n.");
    sleep(1);
    printf("\n%d", aleatorio);
    printf("\nE teve sua divida perdoada!!\n");
    sleep(3);
    MENU();
}

void ConsultarEstoque(){
    printf("Quantidade de produtos no estoque: \n");
    for(int i=0; i<10; i++){
        printf("Codigo: %d, Quantidade: %.2lf  \n",i, Estoque[i]);
    }
    sleep(2);
    MENU();
}

void MENU(){
    int men,a,D,F,c;
    sleep(1);
    printf("\t\t\tMenu\n");
    printf("O que deseja fazer?\n");
    printf("\n");
    printf("1\t Simular compra\n");//PRONTO!!!
    printf("2\t Consultar debidos de clientes do Crediario\n");//ok
    printf("3\t Preencher estoque\n");//OK
    printf("4\t Consultar estoque\n");//ok
    printf("5\t Pagar debitos do clientes do Crediario (total ou parcial)\n");//ok
    printf("6\t Sortear cliente que tera sua divida do crediario perdoada\n");//ok
    printf("\n");
    printf("Digite o numero referente ao opcao: \n");
    scanf("%d", &men);
    switch(men){
        case 1:
            tabelaItens();
            break;
        case 2:
            ConsutarCrediario();
            break;
        case 3:
            printf("Deseja preencher todo o estoque com 10 produtos? 1 para sim, 2 para nao: ");
            scanf("%d", &c);
            if(c != 1){
                printf("Digite o codigo do produto para preencher o estoque: \n");
                scanf("%d", &D);
                printf("Digite a quantidade: \n");
                scanf("%d", &F);
                PreencherEstoque(D,F);
            }
            else{
                for(int i=0; i<10; i++)
                {
                    Estoque[i] += 10;
                }
                printf("Estoque preenchido\n");
                sleep(2);
                limpatela();
                MENU();
            }
            break;
        case 4:
            ConsultarEstoque();
            break;
        case 5:
            printf("Digite o codigo do cliente: \n");
            scanf("%d", &a);
            if(a>=0 && a<=9){
                PagamentoCrediario(a);
            }
            else{
                printf("Digite um codigo correto!!!\n");
                MENU();
            }
            break;
        case 6:
            sorteio();
            break;
        default:
            printf("Codigo invalido \n");
            printf("Deseja finalizar o programa? Digite 1 para Sim, 2 para nao: ");
            scanf("%d", &c);
            if(c != 1){
                MENU();
            }
            else{
                break;
            }
            break;
    }
}

int main(){
    printf("\tSeja Bem vindo ao Helder e Kaue suplementos\n ");
    printf("\n");

    MENU();

    return 0;
}