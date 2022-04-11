#include <stdio.h>
#include <stdlib.h>


typedef struct{
    int num;
}Numero;

typedef struct no{
    Numero n;
    struct no *proximo;
}No;

Numero lerNumero(){
    Numero n;

    printf("\nDigite um numero:\n");
    scanf("%d", &n.num);
    return n;
}

void imprimirNumero(Numero n){
    printf("\nNumero: %d", n.num);
}

No* empilhar(No *topo){
    No *novo = malloc(sizeof(No));

    if(novo){
        novo->n = lerNumero();
        novo->proximo = topo;
        return novo;
    }else{
        printf("\nErro ao alocar memoria...\n");
    }

    return NULL;
}

No* desempilhar(No **topo){
    if(*topo != NULL){
        No *remover = *topo;
        *topo = remover->proximo;
        return remover;
    }else{
        printf("\nPilha vazia!\n");
    }
    return NULL;
}

void imprimir_pilha(No *topo){
    printf("\n--------------Pilha---------------\n");
    while(topo){
        imprimirNumero(topo->n);
        topo = topo->proximo;
    }
    printf("\n----------Fim da Pilha------------\n");
}

int main()
{
    No *remover;
    No *topo = NULL;
    int opcao;

    do{
        printf("\n0 - Sair\n1 - Empilhar\n2 - Desempilhar\n3 - Imprimir\n");
        scanf("%d", &opcao);
        getchar();
        printf("\nOpcao: %d\n", opcao);

        switch(opcao){
            case 1:
                topo = empilhar(topo);
                break;

            case 2:
                remover = desempilhar(&topo);
                if(remover){
                    printf("\nElemento removido com sucesso!\n");
                    imprimirNumero(remover->n);
                }else{
                    printf("\nSem no a remover.\n");
                }
                break;

            case 3:
                imprimir_pilha(topo);
                break;

            default:
                if(opcao !=0){
                    printf("\nOpcao invalida!!!\n");
                }
        }
    }while(opcao != 0);
    return 0;
}
