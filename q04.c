#include <stdio.h>

struct Aluno {
    float nota1;
    float nota2;
    float media;
};

float calcularMediaAluno(struct Aluno aluno) {
    return (aluno.nota1 + aluno.nota2) / 2;
}

float calcularMediaTurma(struct Aluno turma[], int tamanho) {
    float soma = 0;

    for (int i = 0; i < tamanho; ++i) {
        turma[i].media = calcularMediaAluno(turma[i]);
        soma += turma[i].media;
    }

    return soma / tamanho;
}

int main() {
    struct Aluno turma[3];

    for (int i = 0; i < 3; ++i) {
        printf("Digite as notas do Aluno %d:\n", i + 1);
        printf("Nota 1: ");
        scanf("%f", &turma[i].nota1);

        printf("Nota 2: ");
        scanf("%f", &turma[i].nota2);

        printf("\n");
    }

    printf("Médias dos alunos:\n");
    for (int i = 0; i < 3; ++i) {
        turma[i].media = calcularMediaAluno(turma[i]);
        printf("Aluno %d: %.2f\n", i + 1, turma[i].media);
    }

    float mediaTurma = calcularMediaTurma(turma, 3);
    printf("\nMédia da turma: %.2f\n", mediaTurma);

    return 0;
}
