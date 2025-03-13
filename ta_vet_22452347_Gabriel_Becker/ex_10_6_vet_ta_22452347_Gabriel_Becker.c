#include <stdio.h>
#include <string.h>

int main(void){
    char palavra[100];
    printf("Digite a palavra: ");
    gets(palavra);
    
    printf("Palavra inversa: ");
    for (int i = strlen(palavra)-1 ; i >= 0 ; i--){
        printf("%c", palavra[i]);
    }
}