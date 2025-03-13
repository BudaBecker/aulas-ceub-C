#include <stdio.h>

float volume (int base_maior, int base_menor, int altura, int comprimento){
    return (((base_maior+base_menor)/2)*altura*comprimento);
}

int main (void) {
    int base_maior = 5;
    int base_menor = 5;
    int altura = 3;
    int comprimento = 5;
    
    printf("Volume de %g u.m.", volume(base_maior, base_menor, altura, comprimento));
}