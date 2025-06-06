#include <stdio.h>

int main() {
    float nota1, nota2, nota3, nota4, media;
    int i;

    printf("=== Escola de Idiomas Língua Viva ===\n");

    for (i = 0; i < 5; i++) {
        printf("\nAluno %d:\n", i + 1);
        printf("Nota da prova 1: ");
        scanf("%f", &nota1);
        printf("Nota da prova 2: ");
        scanf("%f", &nota2);
        printf("Nota da prova 3: ");
        scanf("%f", &nota3);
        printf("Nota da prova 4: ");
        scanf("%f", &nota4);

        media = (nota1 + nota2 + nota3 + nota4) / 4.0;

        printf("Média: %.2f - ", media);
        if (media >= 6.0) {
            printf("Aprovado\n");
        } else {
            printf("Reprovado\n");
        }
    }

    return 0;
}
