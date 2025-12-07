/*Enunciado: A "Conjectura de Collatz" (ou problema 3n+1) é uma famosa sequência matemática. Começando com um número N:

Se N é par, o próximo número é N / 2.
Se N é ímpar, o próximo número é 3 * N + 1.
Repetindo o processo, a conjectura diz que o número eventualmente chegará a 1.

Tarefa: Escreva um programa que leia um inteiro N. O programa deve simular a sequência de Collatz a partir de N até que ela chegue a 1. Você deve contar quantos passos foram necessários e qual foi o valor de pico (o maior número atingido) durante a sequência.

Entrada: Um único inteiro N (1 <= N <= 1000).

Saída: A saída deve ser em duas linhas:

Passos: X
Pico: Y

(Nota: Se N=1, são 0 passos e o pico é 1).*/
#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);

    int passos = 0;
    int pico = N;

    int numero = N;
    while (numero != 1) {
        if (numero % 2 == 0) {
            numero = numero / 2;
        } else {
            numero = 3 * numero + 1;
        }
        if (numero > pico) {
            pico = numero;
        }
        passos++;
    }

    printf("Passos: %d\n", passos);
    printf("Pico: %d\n", pico);

    return 0;
}