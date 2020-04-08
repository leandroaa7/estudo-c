#include <stdio.h>

/* se for um vetor unidimensional não é preciso informar o tamanho do vetor */
void ordemCrescente(int vetor[], int n);

int main()
{

    int vetor[10] = {6, 4, 1, 9, 8, 0, 5, 7, 3, 2};
    int i;

    /* quando for passar um vetor basta colocar o nome */
    ordemCrescente(vetor, 10);

    for (i = 0; i < 10; ++i)
    {
        printf("%i ", vetor[i]);
    }

    system("\nread -p 'Press Enter to end...' var");
    return 0;
}

void ordemCrescente(int vetor[], int n)
{
    int i, j, temporaria;
    /* bubble sort */
    for (i = 0; i < n; ++i)
    {
        for (j = i + 1; j < n; ++j)
        {
            if (vetor[i] > vetor[j])
            {
                temporaria = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = temporaria;
            }
        }
    }
}
