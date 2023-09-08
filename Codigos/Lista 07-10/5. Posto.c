#include <stdio.h>
#include <math.h>

int main (){

float alcool,gaso,diesel, a;

    printf("O posto parada obrigatoria esta com promocao!!!\n");
    printf ("Digite 1 para alcool \n");
    printf ("Digite 2 para gasolina \n");
    printf ("Digite 3 para diesel \n");
scanf ("%f", &a);

if (a==1){
    printf("Voce escolheu alcool \n");
    printf("Qual eh a quantidade de litros de alcool: \n");
scanf ("%f", & alcool);
    if (alcool <= 10){
alcool= ((alcool-(alcool*0.03))*4.5);
    printf ("O valor do alcool com desconto eh:%.2f", alcool);
}
    else{
alcool = ((alcool-(alcool*0.05))*4.5);
    printf ("O valor do alcool com desconto eh:%.2f", alcool);
}
}
else if(a==2){
    printf("Voce escolheu gasolina \n");
    printf("Qual eh a quantidade de litros de gasolina: \n");
scanf ("%f", & gaso);
     if (gaso <= 15){
gaso= ((gaso-(gaso*0.01))*5.1);
    printf ("O valor do gasolina com desconto eh:%.2f", gaso);
    }
     else{
gaso= ((gaso-(gaso*0.04))*5.1);
    printf ("O valor do gasolina com desconto eh:%.2f", gaso);
}
}
else if(a==3){
        printf("Voce escolheu diesel \n");
        printf("Qual eh a quantidade de litros de diesel: \n");
scanf ("%f", & diesel);
     if (diesel <= 20){
diesel= (((diesel-diesel*0.03))*5.25);
    printf ("O valor do diesel com desconto eh:%.2f", diesel);
    }
    else{
diesel= (((diesel-diesel*0.06))*5.25);
    printf ("O valor do diesel com desconto eh:%.2f", diesel);
    }
}
else{
    printf ("opcao invalida");
}

printf ("\n");

return 0;
}
