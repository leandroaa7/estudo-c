#include <stdio.h>

/* Declaração de funções */
int max(int num1, int num2);
/* em uma função é necessário apenas o tipo dos parâmetros e não os nomes */
int min(int, int);

int max(int num1, int num2)
{
    int result;
    if (num1 > num2)
    {
        result = num1;
    }
    else
    {
        result = num2;
    }
    return result;
}

int main()
{
    int result = max(2, 3);
    printf("result: %i\n", result);
    return 0;
}
