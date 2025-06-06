#include <stdio.h>

int main() {
   float precos[10];
   int i, indiceMaisCaro = 0, indiceMaisBarato = 0;
   float maisCaro;
   float maisBarato;
   
   printf("\n===Loja TechBarato===\n");
   
   for (i = 0; i < 10; i++) {
       printf("Digite o preço do produto %d: R$ ", i + 1);
       scanf("%f", &precos[i]);
   }
   
   maisCaro = precos[0];
   maisBarato = precos[0];
   
   for (i = 1; i < 10; i++) {
      (precos[i] > maisCaro);
            maisCaro = precos[i];
            indiceMaisCaro = i;
    }
        if (precos[i] < maisBarato) {
            maisBarato = precos[i];
            indiceMaisBarato = i;
        }
    


    printf("\nProduto mais caro: Produto %d - R$ %.2f\n", indiceMaisCaro, maisCaro);
    printf("Produto mais barato: Produto %d - R$ %.2f\n", indiceMaisBarato, maisBarato);

    return 0;
}
         
   
    
