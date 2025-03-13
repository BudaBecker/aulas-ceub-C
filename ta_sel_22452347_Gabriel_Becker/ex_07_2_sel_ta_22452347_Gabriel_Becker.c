#include <stdio.h>

int main(void){
    int qnt_provas;
    float media, pesos_total = 0, notas_total = 0;
    
    printf("Quantas provas o aluno realizou? ");
    scanf("%d", &qnt_provas);

    int pesos[qnt_provas];
    float notas[qnt_provas];

    for (int i = 0 ; i < qnt_provas ; i++){
        printf("\nQual a nota da P%d? ", i+1);
        scanf("%f", &notas[i]);
        printf("Qual o peso da P%d? ", i+1);
        scanf("%d", &pesos[i]);
    }

    for (int i = 0 ; i < qnt_provas ; i++){
        notas_total += pesos[i] * notas[i];
        pesos_total += pesos[i];

    }
    media = notas_total/pesos_total;
    printf("A media do aluno foi: %.2f", media);

    if (media >= 5){
        printf("\nAprovado.");
    }
    else{
        printf("\nReprovado.");
    }
}