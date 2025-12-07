/*Escreva um programa que leia um número inteiro positivo N e calcule a soma de todos os números inteiros de 1 até N (inclusive). Utilize um loop for.

Entrada esperada: Um número inteiro positivo N.

Saída esperada: A soma dos números de 1 a N no formato "Soma: [valor]".*/
#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);

    int soma = 0;
    for (int i = 1; i <= N; i++) {
        soma += i;
    }

    printf("Soma: %d\n", soma);

    return 0;
}