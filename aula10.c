#include <stdio.h>

int main()
{
    int contador;

    /* for (initialization ; condition ; increment) { statements } */
    for (contador = 1; contador <= 10; contador = contador + 1)
    {
        printf("contador: %i\n", contador);
    }

    return 0;
}