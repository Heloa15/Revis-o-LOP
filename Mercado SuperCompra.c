#include <stdio.h>

typedef struct {
    char nome[30];
    int quantidade;
    float preco;
}Produto;

int main() {
    Produto produtos[10];
    float total = 0;

    for (int i = 0; i < 10; i++) {
        printf("\nProduto %d\n", i + 1);
        printf("Nome: ");
        scanf(" %[^\n]", produtos[i].nome);
        printf("Quantidade: ");
        scanf("%d", &produtos[i].quantidade);
        printf("Preço: ");
        scanf("%f", &produtos[i].preco);

        total += produtos[i].quantidade * produtos[i].preco;
    }

    printf("\nValor total em estoque: R$ %.2f\n", total);

    return 0;
}
