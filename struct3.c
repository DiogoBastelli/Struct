#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[100];
    int idade;
} Filhos;

typedef struct {
    char nome[100];
    char endereco[100];
    int idade;
    Filhos filhos[10];
} Pessoa;

int main(){
    Pessoa pessoa;

    strcpy(pessoa.nome,"Diogo");
    strcpy(pessoa.endereco , "Av 31");
    pessoa.idade = 19;

    strcpy (pessoa.filhos[0].nome , "Roger" ) ;
    pessoa.filhos[0].idade = 10 ;
    
    strcpy (pessoa.filhos[1].nome , "Cleber" ) ;
    pessoa.filhos[1].idade = 8 ;

    printf("nome %s idade %d \n", pessoa.nome , pessoa.idade);

    printf("Filhos\n");
    printf("Nome %s idade %d\n" , pessoa.filhos[0].nome , pessoa.filhos[0].idade);

    printf("Nome %s idade %d\n" , pessoa.filhos[1].nome , pessoa.filhos[1].idade);
  
    return 0 ;
}