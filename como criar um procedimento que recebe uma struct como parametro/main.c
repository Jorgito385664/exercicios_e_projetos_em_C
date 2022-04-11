#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int dia, mes,ano;
}DataNas;

typedef struct{
    DataNas dataNas;
    int idade;
    char sexo;
    char nome[100];
}Pessoa;

void imprimirPessoa(Pessoa p){
    printf("\tNome: %s",p.nome);
    printf("\tIdade: %d\n", p.idade);
    printf("\tSexo: %c\n", p.sexo);
    printf("\tData de Nas.: %d/%d/%d\n ", p.dataNas.dia, p.dataNas.mes, p.dataNas.ano);
}


int main()
{
    Pessoa pessoa;

    printf("Digite seu nome: ");
    fgets(pessoa.nome,100,stdin);
    printf("Digite sua idade: ");
    scanf("%d", &pessoa.idade);
    scanf("%c");
    printf("Digite f ou m para o sexo: ");
    scanf("%c", &pessoa.sexo);
    printf("Digite sua data de nascimento no formato dd mm aaaa: ");
    scanf("%d%d%d", &pessoa.dataNas.dia,&pessoa.dataNas.mes,&pessoa.dataNas.ano);

    imprimirPessoa(pessoa);

    return 0;
}
