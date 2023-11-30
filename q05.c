#include <stdio.h>

struct Professor {
    char nome[50];
    int idade;
};

struct Disciplina {
    char nomeDisciplina[50];
    int codigoDisciplina;
    struct Professor responsavel;
};

int main() {
    struct Disciplina disciplina;

    printf("Digite o nome da disciplina: ");
    scanf("%s", disciplina.nomeDisciplina);

    printf("Digite o código da disciplina: ");
    scanf("%d", &disciplina.codigoDisciplina);

    printf("Digite o nome do professor responsável: ");
    scanf("%s", disciplina.responsavel.nome);

    printf("Digite a idade do professor responsável: ");
    scanf("%d", &disciplina.responsavel.idade);

    printf("\nDados da disciplina:\n");
    printf("Nome da disciplina: %s\n", disciplina.nomeDisciplina);
    printf("Código da disciplina: %d\n", disciplina.codigoDisciplina);

    printf("\nDados do professor responsável:\n");
    printf("Nome: %s\n", disciplina.responsavel.nome);
    printf("Idade: %d\n", disciplina.responsavel.idade);

    return 0;
}
