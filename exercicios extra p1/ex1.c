#include <stdio.h>
#include <math.h>

int main(void){
    float a,b,c,d,e,x;
    
    printf("Qual o valor de 'a': ");
    scanf("%f", &a);
    printf("Qual o valor de 'b': ");
    scanf("%f", &b);
    printf("Qual o valor de 'c': ");
    scanf("%f", &c);
    
    do{
        printf("Qual o valor de 'd': ");
        scanf("%f", &d);
        if(d<0){
            printf("'d' deve ser >= 0.\n");
        }
    }while(d<0);
    
    printf("Qual o valor de 'e': ");
    scanf("%f", &e);

    printf("\na = %g, b = %g, c = %g, d = %g, e = %g", a, b, c, d, e);

    x = pow(a,3)*(((b+c)/d)+e);
    printf("\nx = %g", x);
}