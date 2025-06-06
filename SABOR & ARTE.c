#include <stdio.h>

int main(){
    int pratoPrincipal = 0;
    int sobremesa = 0;
    int bebida = 0;
    int opcao;
    float valorTotal, desconto = 0.0, valorFinal;
    
    do {
        printf("\n----MENU - SABOR & ARTE----\n");
        printf("1. Prato Principal (R$ 40.00)\n");
        printf("2. Sobremesa (R$ 15.00)\n");
        printf("3. Bebida (R$ 10.00)\n");
        printf("4. Finalizar Pedido! \n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);
        
        switch (opcao) {
            case 1:
                pratoPrincipal++;
                valorTotal += 40.00;
                printf("Prato principal adicionado!\n");
                break;
            case 2:
                sobremesa++;
                valorTotal += 15.00;
                printf("Sobremesa adicionada!\n");
                break;
            case 3:
                bebida++;
                valorTotal += 10.00;
                printf("Bebida adicionada!\n");
                break;
            case 4:
                printf("Finalizando Pedido....\n");
                break;
            default: 
                printf("Opção Inválida!\n");
        }
    } while (opcao != 4);
    
    if (pratoPrincipal >= 3) {
        desconto += 0.10;
    }
    if (sobremesa  > 0 && bebida > 0) {
        desconto += 0.05;
    }
    
    valorFinal = valorTotal * (1 - desconto);
    
    printf("\n====RESUMO DO PEDIDO====\n");
    printf("Pratos Principais: %d\n", pratoPrincipal);
    printf("Sobremesas: %d\n", sobremesa);
    printf("Bebidas: %d\n", bebida);
    printf("Valor Total (sem desconto): R$ %.2f\n", valorTotal);
    printf("Desconto aplicado: R$ %.2f\n", desconto * 100);
    printf("Valor final com desconto: R$ %.2f\n", valorFinal);
    
    return 0;
}