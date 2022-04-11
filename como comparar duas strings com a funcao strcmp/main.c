#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// existem 3 resultados inteiros para a funcao strcmp, que serve para comparar strings
// 0 -> as strings sao iguais
// -1 -> a string1 e menor que a string2 ex str1 = abacate e str2 = bola
// 1 -> a string1 e maior que a string2 ex str1 = bola e str2 = abacate
int main()
{
    char palavra1[50] = {"bola"};
    char palavra2[50] = {"abacate"};

    printf("\n\nResultado: %d\n\n", strcmp(palavra1,palavra2));
    return 0;
}
