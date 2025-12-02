/*Enunciado: O Máximo Divisor Comum (MDC) de dois números inteiros A e B é o maior número que divide ambos sem deixar resto.

Tarefa: Escreva um programa que leia dois inteiros positivos A e B. O programa deve usar um laço de repetição for que testa todos os números (i) de 1 até o menor entre A e B. Dentro do laço, use uma estrutura condicional para verificar se i divide ambos A e B (A % i == 0 && B % i == 0). Se dividir, armazene i em uma variável mdc (ela será sobrescrita pelo maior divisor encontrado).

Entrada: Dois inteiros positivos A e B, em linhas separadas.

Saída: Uma única linha: "MDC: X".*/
#include <stdio.h>
int main() {
    int A, B, i, mdc = 1;

    // Ler os dois inteiros positivos A e B
    scanf("%d", &A);
    scanf("%d", &B);

    // Encontrar o menor entre A e B
    int menor = (A < B) ? A : B;

    // Testar todos os números de 1 até o menor entre A e B
    for (i = 1; i <= menor; i++) {
        // Verificar se i divide ambos A e B
        if (A % i == 0 && B % i == 0) {
            mdc = i; // Atualizar o mdc
        }
    }

    // Imprimir o resultado formatado
    printf("MDC: %d\n", mdc);

    return 0;
}