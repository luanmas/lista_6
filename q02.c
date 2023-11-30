#include <stdio.h>

struct Estoque {
    char nomePeca[50];
    int numeroPeca;
    float preco;
    int numeroPedido;
};

int main() {
    struct Estoque estoque;

    printf("Digite o nome da peça: ");
    scanf("%s", estoque.nomePeca);

    printf("Digite o número da peça: ");
    scanf("%d", &estoque.numeroPeca);

    printf("Digite o preço da peça: ");
    scanf("%f", &estoque.preco);

    printf("Digite o número do pedido: ");
    scanf("%d", &estoque.numeroPedido);

    printf("\nInformações da peça no estoque:\n");
    printf("Nome da peça: %s\n", estoque.nomePeca);
    printf("Número da peça: %d\n", estoque.numeroPeca);
    printf("Preço da peça: %.2f\n", estoque.preco);
    printf("Número do pedido: %d\n", estoque.numeroPedido);

    return 0;
}
