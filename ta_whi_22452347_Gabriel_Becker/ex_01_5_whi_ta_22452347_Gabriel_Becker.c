#include <stdio.h>

int main(void){
    float numeros, soma;
    int num = 0;
    
    printf("Calculadora de numeros reais. (-1 para sair do programa)");

    while(numeros != -1){
        printf("\n%d numero: ", num+1);
        scanf("%f", &numeros);
        if(numeros != -1){
            soma += numeros;
            num++;
        }
    }
    
    num == 0 ? printf("Nenhuma nota inserida.") : printf("\n\n    Media: %f", soma/num);
}