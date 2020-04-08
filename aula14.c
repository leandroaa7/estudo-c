#include <stdio.h>

int main()
{
    int idade;
    printf("Favor informar idade:\n");
    scanf("%i", &idade);

    if (idade < 18)
    {
        printf("Não pode beber alcool\n");
    }
    else
    {
        printf("Se beber, beba com moderação\n");
    }

    int saldo;
    printf("Favor digitar o saldo\n");
    scanf("%i", &saldo);
    /* quando se tem apenas uma linha após o if/else pode se omitir as chaves */
    if (saldo > 30)
        printf("Pode beber um drink caro");
    else
        printf("Não pode beber um drink caro");

    return 0;
}