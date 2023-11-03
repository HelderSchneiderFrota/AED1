#include <stdio.h>

double funcao(double a, double b, double c){

    double media=0;

    if(a>=0 && a<=10 && b>=0 && b<=10 && c>=0 && c<=10  ){
        media = (a+b+c)/3;
       return printf("a media eh : %lf", media);
    }
    else{
        return printf("Uma das notas não está em 0 e 10");
    }

}


int main (){

double a,b,c;

printf("Digite as 3 notas dos alunos: ");
scanf("%lf %lf %lf", &a, &b, &c);

funcao(a,b,c);

}