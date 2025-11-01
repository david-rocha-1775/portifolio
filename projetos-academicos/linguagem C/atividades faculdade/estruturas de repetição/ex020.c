/*Enunciado: Além do triângulo retângulo padrão, artistas ASCII também precisam de sua versão alinhada à direita (invertida horizontalmente).

Tarefa: Escreva um programa que leia um inteiro N. O programa deve usar laços de repetição aninhados para imprimir o triângulo. O laço externo controla as linhas (de 1 a N). Para cada linha, o programa deve usar laços internos para imprimir a quantidade correta de espaços (para o alinhamento) e, em seguida, a quantidade correta de asteriscos.

Exemplo (N=4):

   *
  **
 ***
****
Dica: Na linha 1, são (N-1) espaços e 1 asterisco. Na linha 2, são (N-2) espaços e 2 asteriscos...

Entrada: Um único inteiro N (N >= 1).

Saída: N linhas, formando o triângulo de asteriscos alinhado à direita. Cada linha deve terminar com uma quebra de linha (\n).*/
#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        // Imprime espaços
        for (int j = 0; j < N - i; j++) {
            printf(" ");
        }
        // Imprime asteriscos
        for (int k = 0; k < i; k++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}