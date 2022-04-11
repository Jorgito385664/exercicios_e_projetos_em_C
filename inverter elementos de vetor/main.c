#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,fim=19, copia;
    int vetor[20];

    for(i=0; i<20; i++){
        printf("Digite o valor na posicao %d: ", i);
        scanf("%d", &vetor[i]);
    }

    printf("\n\n");

    for(i=0; i<20; i++){
        printf("%d ",vetor[i]);
    }

    for(i=0; i<10; i++){
        copia = vetor[i];
        vetor[i] = vetor[fim];
        vetor[fim] = copia;
        fim--;
    }

    printf("\n\n");

     for(i=0; i<20; i++){
        printf("%d ",vetor[i]);
    }
    return 0;
}
