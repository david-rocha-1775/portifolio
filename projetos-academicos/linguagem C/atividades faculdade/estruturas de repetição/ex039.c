/*Escreva um programa que leia dois números inteiros positivos, L (linhas) e C (colunas). O programa deve imprimir um retângulo de asteriscos (*) com L linhas e C colunas. Utilize loops for aninhados.

Entrada esperada: Dois números inteiros positivos L e C, separados por espaço.

Saída esperada: Um retângulo de asteriscos com L linhas e C colunas.*/
#include <stdio.h>
int main() {
    int L, C;
    scanf("%d %d", &L, &C);

    for (int i = 0; i < L; i++) {
        for (int j = 0; j < C; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}