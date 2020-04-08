#include <stdio.h>

int main()
{
    int minhaIdade;
    minhaIdade = 23;

    float meuSalario;
    meuSalario = 20000.50;

    /* caracteres devem estar entre aspas simples
    https://stackoverflow.com/questions/3683602/single-quotes-vs-double-quotes-in-c-or-c
     */
    char minhaPrimeiraLetra;
    minhaPrimeiraLetra = 'L';

    /* %i significa que irá utilizar um valor, seja ele char, int, string
        o valor que será colocado no lugar de %i é o segundo parâmetro da função printf
     */
    printf("minha idade é %i\n", minhaIdade);
    printf("Meu salário é de %f\n ", meuSalario);
    /* É possível limitar a quantidade de valores após o ponto */
    printf("Meu salário com duas casas após a vírgula é  é de %0.2f\n ", meuSalario);

    printf("Minha primeira letra é %c", minhaPrimeiraLetra);

    /*
     relação de tipos de parâmetros para o printf
     %i - int
     %f - float,double
     %c - char
     %x - hexadecimal
     
     para visualizar mais sobre formatação veja aula33
    */
}