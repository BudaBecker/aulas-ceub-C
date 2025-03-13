#include <stdio.h>

void func (int vetor[]){
    for (int i = 0 ; i < 20 ; i++){
        vetor[i] = i*i;
    }
}

int main (void) {
    int vetor[20];
    func(vetor);
}