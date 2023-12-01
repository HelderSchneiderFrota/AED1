#include <stdio.h>



float a;



void kilos(float KILOS){

    if(KILOS>0){

        menu(0);

    }

    }





void menu(int men){



    printf("Digite 1 para converter para grama, 2 para libras e 3 para onca: ");

    scanf("%d", &men);



 float gramas, libras, oncas;



  switch(men){

    case 1:

        gramas = a*1000;

        printf("o valor foi convertido para gramas: %.2f \n", gramas);

        main();

        break;

    case 2:

        libras = a* 2.205;

        printf("o valor foi convertido para libras: %.2f \n", libras);

        main();

        break;

    case 3:

        oncas = a* 35.274;

        printf("o valor foi convertido para oncas: %.2f \n", oncas);

        main();

        break;

    default:

        printf("ERRO \n");

        break;

    }

}







int main(){



    printf("Digite a quantidade de KGs: ");

    scanf("%f", &a);

    kilos(a);





return 0;

}