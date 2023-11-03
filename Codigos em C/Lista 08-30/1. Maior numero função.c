#include <stdio.h>



int funcao(int A, int B){
    int c;
    if(A>B){
        c=A;
            return printf("o maior eh : %d", c);
    }
    else{
        c=B;
             return printf("o maior eh : %d", c);
    }
}

int main(){
    int a,b;
    printf("numero 1º: ");
    scanf("%i", &a);
    printf("numero 2º: ");
    scanf("%i", &b);
    funcao(a,b);

    return 0;
}
