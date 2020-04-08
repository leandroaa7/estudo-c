#include <stdio.h>

int main()
{
    /* definir uma struct e declarar uma variável */
    struct horario
    {
        int horas;
        int minutos;
        int segundos;
    } agora;

    /* definir uma struct, declarar uma variável e atribuir valores
    os valores atribuitos serão os da ordem definidos 
    neste caso a ordem seria horas, minutos e segundos
    os valores que não forem atribuídos, no caso do int, serão como 0
    */

    struct horario2
    {
        int horas;
        int minutos;
        int segundos;
    } agora2 = {10, 20, 30};
    /*   agora3 = {.horas = 20, .minutos = 30, .segundos = 10}; */ /* exemplo2: declarando estruturas com seus valores  */

    printf("%i\n", agora.horas);
    printf("%i\n", agora.minutos);
    printf("%i\n", agora.segundos);

    printf("%i\n", agora2.horas);
    printf("%i\n", agora2.minutos);
    printf("%i\n", agora2.segundos);

    return 0;
}