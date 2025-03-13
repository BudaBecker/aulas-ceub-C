#include <stdio.h>

int main (void){
    int code;
    
    printf("Descricao do produto: ");
    scanf("%d", &code);
    switch (code)
    {
    case 1:
        printf("Alimento nao-perecivel.");
        break;
    case 2:
        printf("Alimento perecivel.");
        break;
    case 3:
        printf("Vestuario");
        break;
    case 4:
        printf("Limpeza");
        break;
    default:
        printf("codigo invalido.");
        break;
    }
}