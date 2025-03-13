#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main(void){
    int mat_dist[7][7] = {{0, 2, 11, 6, 15, 11, 1}, {2, 0, 7, 12, 4, 2, 15}, {11, 7, 0, 11, 8, 3, 13},{6, 12, 11, 0, 10, 2, 1}, 
                          {15, 4, 8, 10, 0, 5, 13}, {11, 2, 3, 2, 5, 0, 14}, {1, 15, 13, 1, 13, 14, 0}};
    char cidades[7][15] = {{"Osgliath"}, {"Minas Tirith"}, {"Edoras"}, {"Isengard"}, {"Esgaroth"}, {"The Shire"}, {"Valfenda"}};
    int origem, destino;

    printf("Qual sua cidade de origem?\nOsgliath - 0\nMinas Tirith - 1\nEdoras - 2\nIsengard - 3\nEsgaroth - 4\nThe Shire - 5\nValfenda - 6\n");
    scanf("%d", &origem);
    
    printf("\nQual seu destino?\nOsgliath - 0\nMinas Tirith - 1\nEdoras - 2\nIsengard - 3\nEsgaroth - 4\nThe Shire - 5\nValfenda - 6\n");
    scanf("%d", &destino);

    printf("\nTempo entre as cidades: %d", mat_dist[origem][destino]);
}