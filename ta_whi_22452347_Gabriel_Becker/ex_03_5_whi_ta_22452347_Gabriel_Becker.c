#include <stdio.h>

int main(void){
    float C, final;
    
    do{
        printf("Qual o valor inicial em Celcius? ");
        scanf("%f", &C);
        printf("Qual o valor final em Celcius? ");
        scanf("%f", &final);
        if (C >= final)
            printf("\nValor inicial deve ser MENOR que o valor final!\n\n");
    }while(C > final);
    
    printf("Conversao FAHREINHEIT - CELSIUS\n\n");
    printf("  Celsius:          Fahreinheit:\n");
    
    while(C < final+1){
        printf("   %.2f                   %.2f\n", C, ((9*C)/5) + 32);
        C++;
    }
}