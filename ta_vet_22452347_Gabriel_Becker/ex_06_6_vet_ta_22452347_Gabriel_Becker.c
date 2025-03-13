#include <stdio.h>

int main(void){
    int vet [100];
    
    for(int i = 0 ; i<10 ; i++){
        if (i % 2 == 0 || i == 0){
            vet [i] = 1;
        }
        else{
            vet [i] = 0;
        }
    }
    for(int i = 0 ; i<10 ; i++)
        printf("[%d] ", vet[i]);
}