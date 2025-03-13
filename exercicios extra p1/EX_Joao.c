#include <stdio.h>

char mensagems(int numero){
    if (numero == 27){
        return '.';
    }
    else if (numero == 28){
        return ',';
    }
    else if (numero == 29){
        return '#';
    }
    else if (numero == 30){
        return '!';
    }
    else{
        int valorASCII = 64 + numero;
        return (char)valorASCII;
    }
}

int main(void){
    int decode[2][2] = {{1, -1}, {-2, 3}};
    int codigo[2][9] = {{69, 43, 44, 88, 27, 18, 54, 35, 116}, {49, 35, 39, 59, 20, 17, 41, 30, 87}};
    int mensagem[2][9];
    int linha_decode = sizeof(decode)/sizeof(decode[0]);
    int coluna_decode = sizeof(decode[0])/sizeof(decode[0][0]);
    int coluna_codigo = sizeof(codigo[0])/sizeof(codigo[0][0]);

    for (int i = 0; i < linha_decode; i++) {
        for (int j = 0; j < coluna_codigo; j++) {
            mensagem[i][j] = 0;
            for (int k = 0; k < coluna_decode; k++) {
                mensagem[i][j] += decode[i][k] * codigo[k][j]; 

            }
        }
    }
    for (int i = 0 ; i<2 ; i++){
        for (int j = 0 ; j<9 ; j++){
            printf("%c", mensagems(mensagem[i][j]));
        }
    }
}