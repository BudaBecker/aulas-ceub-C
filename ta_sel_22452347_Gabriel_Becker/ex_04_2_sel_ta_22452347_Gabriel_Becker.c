#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char gender;
    float ideal_weight, height;

    printf("Qual seu sexo?\nM para mulher e H para homem: ");
    scanf("%c",&gender);
    
    if(gender == 'm' || gender == 'M'){
        printf("Qual sua altura(em cm)? ");
        scanf("%f",&height);
        ideal_weight = ((62.1*height)/100) - 44.7;
    }
    else if(gender == 'h' || gender == 'H'){
        printf("Qual sua altura(em cm)? ");
        scanf("%f",&height);
        ideal_weight = ((72.7*height)/100) - 58;
    }
    else{
        printf("gereno invalido.\n");
        exit(0);
    }

    printf("Seu peso ideal eh %.2f Kg.", ideal_weight);

}