#include <stdio.h>
#include <stdlib.h>

int main(void){
    for (int c = -50 ; c <= 50 ; c++){
        if (c%25 == 0 && c != -50 && c != 50){
            printf("press ENTER to continue.");
            getche();
            system("cls");
        }
        printf("%d Celsius      %.1f Fahrenheit\n", c, (((float)c*9)/5)+32);
    }
}