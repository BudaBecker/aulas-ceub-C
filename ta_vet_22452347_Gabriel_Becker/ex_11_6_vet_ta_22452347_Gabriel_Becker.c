#include <stdio.h>
#include <string.h>

int main(void){
    char digitos[sizeof(char)];
    printf("Digite qq coisa: ");
    gets(digitos);

    printf("Isso que digitou tem %d caracteres.", strlen(digitos));
}