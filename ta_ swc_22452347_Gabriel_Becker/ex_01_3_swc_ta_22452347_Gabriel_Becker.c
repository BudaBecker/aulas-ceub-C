#include <stdio.h>

int main(void){
    int dia;
    do
    {
        printf("Insira o dia da semana (1-7): ");
        scanf("%d",&dia);
        
        switch (dia)
        {
        case 1:
            printf("Domingo - Final de semana.");
            break;
        case 2:
            printf("Segunda-Feira, dia util.");
            break;
        case 3:
            printf("Terca-Feira, dia util.");
            break;
        case 4:
            printf("Quarta-Feira, dia util.");
            break;
        case 5:
            printf("Quinta-Feira, dia util.");
            break;
        case 6:
            printf("Sexta-Feira, dia util.");
            break;
        case 7:
            printf("Sabado - Final de semana.");
            break;
        default:
            printf("Valor invalido.\n");
            break;
        }
    
    }while(dia<1 || dia > 7);
}