/*Enunciado: Na teoria dos números, um número é classificado com base na soma de seus divisores próprios (todos os divisores positivos do número, exceto ele mesmo).

É Perfeito se a soma dos divisores for igual ao próprio número (Ex: 6. Divisores: 1, 2, 3. Soma = 6).
É Abundante se a soma dos divisores for maior que o número (Ex: 12. Divisores: 1, 2, 3, 4, 6. Soma = 16).
É Deficiente se a soma dos divisores for menor que o número (Ex: 10. Divisores: 1, 2, 5. Soma = 8).
Tarefa: Escreva um programa que leia um inteiro N. O programa deve usar um laço de repetição para encontrar e somar todos os divisores próprios de N. Após o laço, deve usar uma estrutura condicional para classificar e imprimir se N é "Perfeito", "Abundante" ou "Deficiente".

Entrada: Um único inteiro N (1 <= N <= 10000).

Saída: Uma única linha no formato: "O numero N e X", onde N é o número lido e X é a classificação.*/
#include <stdio.h>
int main() {
    int N, somaDivisores = 0;

    // Ler o número N
    scanf("%d", &N);

    // Loop para encontrar e somar os divisores próprios de N
    for (int i = 1; i < N; i++) {
        if (N % i == 0) {
            somaDivisores += i; // Adicionar o divisor à soma
        }
    }

    // Classificar o número com base na soma dos divisores
    if (somaDivisores == N) {
        printf("O numero %d e Perfeito\n", N);
    } else if (somaDivisores > N) {
        printf("O numero %d e Abundante\n", N);
    } else {
        printf("O numero %d e Deficiente\n", N);
    }

    return 0;
}