#include <stdio.h>

float converter;

float metros(float m){
    converter = m/39.37; 
    printf("O valor de polegadas foi convertido para metros, %f \n", converter);
}
float centimetros(float c){
    converter = c*2.54;
    printf("O valor de polegadas foi convertido para centimetros, %f \n", converter);
}
float jardas(float j){
    converter = j/36;
    printf("O valor de polegadas foi convertido para jardas, %f \n", converter);
}
float pes(float p){
    converter = p/12;
    printf("O valor de polegadas foi convertido para pes, %f \n ", converter);
}



int main()
{
    float p;
    int n;
    printf("Digite a quantidade de polegadas: \n");
    scanf("%f", &p);
    
    do{
        
     printf("Para qual unidade deseja converter: \n");
    printf("1 Para metros, 2 para centimetros, 3 para jardas, e 4 para pes: \n");
    scanf("%d", &n);
        switch(n){
            case 1:
            metros(p);
            break;
            case 2:
            centimetros(p);
            break;
            case 3:
            jardas(p);
            break;
            case 4:
            pes(p);
            break;
            default:
            printf("Numero invalido: \n");
            break;
        }
        printf("Digite a quantidade de polegadas: \n");
        scanf("%f", &p);
    }while(p>=0);

    

    
    
    return 0;
}
