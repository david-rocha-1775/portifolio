/*Enunciado: Em análise de dados, é comum precisar verificar se uma sequência de medições está ordenada. Queremos saber se uma sequência de números inteiros é "estritamente crescente".

Uma sequência é estritamente crescente se cada elemento for maior que o elemento anterior. Sequências com 0 ou 1 elemento são consideradas estritamente crescentes por definição.

Exemplos:

{1, 5, 10, 20} é estritamente crescente.
{1, 5, 5, 10} não é estritamente crescente (por causa do 5, 5).
{1, 5, 2, 10} não é estritamente crescente (por causa do 5, 2).
Tarefa: Crie uma função chamada int ehEstritamenteCrescente(int array[], int n) que receba um array de inteiros e seu tamanho n. A função deve usar um laço de repetição e uma estrutura condicional para verificar a propriedade.

Saída:

Retorne 1 se a sequência for estritamente crescente.
Retorne 0 se a sequência não for estritamente crescente.*/
#include <stdio.h>
int ehEstritamenteCrescente(int array[], int n) {
    // Sequências com 0 ou 1 elemento são estritamente crescentes
    if (n <= 1) {
        return 1;
    }

    // Loop para verificar se cada elemento é maior que o anterior
    for (int i = 1; i < n; i++) {
        if (array[i] <= array[i - 1]) {
            return 0; // Encontrou um elemento que não é maior que o anterior
        }
    }

    return 1; // Todos os elementos são estritamente crescentes
}