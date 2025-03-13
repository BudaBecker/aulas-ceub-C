#include <stdio.h>
#include <stdbool.h>


int main(void){
    int codigo_produto;
    float total = 0;
    printf("Registro de caixa... Passe o codigo do produto... (-1 para finalizar a compra)\n");
    
    while (true)
    {
        printf("\n\nCodigo produto: ");
        scanf("%d", &codigo_produto);
        if (codigo_produto == -1){
            break;
        }
        switch(codigo_produto){
            case 100:
                total += 1.59;
                printf("  R$: 1,59 - Detergente.\ntotal: %.2f",total);
                break;
            case 101:
                total += 4.59;
                printf("  R$: 4,59 - Esponja.\ntotal: %.2f",total);
                break;
            case 102:
                total += 1.79;
                printf("  R$: 1,79 - La de aco.\ntotal: %.2f",total);
        }
    }
    printf("\n Total da compra: R$: %.2f",total);
}