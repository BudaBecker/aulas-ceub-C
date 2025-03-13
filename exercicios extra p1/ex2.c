#include <stdio.h>
#include <math.h>

int main(void){
    float x1, x2, x3;

    scanf("%f", &x1);
    scanf("%f", &x2);
    scanf("%f", &x3);

    printf("Result = %g", pow((x1+3),4) + pow((x1*x2),3));
}