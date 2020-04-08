#include <stdio.h>

void teste()
{
    int variavelLocalAutomatica = 2;
    variavelLocalAutomatica *= 2;

    /* Uma variável estática é declarada, internamente, apenas uma vez,
     logo é possível preservar o seu valor  */
    static int variavelLocalEstatica = 2;
    variavelLocalEstatica *= 2;

    printf("Local Automática: %i\n", variavelLocalAutomatica);
    printf("Local Estática: %i\n", variavelLocalEstatica);
}

int main()
{
    /*  void teste(); */
    teste();
    teste();

    teste();
    return 0;
}
