#include <stdio.h>
#include <string.h>

int main() {
    char strings[5][50];  
    int i, maior = 0;  

    
    for (i = 0; i < 5; i++) {
        printf("Digite a string %d : ", i + 1);
        fgets(strings[i], 50, stdin);  
        strings[i][strcspn(strings[i], "\n")] = '\0';
    }

    for (i = 0; i < 5; i++) {
        if (strlen(strings[i]) > strlen(strings[maior])) {
            maior = i;
        }
    }

    printf("A maior string eh: %s\n", strings[maior]);

    return 0;
}