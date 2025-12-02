/*Enunciado: Qualquer inteiro maior que 1 pode ser expresso unicamente como um produto de números primos.

Exemplo: 100 = 2 * 2 * 5 * 5.

Tarefa: Escreva um programa que leia um inteiro N (N > 1). O programa deve usar laços de repetição aninhados (um for e um while) para encontrar e imprimir todos os fatores primos de N.

Dica: Use um for que testa divisores (d) começando em 2. Dentro dele, use um while para verificar (e imprimir) *quantas vezes* d divide N (while (N % d == 0)).

Entrada: Um único inteiro N (1 < N <= 10000).

Saída: Uma única linha no formato: "Fatores: D1 D2 D3 ... " (com um espaço após cada fator).

Por exemplo:

Input	Resultado
100
Fatores: 2 2 5 5 
45
Fatores: 3 3 5 
7
Fatores: 7 
*/
#include <stdio.h>
int main() {
    int N, d;

    // Ler o inteiro N
    scanf("%d", &N);

    printf("Fatores: ");

    // Testar divisores d começando em 2
    for (d = 2; d <= N; d++) {
        // Verificar quantas vezes d divide N
        while (N % d == 0) {
            printf("%d ", d);
            N /= d; // Reduzir N dividindo por d
        }
    }

    printf("\n");
    return 0;
}