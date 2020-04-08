#include <stdio.h>

/* Obter dados do usuário */
int main()
{
    int base;
    int altura;
    int area;

    printf("Digite o valor da base:\n");
    /* recebe dados do usuário
        o primeiro parâmetro indica o tipo de dado a ser recebido
        o segundo parâmetro é onde irá alocar esse dado
     */
    scanf("%i", &base);

    printf("Digite o valor da altura:\n");
    scanf("%i", &altura);

    area = base * altura;

    printf("O valor da área do retângulo é: %i\n ", area);
    return 0;
}