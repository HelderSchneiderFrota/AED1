
#include <stdio.h>

float converter(float F){ 
    float C;
    C= ((F- 32) / 1.8);
    
    return printf("A temperatura em Graus Celcios eh: %f", C);
}




int main()
{
    float temperatura;
    printf("Digite o valor em Fahrenheit: \n");
    scanf("%f", &temperatura);
    converter(temperatura);
    return 0;
}
