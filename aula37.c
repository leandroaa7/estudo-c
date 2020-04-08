#include <stdio.h>

/* é obrigatório dizer, no mínimo, o valor do segundo [] da matriz */
void funcaoPrint(int x[][3]);

int main()
{

    int matriz[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    /* pode deixar apenas o nome da matriz */
    funcaoPrint(matriz);

    system("\nread -p 'Press Enter to end...' var");
    return 0;
}

void funcaoPrint(int x[3][3])
{
    int i, j;
    for (i = 0; i < 3; ++i)
    {
        for (j = 0; j < 3; ++j)
        {
            printf("%i ", x[i][j]);
        }
        printf("\n");
    }
}
