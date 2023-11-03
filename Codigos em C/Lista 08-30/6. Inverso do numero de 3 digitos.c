#include <stdio.h>

int Inverso(int num) {
    int reverso = 0;
    int temp = num;

    while (temp > 0) {
        reverso = reverso * 10 + temp % 10;
        temp /= 10;
    }

    if (reverso == num) {
        return 1;
    } else {
        return 0;
    }
}

int conta(int num) {
    int count = 0;

    while (num > 0) {
        count++;
        num /= 10;
    }

    return count;
}

int main() {
    int num;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    int Digitos = conta(num);

    if (Digitos == 3) {
        int resultado = Inverso(num);

        if (resultado == 1) {
            printf("O numero %d possui inverso igual a ele mesmo.\n", num);
        } else {
            printf("O numero %d NAO possui inverso igual a ele mesmo.\n", num);
        }
    } else {
        printf("O número digitado não possui 3 dígitos.\n");
    }

    return 0;
}
