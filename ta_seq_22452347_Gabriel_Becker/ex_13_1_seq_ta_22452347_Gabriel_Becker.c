#include <stdio.h>

int main (void){

    float pes;
    printf("Unidade em pes: ");
    scanf("%f",&pes);

    printf("%.0f pes em metro = %.4f", pes, pes*0.3048);

}
