#include <stdio.h>

int main()
{

    struct horario
    {
        int horas;
        int minutos;
        int segundos;
    };

    /* lista de struct horario */
    struct horario teste[5];

    teste[0].horas = 10;
    teste[0].minutos = 20;
    teste[0].segundos = 30;

    printf("%i:%i:%i", teste[0].horas,
           teste[0].minutos,
           teste[0].segundos);

    struct horario teste2[5] =
        {
            {10, 20, 30},
            {30, 40, 50},
            {10, 20, 30},
            {10, 20, 30},
            {30, 40, 50}};

    printf("%i:%i:%i", teste2[0].horas,
           teste2[0].minutos,
           teste2[0].segundos);

    return 0;
}