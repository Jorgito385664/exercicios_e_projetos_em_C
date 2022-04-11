#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i;
    int vetor[40];

    srand(time(NULL));

    for(i=0; i<40;i++){
        vetor[i] = 1 + rand() % 20;
    }


    printf("\n\n");

    for(i=0; i<40; i++){
        printf("%d ", vetor[i]);
    }

     printf("\n\n");
    return 0;
}
