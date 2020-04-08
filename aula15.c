#include <stdio.h>

int main()
{
    int idade;
    printf("Informar idade: \n");
    scanf("%i", &idade);

    if (idade <= 5)
    {
        printf("bebê\n");
    }
    else if (idade > 5 && idade <= 10)
    {
        printf("criança");
    }
    else if (idade > 10 && idade <= 18)
    {
        printf("Adolescente");
    }
    else if (idade > 18 && idade <= 50)
    {
        printf("Adulto");
    }
    else
    {
        printf("Idoso");
    }

    return 0;
}