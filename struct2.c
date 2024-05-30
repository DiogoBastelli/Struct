#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[100];
    char endereco[100];
    int idade;
} Pessoa;


int main(){
    Pessoa pessoa;
    strcpy(pessoa.nome , "Diogo");
    strcpy(pessoa.endereco , "Rua 14");
    pessoa.idade , 19;
   

    printf("nome:%s idade:%d endereco:%s" , pessoa.nome , pessoa.idade , pessoa.endereco);
     return 0;
}