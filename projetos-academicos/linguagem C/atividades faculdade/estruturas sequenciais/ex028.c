/*Escreva um programa que transforme números decimais em hexadecimal. Seu programa deve ler 5 números inteiros e para cada um deles deve imprimir sua representação em código hexadecimal. A função responsável pela transformação deve chamar hexadecimal e receber como parâmetro um número inteiro. 

Entrada
A entrada consiste de 5 linhas, com cada uma contendo 1 número a≥0
 inteiro.

Saída
Para cada número, imprima sua representação em hexadecimal no formato 0x[numero em hexadecimal]*/
#include <stdio.h>
void hexadecimal(int num){
    printf("0x%X\n", num);
};
int main(){
    int num, i;
    for(i=0; i<5; i++){
        scanf("%d", &num);
        hexadecimal(num);
    }
    return 0;
}