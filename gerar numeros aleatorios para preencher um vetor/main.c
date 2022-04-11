#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i;
    int vetor[10];

    srand(time(NULL));

    for(i=0; i<10;i++){
        vetor[i] = rand();
    }


    printf("\n\n");

    for(i=0; i<10; i++){
        printf("%d ", vetor[i]);
    }

     printf("\n\n");
    return 0;
}
