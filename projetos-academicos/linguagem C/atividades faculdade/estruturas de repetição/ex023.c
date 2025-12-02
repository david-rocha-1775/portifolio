/*Escreva um programa que leia um número inteiro não-negativo N e calcule o seu fatorial (N!). O fatorial de 0 é 1. Utilize um loop for.

Entrada esperada: Um número inteiro não-negativo N.

Saída esperada: O valor de N! no formato "Fatorial de [N]: [valor]".

Por exemplo:

Input	Resultado
5
Fatorial de 5: 120
*/
#include <stdio.h>
int main() {
    int N, i;
    unsigned long long fatorial = 1; // Usar unsigned long long para suportar valores maiores

    // Ler o número inteiro não-negativo N
    scanf("%d", &N);

    // Calcular o fatorial usando um loop for
    for (i = 1; i <= N; i++) {
        fatorial *= i;
    }

    // Imprimir o resultado formatado
    printf("Fatorial de %d: %llu\n", N, fatorial);

    return 0;
}