#include <stdio.h>

typedef struct {
    char nome[30];
    int codigo;
    float preco;
} Produtos;

int main() {
   Produtos produtos[5];
   int i;
    
   for (i = 0; i < 5; i++) {
        printf("\nProduto %d\n", i + 1);
        printf("Nome: ");
        scanf(" %[^\n]", produtos[i].nome);
        printf("Código: ");
        scanf("%d", &produtos[i].codigo);
        printf("Preço: ");
        scanf("%f", &produtos[i].preco);
    }

    printf("\nProdutos com preço acima de R$10.00:\n");
    for (i = 0; i < 5; i++) {
        if (produtos[i].preco > 10.00) {
            printf("Nome: %s | Código: %d | Preço: R$ %.2f\n",
                   produtos[i].nome, produtos[i].codigo, produtos[i].preco);
        }
    }

    return 0;
}