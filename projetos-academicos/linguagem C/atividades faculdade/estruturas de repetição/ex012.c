/*Enunciado: Em ciência da computação, "Peso de Hamming" é o número de bits '1' na representação binária de um número.

Exemplo: O número 13 em binário é 1101. Ele tem três bits '1'.

Tarefa: Escreva um programa que leia um inteiro N. O programa deve usar um laço de repetição e o operador de módulo (% 2) e divisão (/ 2) para converter o número para binário, bit a bit. Use uma estrutura condicional dentro do laço para contar quantos desses bits são '1'.

Entrada: Um único inteiro N (N >= 0).

Saída: Uma única linha no formato: "Bits '1': X".*/
#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);

    int count = 0;
    int num = N;

    // laço para contar os bits '1'
    while (num > 0) {
        if (num % 2 == 1) {
            count++;
        }
        num = num / 2;
    }

    printf("Bits '1': %d\n", count);
    return 0;
}