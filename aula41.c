#include <stdio.h>

int main()
{

    int x = 16;
    int y = 3;

    /* 
    (float) é chamado de casting
    é necessário pois o compilador irá retornar um valor inteiro
    porque as duas variáveis são inteiras
    logo é necessário que o resultado não seja convertido em int
    mas em float  :)
    */
    float resultado = (float)x / y;

    printf("%f\n", resultado);

    system("read -p 'digite algo para finalizar' var");
    return 0;
}