#include <stdio.h>
#include <time.h> //biblioteca desnecessaria
#include <stdlib.h> //biblioteca desnecessaria

//Dado um vetor de 10 numerors int. O usuario digita um numero e o programa identifica se esse numero contem no vetor, quantas vezes
//repete e em quais posicoes. Caso nao tenha o numero digitado, aparecer a mensagem "numero nao encontrado"

int main (void){
    int vetor_numeros[10];
    int posicao[10];
    int numero;
    int repeticoes = 0;
    
    //Populando o vetor com numeros aleatorios de 0 a 10(nao precisa fazer isso, apenas criar um vetor qualquer)
    srand(time(NULL));
    printf("Vetor: ");
    for (int i = 0 ; i < 10 ; i++){
        vetor_numeros[i] = rand() % 11;
        printf("[%d] ", vetor_numeros[i]);
    }
    printf("\n\n");

    //numero de busca
    printf("Qual numero de 0 a 10 deseja buscar? ");
    scanf("%d", &numero); 

    //Rodar por todos os numeros do vetor, e comparalos ao numero que o usuario escolheu.
    //Caso ache, registrar no vetor posicao o indice do vetor e adicionar 1 ao contador (repeticoes)
    for (int i = 0 ; i < 10 ; i++){
        if (numero == vetor_numeros[i]){
            posicao[repeticoes++] = i;
        }
    }

    //Mensagem caso nao tenha nenhum numero igual
    if (repeticoes == 0){
        printf("O numero '%d' nao foi encontrado.", numero);
    }
    else{
        printf("O numero '%d' foi encontrado %d vezes nas posicoes: ", numero, repeticoes);
        for (int i = 0 ; i < repeticoes ; i++){
                printf("%d ", posicao[i]);
            }
        }
    }