#include <stdio.h>

int divisores(int b){
    int c=0;

    if(b<=0){
        return 0;
    }
    else{
        for(int i=1; i <=b; i++){
            if(b%i == 0){
            c+=i;
            }
        }
    }
    return c;
}

int main()

{
    int a,b;

    do{
    printf("Digite um numero inteiro: \n");
    scanf("%d", &b);

    if(divisores(b) != 0){
        a = divisores(b);
        printf("A soma dos divisores sao: %d \n",a);
    }
    else{
        break;
    }
    }while((b != 0 )|| (b <= -1));
    return 0;
}