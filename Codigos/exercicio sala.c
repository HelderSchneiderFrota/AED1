#include <stdio.h>

void funcao(float A, float B, float C, char LETRA){
    float media, P1,P2,P3;
    if(LETRA == 'A'){
        media= (A+B+C)/3;
        printf("a media aritmetica eh: %.2f", media);
    }
    else if(LETRA == 'P'){
        printf("Digite o peso da P1:\n");
        scanf("%f", &P1);
        printf("Digite o peso da P2:\n");
        scanf("%f", &P2);
        printf("Digite o peso da P3:\n");
        scanf("%f", &P3);
        media = ((((A*P1)+(B*P2))+(C*P3))/(P1+P2+P3));
        printf("a media ponderada eh: %.2f", media);
    }
    else{
        printf("caracter invalido");
    }
}

int main(){
    float a,b,c;
    char letra;
    printf("Digite o primeira nota:\n");
    scanf("%f", &a);
    printf("Digite o segunda nota: \n" );
    scanf("%f", &b);
    printf("Digite o terceira nota: \n");
    scanf("%f", &c);
    fflush (stdin);
    printf("Digite A para media aritmetica e P para media ponderada: \n");
    scanf("%c", &letra);
    funcao(a,b,c,letra);
}
