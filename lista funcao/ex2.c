#include <stdio.h>
#include <ctype.h>

int main (void){
    char letra;
    scanf("%c", &letra);
    printf("%c", toupper(letra));
}