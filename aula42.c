#include <stdio.h>

struct horario
{
    int horas;
    int minutos;
    int segundos;
};

struct horario teste(struct horario x);

int main()
{

    struct horario agora;

    agora.horas = 15;
    agora.minutos = 17;
    agora.segundos = 30;

    struct horario proxima;
    proxima = teste(agora);

    printf("%i\n", proxima.horas);
    printf("%i\n", proxima.minutos);
    printf("%f\n", proxima.segundos);
    /* printf("%i:%i:%i\n", agora.horas, agora.minutos, agora.segundos); */

    return 0;
}

struct horario teste(struct horario x)
{
    printf("%i\n", x.horas);
    printf("%i\n", x.minutos);
    printf("%f\n", x.segundos);
    return x;
}
