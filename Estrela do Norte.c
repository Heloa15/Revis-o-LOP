#include <stdio.h>

int main() {
    int quartos[10];
    int i, ocupados = 0;
    float porcentagem;

    printf("=== Hotel Estrela do Norte ===\n");
    for (i = 0; i < 10; i++) {
        printf("Quarto %d - Ocupado (1) ou Livre (0)? ", i + 1);
        scanf("%d", &quartos[i]);

        if (quartos[i] == 1) {
            ocupados++;
        }
    }

    porcentagem = (ocupados / 10.0) * 100;

    printf("\nTotal de quartos ocupados: %d\n", ocupados);
    printf("Taxa de ocupação: %.1f%%\n", porcentagem);

    return 0;
}
