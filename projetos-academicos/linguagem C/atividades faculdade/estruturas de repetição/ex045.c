/*Escreva um programa que leia um número inteiro N e imprima a tabuada de multiplicação desse número, do 1 ao 10. Utilize um loop for.

Entrada esperada: Um número inteiro N.

Saída esperada: A tabuada de N no formato "[N] x [i] = [resultado]", uma linha para cada multiplicação de 1 a 10.*/
#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);

    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", N, i, N * i);
    }

    return 0;
}