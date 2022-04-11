#include <stdio.h>
#include <stdlib.h>

typedef struct no{
    int valor;
    struct no *proximo;
}No;


void inserir_no_inicio(No **lista, int num){
    No *novo = malloc(sizeof(No));

    if(novo){
        novo->valor = num;
        novo->proximo = *lista;
        *lista = novo;
    }else{
        printf("Erro ao alocar memoria!\n");
    }
}

void inserir_no_fim(No **lista, int num){
    No *aux, *novo = malloc(sizeof(No));

    if(novo){
        novo->valor = num;
        novo->proximo = NULL;

        //� o primeiro?
        if(*lista == NULL){
            *lista = novo;
        }else{
            aux = *lista;
            while(aux->proximo){
                aux = aux->proximo;
            }
            aux->proximo = novo;
        }
    }else{
       printf("Erro ao alocar memoria!\n");
    }
}

void inserir_no_meio(No **lista, int num, int ant){
    No *aux, *novo = malloc(sizeof(No));

    if(novo){
        novo->valor = num;
        //� o primeiro?
        if(*lista == NULL){
            novo->proximo = NULL;
            *lista = novo;
        }else{
            aux = *lista;
            while(aux->valor != ant && aux->proximo){
                aux = aux->proximo;
            }
            novo->proximo = aux->proximo;
            aux->proximo = novo;
        }
    }else{
        printf("Erro ao alocar memoria!\n");
    }
}

void inserir_ordenado(No **lista, int num){
    No *aux, *novo = malloc(sizeof(No));

    if(novo){
        novo->valor = num;
        //a lista est� vazia?
        if(*lista == NULL){
            novo->proximo = NULL;
            *lista = novo;
        }//� o menor?
        else if(novo->valor < (*lista)->valor){
            novo->proximo = *lista;
            *lista = novo;
        }else{
            aux = *lista;
            while(aux->proximo && novo->valor > aux->proximo->valor){
                aux = aux->proximo;
            }
            novo->proximo = aux->proximo;
            aux->proximo = novo;
        }
    }else{
        printf("Erro ao alocar memoria!\n");
    }
}

void inserir_decrescente(No **lista, int num){
    No *aux, *novo = malloc(sizeof(No));

    if(novo){
        novo->valor = num;
        //a lista est� vazia?
        if(*lista == NULL){
            novo->proximo = NULL;
            *lista = novo;
        }//� o menor?
        else if(novo->valor > (*lista)->valor){
            novo->proximo = *lista;
            *lista = novo;
        }else{
            aux = *lista;
            while(aux->proximo && novo->valor < aux->proximo->valor){
                aux = aux->proximo;
            }
            novo->proximo = aux->proximo;
            aux->proximo = novo;
        }
    }else{
        printf("Erro ao alocar memoria!\n");
    }
}

void imprimir(No *no){
    printf("\n\tLista: ");
    while(no){
        printf("%d ", no->valor);
        no = no->proximo;

    }
    printf("\n\n");
}

int main()
{
    int opcao, valor, anterior;
    No *lista = NULL;
    do{
       printf("\n\t0 - Sair\n\t1 - InserirNoInicio\n\t2 - InserirNoFinal\n\t3 - InserirNoMeio\n\t4 - InserirOrdenado\n\t5 - InserirOrdemDecrescente\n\t6 - Imprimir\n\t");
       scanf("%d", &opcao);

       switch(opcao){
            case 1:
                printf("Digite um valor: ");
                scanf("%d", &valor);
                inserir_no_inicio(&lista, valor);
                break;
             case 2:
                printf("Digite um valor: ");
                scanf("%d", &valor);
                inserir_no_fim(&lista, valor);
                break;
             case 3:
                printf("Digite um valor e o valor de referencia: ");
                scanf("%d %d", &valor, &anterior);
                inserir_no_meio(&lista, valor,anterior);
                break;
             case 4:
                printf("Digite um valor: ");
                scanf("%d", &valor);
                inserir_ordenado(&lista, valor);
                break;
             case 5:
                printf("Digite um valor: ");
                scanf("%d", &valor);
                inserir_decrescente(&lista, valor);
                break;
             case 6:
                imprimir(lista);
                break;
             default:
                if(opcao != 0){
                    printf("Opcao invalida!\n");
                }
       }
    }while(opcao != 0);

    return 0;
}

