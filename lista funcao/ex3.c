#include <stdio.h>
#include <math.h>

float hipo(float cateto_1, float cateto_2){
    return (sqrt(pow(cateto_1, 2)+pow(cateto_2, 2)));
}

int main (void) {
    float cateto_1, cateto_2;

    scanf("%f", &cateto_1);
    scanf("%f", &cateto_2);
    printf("%g", hipo(cateto_1, cateto_2));
}