#include <stdio.h>

int main(void){
    float compra, venda;
    
    printf("Qual foi o preco de compra? ");
    scanf("%f", &compra);
    printf("Qual foi o preco de venda? ");
    scanf("%f", &venda);

    if (venda-compra > 0){
        printf("Compra: %g\nVenda: %g\nLucro: +%g", compra, venda, venda-compra);
    }
    else if (venda == compra){
        printf("Compra: %g\nVenda: %g\nOs valores sao iguais.", compra, venda);
    }
    else{
        printf("Compra: %g\nVenda: %g\nPrejuizo: %g", compra, venda, venda-compra);
    }
}