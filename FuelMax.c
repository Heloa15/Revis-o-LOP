#include <stdio.h>

int main() {
    int opcao;
    float litros, preco, total;
    
    printf("\n===Posto FuelMax===\n");
    printf("1 - Gasolina - R$ 5.59 por litro: \n");
    printf("2 - Etanol - R$ 3.79 por litro: \n");
    printf("3 - Diesel - R$ 4.89 por litro: \n");
    printf("4 - Sair\n");
    printf("Escolha o tipo de combustível: (1 a 4)");
    scanf("%d", &opcao);
    
    printf("Digite a quantidade de litro abastecidos: ");
    scanf("%f", &litros);
    
    switch (opcao) {
        case 1: 
            preco = 5.59;
            total = litros * preco;
            printf("Combustível escolhido: Gasolina\n");
            break;
        case 2: 
            preco = 3.79;
            total = litros * preco;
            printf("Combustível escolhido: Etanol\n");
            break;
        case 3: 
            preco = 4.89;
            total = litros * preco;
            printf("Combustível escolhido: Diesel\n");
            break;
        case 4: 
            printf("Saindo....Obrigada(o)!");
            break;
        default: 
            printf("Tipo de combusível inválido.\n");
    }
    printf("Quantidade abastecida: %.2f litros\n", litros);
    printf("Valor total a pagar: R$ %.2f\n", total);
    
    return 0;
}