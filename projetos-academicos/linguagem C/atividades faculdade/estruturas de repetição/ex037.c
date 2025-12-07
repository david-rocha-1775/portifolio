/*Escreva um programa que leia um número inteiro positivo N e imprima uma pirâmide de números como no exemplo abaixo para N=4:

1
2 2
3 3 3
4 4 4 4
Utilize loops for aninhados.

Entrada esperada: Um número inteiro positivo N.

Saída esperada: A pirâmide de números.*/
#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d", i);
            if (j < i) {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}