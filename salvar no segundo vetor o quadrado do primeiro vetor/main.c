#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int vetor1[10], vetor2[10];


    for(i=0; i<10;i++){
        printf("Digite o elemento da posicao %d: ", i);
        scanf("%d", &vetor1[i]);
    }

    for(i=0; i<10; i++){
        vetor2[i] = vetor1[i] * vetor1[i];
    }

    printf("Vetor 1: ");
    for(i=0; i<10; i++){
        printf("%d ", vetor1[i]);

    }

    printf("\n\n");

    printf("Vetor 2: ");
    for(i=0; i<10; i++){
        printf("%d ", vetor2[i]);
    }



    printf("\n\n");
    return 0;
}
