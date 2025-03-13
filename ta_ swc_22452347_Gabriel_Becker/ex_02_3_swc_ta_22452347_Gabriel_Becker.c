#include <stdio.h>

int main (void){
    int opt;
    printf("Qual a acao desejada?\n"
           "  1 - Fazer Check-in.\n"
           "  2 - Chamar servico de quarto.\n"
           "  3 - Fazer pedido.\n");
    scanf("%d", &opt);
    
    switch (opt)
    {
    case 1:
        printf("\n\nfazendo check-in...");
        break;
    case 2:
        printf("\n\nchamando servico...");
        break;
    case 3:
        printf("\n\nfazendo pedido...");
        break;
    default:
        break;
    }
}