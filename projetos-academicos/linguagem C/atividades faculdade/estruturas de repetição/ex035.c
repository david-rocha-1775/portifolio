/*Enunciado: Um matemático precisa encontrar o próximo número primo após um número N. Um número primo é um número natural maior que 1 que só tem dois divisores: 1 e ele mesmo (ex: 2, 3, 5, 7, 11, 13, 17...).

Tarefa: Escreva um programa que leia um número inteiro N. O programa deve então encontrar e imprimir o primeiro número primo que seja estritamente maior que N.

Dica: Você precisará de um loop externo que começa em N+1 e continua incrementando (N+2, N+3...). Para cada número testado, você precisará de um loop interno para verificar se esse número é primo (ou seja, tente dividi-lo por todos os números de 2 até a raiz quadrada dele).

Entrada: Um único número inteiro N (0 <= N <= 1000).

Saída: Uma única linha no formato: "O proximo primo depois de N e: P", onde N é o número lido e P é o primo encontrado.*/
#include <stdio.h>
#include <math.h>
int eh_primo(int num) {
    if (num <= 1) return 0; // Números menores ou iguais a 1 não são primos
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return 0; // Encontrou um divisor, não é primo
        }
    }
    return 1; // É primo
}
int main() {
    int N;
    scanf("%d", &N);

    int proximo = N + 1;
    while (1) {
        if (eh_primo(proximo)) {
            printf("O proximo primo depois de %d e: %d\n", N, proximo);
            break;
        }
        proximo++;
    }

    return 0;
}