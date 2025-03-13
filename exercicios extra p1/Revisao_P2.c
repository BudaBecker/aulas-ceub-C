#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define cubo(x) (x*x*x)

int main (void){
    char vetor[40];
    char vetor_2[40];
    int i, base;
    gets(vetor); //"scanf" para strings
    strlen(vetor); //int para tamanho do vetor
    puts(vetor); //"printf" apenas para strings (tem um \n no final)
    strcpy(vetor, vetor_2); //strcpy(destino, origem) copia uma string para outra.
    strcat(vetor, vetor_2); //concatenacao de vetores no 'primeiro vetor'
    strcmp(vetor, vetor_2); //Compara duas strings e retorna 0 caso str1=str2, 1 caso str1<str2 e -1 caso str1>str2
    atoi(gets(vetor)); //retorna int para string de numeros
    atol(gets(vetor)); //retorna long int para string de numeros
    atof(gets(vetor)); //retorna double para string de numeros
    itoa(i, vetor, base); //recebe um int, um vetor(onde vai ficar o valor) e a base
    ltoa(i, vetor, base); //recebe um long int, um vetor(onde vai ficar o valor) e a base
}