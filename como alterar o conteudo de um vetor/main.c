#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int vetor[10];

    for(i=0; i<10;i++){
        printf("Digite o elemento da posicao %d: ", i);
        scanf("%d", &vetor[i]);
    }

    for(i=0; i<10; i++){
        vetor[i] = vetor[i] * 3;
    }

    printf("\n\n");

    for(i=0; i<10; i++){
        printf("%d ", vetor[i]);
    }

     printf("\n\n");
    return 0;
}
