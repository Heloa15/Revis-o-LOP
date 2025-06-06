#include <stdio.h>

typedef struct {
    char marca[30];
    int ano;
    int km;
}Carro;

int main() {
    Carro carros[5];
    int i;

    for (i = 0; i < 5; i++) {
        printf("\nCarro %d\n", i + 1);
        printf("Marca: ");
        scanf(" %[^\n]", carros[i].marca);
        printf("Ano: ");
        scanf("%d", &carros[i].ano);
        printf("Quilometragem: ");
        scanf("%d", &carros[i].km);
    }

    printf("\nCarros com mais de 100.000 km:\n");
    for (i = 0; i < 5; i++) {
        if (carros[i].km > 100000) {
            printf("Marca: %s | Ano: %d | Km: %d\n", carros[i].marca, carros[i].ano, carros[i].km);
        }
    }

    return 0;
}
