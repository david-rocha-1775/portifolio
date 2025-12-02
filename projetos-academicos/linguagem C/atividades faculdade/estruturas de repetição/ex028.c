/*Enunciado: Em análise de séries temporais, é útil encontrar a duração da "sub-sequência" crescente mais longa (quantos dias seguidos a bolsa subiu, por exemplo).

Tarefa: Escreva um programa que leia um inteiro N, seguido por N inteiros. O programa deve encontrar e imprimir o comprimento da maior sub-sequência de números estritamente crescentes.

Exemplo: Na sequência 1 2 3 1 2 5 6 7 2 3, a maior sub-sequência crescente é 1 2 5 6 7, que tem comprimento 5.

Dica: Você precisará de uma variável para guardar o comprimentoMaximo e outra para o comprimentoAtual. Você também precisará guardar o numeroAnterior para comparar com o numeroAtual.

Entrada: A primeira linha contém um inteiro N (0 <= N <= 1000). As N linhas seguintes contêm, cada uma, um inteiro.

Saída: Um único inteiro representando o comprimento da maior sub-sequência crescente. (Se N=0, a saída é 0).*/
#include <stdio.h>
int main() {
    int N, i;
    int numeroAtual, numeroAnterior;
    int comprimentoAtual = 1, comprimentoMaximo = 0;

    // Ler o número de elementos
    scanf("%d", &N);

    if (N == 0) {
        // Se N for 0, a maior sub-sequência crescente é 0
        printf("0\n");
        return 0;
    }

    // Ler o primeiro número
    scanf("%d", &numeroAnterior);

    // Loop para ler os N-1 números restantes
    for (i = 1; i < N; i++) {
        scanf("%d", &numeroAtual);

        if (numeroAtual > numeroAnterior) {
            // A sequência está crescendo
            comprimentoAtual++;
        } else {
            // A sequência não está mais crescendo
            if (comprimentoAtual > comprimentoMaximo) {
                comprimentoMaximo = comprimentoAtual;
            }
            comprimentoAtual = 1; // Reiniciar o comprimento atual
        }

        numeroAnterior = numeroAtual; // Atualizar o número anterior
    }

    // Verificar no final do loop
    if (comprimentoAtual > comprimentoMaximo) {
        comprimentoMaximo = comprimentoAtual;
    }

    // Imprimir o resultado
    printf("%d\n", comprimentoMaximo);

    return 0;
}