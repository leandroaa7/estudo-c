#include <stdio.h>

/* variáveis globais */
int gVariavelGlobal = 2;

void teste()
{
    printf("Global: %i\n", gVariavelGlobal);
}

int main()
{
    printf("Global: %i\n", gVariavelGlobal);
    teste();
    return 0;
}
