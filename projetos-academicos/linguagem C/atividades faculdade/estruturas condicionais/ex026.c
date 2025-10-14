/*Escreva um programa que leia três números inteiros distintos e determine qual deles é o maior.

Entrada:

Três números inteiros x, y e z, separados por espaço.

Saída:

Imprima o maior número entre os três lidos.*/
#include <stdio.h>
int main() {
    int x, y, z;

    // Leitura dos três números inteiros
    scanf("%d %d %d", &x, &y, &z);

    // Verificação do maior número
    if (x > y && x > z) {
        printf("%d\n", x);
    } else if (y > x && y > z) {
        printf("%d\n", y);
    } else {
        printf("%d\n", z);
    }

    return 0;
}