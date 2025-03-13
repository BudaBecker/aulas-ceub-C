#include <stdio.h>

int main(void){
    float F = 32;
    printf("Conversao FAHREINHEIT - CELSIUS\n\n");
    printf("  Celsius:          Fahreinheit:\n");
    
    while(F < 53){
        printf("   %.2f                   %.0f\n", 5*(F-32)/9, F);
        F++;
    }
}