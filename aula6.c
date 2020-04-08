#include <stdio.h>

/* Estudo de operadores */

int main()
{

    /* Aritmetica */
    /* ler https://stackoverflow.com/questions/24853/c-what-is-the-difference-between-i-and-i */
    int soma, divisao, multiplicacao, subtracao, incremento, decremento, modulo;

    soma = 2 + 2;
    divisao = 10 / 5;
    multiplicacao = 2 * 50;
    subtracao = 13 - 7;

    incremento = 0;
    incremento++;
    ++incremento;

    decremento = 1;
    decremento--;

    modulo = 4 % 2; /* restante da divisão de 4 por 2 */

    printf("====ARITMÉTICA========\n");
    printf("Soma: %i\n", soma);
    printf("subtracao: %i\n", subtracao);
    printf("divisao: %i\n", divisao);
    printf("multiplicacao: %i\n", multiplicacao);
    printf("incremento: %i\n", incremento);
    printf("decremento: %i\n", decremento);
    printf("modulo: %i\n", modulo);

    printf("======================\n");
    printf("\n");

    /* Operadores relacionais */

    int igual, diferente, maior, menor, maiorIgual, menorIgual;
    /* true = 1 e false = 0 */
    igual = 2 == 2;
    diferente = 2 != 3;
    maior = 2 > 1;
    menor = 10 < 100;
    maiorIgual = 30 >= 30;
    menorIgual = 14 <= 15;

    printf("====RELACIONAL========\n");
    printf("igual: %i\n", igual);
    printf("diferente: %i\n", diferente);
    printf("maior: %i\n", maior);
    printf("menor: %i\n", menor);
    printf("maiorIgual: %i\n", maiorIgual);
    printf("menorIgual: %i\n", menorIgual);
    printf("======================\n");
    printf("\n");

    /* Operadores lógicos */
    int and, or, not;
    /* true = 1 e false = 0 */
    and = ((2 > 1) & (2 >= 2));
    or = ((3 > 1) || (3 > 5));
    not = (!(2 == 3));
    printf("====LOGICO========\n");
    printf("and: %i\n", and);
    printf("or: %i\n", or);
    printf("not: %i\n", not);

    printf("======================\n");
    printf("\n");

    return 0;
}