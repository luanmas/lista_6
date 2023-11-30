#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Definição da estrutura Informacoes
struct Informacoes {
    int *ponteiroMatriz; // Ponteiro para a matriz
    int quantidadeElementos;
    float media;
};

// Função para calcular a média do vetor
float calcularMedia(int *vetor, int tamanho) {
    float soma = 0;
    for (int i = 0; i < tamanho; ++i) {
        soma += vetor[i];
    }
    return soma / tamanho;
}

int main() {
    int n;

    printf("Digite a quantidade de elementos do vetor: ");
    scanf("%d", &n);

    int *vetor = (int *)malloc(n * sizeof(int));

    srand(time(NULL));

    for (int i = 0; i < n; ++i) {
        vetor[i] = rand() % 100;
    }

    // Calcula a média do vetor
    float media = calcularMedia(vetor, n);

    struct Informacoes informacoes;
    informacoes.ponteiroMatriz = vetor;
    informacoes.quantidadeElementos = n;
    informacoes.media = media;

    printf("\nVetor gerado:\n");
    for (int i = 0; i < n; ++i) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    printf("\nInformacoes:\n");
    printf("Quantidade de elementos: %d\n", informacoes.quantidadeElementos);
    printf("Media: %.2f\n", informacoes.media);

    free(vetor);

    return 0;
}
