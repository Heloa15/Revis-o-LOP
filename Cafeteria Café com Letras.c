#include <stdio.h>

int main() {
    float nota, soma = 0, media;
    int i;

    printf("\n=== Cafeteria Café com Letras ===\n");
    for (i = 0; i < 7; i++) {
        printf("Nota do cliente %d (0 a 10): ", i + 1);
        scanf("%f", &nota);

        if (nota < 0 || nota > 10) {
            printf("Nota inválida! Digite novamente.\n");
        } else {
            soma += nota;
        }
    }

    media = soma / 7.0;

    printf("\nMédia de atendimento: %.2f\n", media);

    if (media >= 8) {
        printf("Avaliação: Boa\n");
    } else if (media >= 5) {
        printf("Avaliação: Razoável\n");
    } else {
        printf("Avaliação: Ruim\n");
    }

    return 0;
}
