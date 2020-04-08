#include <stdio.h>

/* estruturas 
    definição x declaração
*/

int main()
{
    /*definição de uma estrutura, obs a ordem importa em alguns caso, ler abaixo*/
    /* https://stackoverflow.com/questions/20184259/what-does-the-padding-class-tester-with-4-bytes-warning-mean */
    struct horario
    {
        double teste;
        int horas;
        int minutos;
        int segundos;
        char letra;
    };

    /* declaração, bem parecido com a 'declaração' de variáveis */
    struct horario agora;

    agora.horas = 15;
    agora.minutos = 17;
    agora.segundos = 30;

    struct horario depois;
    depois.horas = agora.horas + 10;
    depois.minutos = agora.minutos;
    depois.teste = 50.55 / 123;
    depois.letra = 'a';

    printf("%i\n", depois.horas);
    printf("%i\n", depois.minutos);
    printf("%f\n", depois.teste);
    printf("%c\n", depois.letra);

    /* printf("%i:%i:%i\n", agora.horas, agora.minutos, agora.segundos); */

    return 0;
}
