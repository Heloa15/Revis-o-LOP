#include <stdio.h>

int main() {
    int codigo;

    printf("=== Loja de Roupas FashionMix ===\n");
    printf("Digite o código do produto:\n");
    printf("1 - Camisa\n2 - Calça\n3 - Casaco\n");
    printf("Código: ");
    scanf("%d", &codigo);

    switch (codigo) {
    case 1:
        printf("Peça: Camisa - Preço: R$ 49.90\n");
        break;
    case 2:
        printf("Peça: Calça - Preço: R$ 89.90\n");
        break;
    case 3:
        printf("Peça: Casaco - Preço: R$ 129.90\n");
        break;
    default:
        printf("Código inválido.Tente Novamente!\n");
    }

    return 0;
}
