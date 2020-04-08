#include <stdio.h>

/* Funções recursivas */

int fatorial(int x);

int main()
{
    int numero, resultado;

    printf("Digite um número inteiro: \n");
    scanf("%i", &numero);

    resultado = fatorial(numero);

    printf("O fatorial de %i é: %i\n", numero, resultado);

    /* no console, espera uma tecla ser digitada para finalizar*/
    /* https://pt.stackoverflow.com/questions/349388/o-que-a-express%C3%A3o-systempause-faz */
    /* pause no windows
        system("pause");
     */
    /* pause no linux */

    system("\nread -p 'Press Enter to end...' var");
    return 0;
}

int fatorial(int x)
{
    int resultado;

    if (x == 0)
    {
        resultado = 1;
    }
    else
    {
        resultado = x * fatorial(x - 1);
    }
    return resultado;
}
