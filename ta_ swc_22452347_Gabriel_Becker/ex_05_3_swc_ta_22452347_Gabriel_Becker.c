#include <stdio.h>
#include <ctype.h>

int main(void){
    
    char g, gender;
    float altura;
    
    printf("Calculadora peso ideal.\n Qual seu sexo? (M ou F) ");
    g = getchar();
    gender = tolower(g);
    printf("Qual sua altura? ");
    scanf("%f", &altura);
    
    switch (gender)
    {
    case 'm':
        printf("Peso ideal: %f", 52 + (0.75 * (altura - 152.4)));
        break;
    case 'f':
        printf("Peso ideal: %f", 52 + (0.67 * (altura - 152.4)));
        break;
    }

}