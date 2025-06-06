#include <stdio.h>

int main() {
   
   int ingressos, cliente = 1;
   int pontos;
   
   printf("\n=====Sistema de Pontos - CINEPONTO=====\n");
   
   do {
       printf("\nCliente %d\n", cliente);
       printf("Digite a quantidade de ingressos comprados (0 para sair): ");
       scanf("%d",  &ingressos);
       
       if (ingressos > 0) {
           pontos = ingressos * 10;
           printf("Cliente %d acumulou %d pontos!\n", cliente, pontos);
           cliente++;
       } else if (ingressos < 0) {
           printf("Quantidade inválida. Tente Novamente!\n");
       }
   } while (ingressos != 0);
   
        printf("\nCadastro encerrado. Obrigado(a)!\n");
        
    return 0;
}