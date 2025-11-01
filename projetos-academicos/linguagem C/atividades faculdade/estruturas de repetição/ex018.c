/*Escreva um programa que leia um número inteiro positivo N e imprima uma contagem regressiva a partir de N até 1, um número por linha. Utilize um loop while.

Entrada esperada: Um número inteiro positivo N.

Saída esperada: Os números de N a 1, cada um em uma nova linha.*/
#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);

    while (N >= 1) {
        printf("%d\n", N);
        N--;
    }

    return 0;
}