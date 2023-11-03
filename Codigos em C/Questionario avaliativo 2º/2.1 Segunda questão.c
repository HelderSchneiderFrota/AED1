#include <stdio.h>

int main(){

    int  voto=0, nulo=0, branco=0, contagem=0, c1=0, c2=0, c3=0, c4=0;

    float p1=0, p2=0, p3=0, p4=0;

    do{

        printf("Digite seu voto: ");

        scanf("%i", &voto);

        switch (voto){

        case 50:

            c1++;

            contagem++;

            break;

        case 55:

            c2++;

            contagem++;

            break;

        case 60:

            c3++;

            contagem++;

            break;

        case 65:

            c4++;

            contagem++;

            break;

        case 70:

            branco++;

            break;

        default:

            if (voto !=0){

                nulo++;

            }

            break;

        }

    }while (voto != 0);





    p1 = (c1 * 100.0 /contagem);

    p2 = (c2 * 100.0 / contagem);

    p3 = (c3 * 100.0/ contagem);

    p4 = (c4 * 100.0 / contagem);



    printf("%2.i  de votos para o candidato 1 ",c1 );

    printf("com %f de votos validos  \n",p1) ;



    printf("\n %2.i de votos para o candidato 2 ",c2 );

    printf("com %2.f %% de votos validos  \n", p2);



    printf("\n %2.i de votos para candidato 3 ",c3 );

    printf("com %2.f %% de votos validos  \n", p3);



    printf("\n %2.i votos o candidato 4 ",c4 );

    printf("com %2.f %% votos validos  \n", p4);



    printf("\n o numero de votos em branco foi %i \n",branco );

    printf("o numero de votos nulos foi %i \n",nulo );





}
