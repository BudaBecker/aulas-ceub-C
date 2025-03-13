#include <stdio.h>

int main(void){
    int inicio, fim;
    printf("Qual o inicio? ");
    scanf("%d", &inicio);
    printf("Qual o fim? ");
    scanf("%d", &fim);

    if (fim <= inicio){
        printf("O inicio deve ser menor que o fim.");
        return 0;
    }

    for( ; inicio <= fim ; inicio++){
        printf("%d\n", inicio);
    }
}