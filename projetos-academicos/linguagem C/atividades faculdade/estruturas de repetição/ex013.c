/*Enunciado: Precisamos saber quantos dígitos um número inteiro possui.

Tarefa: Escreva um programa que leia um inteiro não-negativo N. O programa deve usar um laço do-while e divisões inteiras por 10 (N = N / 10) para contar quantos dígitos N possui.

Exemplo: Se N=123. 1ª vez: count=1, N=12. 2ª vez: count=2, N=1. 3ª vez: count=3, N=0. O laço para.

Caso Especial: O número 0 tem 1 dígito. O laço do-while é perfeito para isso, pois executa pelo menos uma vez.

Entrada: Um único inteiro N (N >= 0).

Saída: Uma única linha: "Digitos: X".*/
#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);

    int count = 0;
    int num = N;

    // laço do-while para contar os dígitos
    do {
        count++;
        num /= 10;
    } while (num > 0);

    printf("Digitos: %d\n", count);
    return 0;
}