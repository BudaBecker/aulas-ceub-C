#include <stdio.h>

int main(void){
    for (int c = -50 ; c <= 50 ; c++){
        printf("%d Celsius      %.1f Fahrenheit\n", c, (((float)c*9)/5)+32);
    }
}