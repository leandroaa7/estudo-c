#include <stdio.h>

void funcaoPrint(int x, int vetor[]);

int main()
{
    int x = 10;
    int vetor[3] = {10};

    /*
     quando passa o valor, sem ser matriz,
     o compilador faz uma cóía desse valor 

     */
    funcaoPrint(x, vetor);

    printf("\n");
    printf("Variável int na funcao principal = %i \n", x);
    printf("Vetor na funcao principal = %i \n", vetor[1]);
    printf("\n");

    funcaoPrint(x, vetor);

    system("read -p 'digite algo para finalizar' var");
    return 0;
}

void funcaoPrint(int x, int vetor[])
{
    /*
    
     x aqui é, na verdade, uma cópia da variável x 
     da main(), por isso o valor não é alterado
    
     quando passa um vetor, passa o endereço de memória do vetor, 
     e não uma cópia
    */

    x = x + 10;
    vetor[1] = 20;

    printf("Variável int na funcao funcaoPrint = %i \n", x);
    printf("Vetor na funcao funcaoPrint = %i \n", vetor[1]);
}