#include <stdio.h>
#include <string.h>

char concat (char *str_return, char str1[], char str2[]){
    for(int i = 0 ; i < strlen(str1) ; i++){
        str_return[i] = str1[i];
    }
    for(int j = strlen(str1) ; j < strlen(str1)+strlen(str2) ; j++){
        str_return[j] = str2[j-strlen(str1)];
    }
    str_return[strlen(str1)+strlen(str2)] = '\0';
}

int main (void) {
    char string_1[] = "banana";
    char string_2[] = "maracuja";
    char string_concat[20];

    concat(string_concat, string_1, string_2);

    printf("strcat: %s", string_concat);
    //printf("strcpy: %s", copy(string_1, string_2));
    //printf("strcmp: %s", comp(string_1, string_2));
}