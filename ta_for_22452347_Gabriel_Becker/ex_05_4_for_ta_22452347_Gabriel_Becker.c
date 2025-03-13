#include <stdio.h>
#include <stdlib.h>

int main(void){
    printf("       Meters - Feet\n");
    printf("Meters                 Feet\n");
    
    for(int m = 0 ; m <= 100 ; m++){
        
        printf("%dm                %fft\n", m, (float)m * 0.3048);
        
        if(m%20 == 0 && m != 0 && m != 100){
            printf("press ENTER to continue.");
            getche();
            system("cls");
            printf("       Meters - Feet\n");
            printf("Meters                 Feet\n");
        }
    }
}