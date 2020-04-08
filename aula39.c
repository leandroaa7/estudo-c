#include <stdio.h>

/* estruturas 
    definição x declaração
*/

int main()
{
    /*definição de uma estrutura     */
    struct horario
    {
        int horas;
        int minutos;
        int segundos;
    };

    /* declaração, bem parecido com a 'declaração' de variáveis */
    struct horario agora;

    agora.horas = 15;
    agora.minutos = 17;
    agora.segundos = 30;

    printf("%i:%i:%i\n", agora.horas, agora.minutos, agora.segundos);
    return 0;
}
