#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

//String aleatoria de 10 letras, busca uma letra aleatoria e diz quantas vezes aparece e em qual posicao.

int main(void){
    char string[40];
    int posicao[40];
    int repeticoes = 0;
    char letra;

    srand(time(NULL));
    printf("String: \n");
    for (int i = 0 ; i < 40 ; i++){
        string[i] = (rand()%26) + 97;
        printf("%c ", string[i]);
    }
    printf("\n\n");
    
    printf("Qual letra deseja buscar? ");
    scanf("%c", &letra);
    letra = tolower(letra);

    for (int i = 0 ; i < 40 ; i++){
        if (letra == string[i]){
            posicao[repeticoes++] = i;
        }
    }

    if (repeticoes == 0){
        printf("A letra '%c' nao foi encontrada.", toupper(letra));
    }
    else{
        printf("A letra '%c' foi encontrada %d vezes nas posicoes: ", toupper(letra), repeticoes);
        for (int i = 0 ; i < repeticoes ; i++){
                printf("%d ", posicao[i]);
            }
        }
}