#include <stdio.h>

int main()
{
    int intVar = 999999;
    int intVar2 = 10;
    double doubleVar = 100.123456;

    /* utilizando %% indica que você quer apresentar o caractere % e não apresentar o valor de uma variável */

    /* Formatação variáveis */
    printf("Variável inteira (%%d) = %d\n", intVar);
    printf("Variável inteira (%%i) = %i\n", intVar);
    printf("Variável inteira (%%x) = %x\n", intVar);     /* base 16 */
    printf("Variável inteira (%%o) = %o\n", intVar);     /* base 8 */
    printf("Variável formatada (%%d) = %8d\n", intVar2); /* base 8 */

    printf("\n");

    /* Formatação variáveis */
    printf("Variável double (%%f) = %f\n", doubleVar);                /* arredonda */
    printf("Variável double (%%g) = %g\n", doubleVar);                /* reduz e trunca */
    printf("Variável double (%%e) = %e\n", doubleVar);                /* notação cientifica */
    printf("Variável double (%%a) = %a\n", doubleVar);                /* notação cientifica */
    printf("Variável double com precisão (%%f) = %.3f\n", doubleVar); /* com precisão */

    printf("\n");

    return 0;
}