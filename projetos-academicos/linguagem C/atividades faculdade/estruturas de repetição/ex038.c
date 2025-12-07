/*Escreva um programa que leia dois números inteiros, a base (B) e o expoente (E), com E >= 0. Calcule B elevado a E (B^E) sem usar a função pow() da biblioteca math.h. Utilize um loop for.

Entrada esperada: Dois números inteiros não-negativos B e E, separados por espaço.

Saída esperada: O resultado de B^E no formato "[B] elevado a [E] = [resultado]". Lembre-se que qualquer número elevado a 0 é 1.*/
#include <stdio.h>
int main() {
    int B, E;
    scanf("%d %d", &B, &E);

    int resultado = 1;
    for (int i = 0; i < E; i++) {
        resultado *= B;
    }

    printf("%d elevado a %d = %d\n", B, E, resultado);

    return 0;
}