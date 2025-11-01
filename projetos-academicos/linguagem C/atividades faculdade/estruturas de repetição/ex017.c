/*Escreva um programa que leia um número inteiro positivo N e imprima todos os números de 1 até N (inclusive), um por linha. Utilize um loop while.

Entrada esperada: Um número inteiro positivo N.

Saída esperada: Os números de 1 a N, cada um em uma nova linha.*/
#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);

    int i = 1;
    while (i <= N) {
        printf("%d\n", i);
        i++;
    }

    return 0;
}