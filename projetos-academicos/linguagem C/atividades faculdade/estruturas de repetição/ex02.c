/*Escreva um programa que leia um número inteiro positivo N e imprima um triângulo retângulo de asteriscos (*) com N linhas. Na primeira linha, deve haver 1 asterisco, na segunda, 2, e assim por diante, até N asteriscos na última linha. Utilize loops for aninhados.

Entrada esperada: Um número inteiro positivo N.

Saída esperada: O triângulo de asteriscos.*/
#include <stdio.h>
int main() {
    int N, i, j;

    // Ler o número inteiro positivo N
    scanf("%d", &N);

    // Loop para cada linha
    for (i = 1; i <= N; i++) {
        // Loop para imprimir os asteriscos na linha atual
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        // Pular para a próxima linha após imprimir os asteriscos
        printf("\n");
    }

    return 0;
}