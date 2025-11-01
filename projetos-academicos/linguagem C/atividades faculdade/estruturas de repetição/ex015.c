/*Enunciado: Um pesquisador de estatística precisa analisar sequências numéricas. Ele quer saber quantos números pares existem dentro de um determinado intervalo, incluindo os números de início e fim.

Tarefa: Crie uma função chamada int contarPares(int inicio, int fim) que receba dois números inteiros, inicio e fim. A função deve usar um laço de repetição para verificar cada número no intervalo (inclusive) e usar uma estrutura condicional para contar quantos desses números são pares.

Entrada: A função receberá dois parâmetros:

int inicio: O começo do intervalo.
int fim: O final do intervalo.
Saída: Sua função deve retornar um int contendo a contagem total de números pares encontrados.*/
#include <stdio.h>
int contarPares(int inicio, int fim) {
    int count = 0;
    for (int i = inicio; i <= fim; i++) {
        if (i % 2 == 0) {
            count++;
        }
    }
    return count;
}