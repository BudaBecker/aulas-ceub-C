#include <stdio.h>

int main (void){
    int valores, soma = 0;
    printf("Digite valores positivos (negativo para sair).\n");
    
    do{
        scanf("%d", &valores);
        if (valores > 0){
            soma += valores;
        }
    }while(valores > 0);

    printf("Soma total: %d", soma);
}