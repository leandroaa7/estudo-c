#include <stdio.h>

int main()
{
    float nota[2];
    nota[0] = 10;
    nota[1] = 10;

    float media = (nota[0] + nota[1]) / 2;
    printf("media: %0.2f\n", media);

    /* inicializando array, obs: os valores dentro da chave não pode ultrapassar o valor do array */
    double balance[5] = {1000.0, 2.0, 3.4, 7.0, 50.0};

    printf("saldo 1: %0.2f\n", balance[0]);

    double debits[] = {1000.0, 2.0, 3.4, 7.0, 50.0};

    printf("Débito 1: %0.2f\n", debits[0]);

    return 0;
}