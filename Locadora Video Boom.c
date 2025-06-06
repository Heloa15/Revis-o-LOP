#include <stdio.h>

int main() {
    int quantidade;

    printf("\n=== Locadora Vídeo Boom ===\n");

    do {
        printf("Quantos filmes deseja alugar (1 a 5)? ");
        scanf("%d", &quantidade);

        if (quantidade < 1 || quantidade > 5) {
            printf("Quantidade inválida. Tente novamente.\n");
        }
    } while (quantidade < 1 || quantidade > 5);

    printf("Você escolheu alugar %d filme(s).\n", quantidade);

    return 0;
}
