/*Enunciado: Um analista de dados precisa de um programa que "quebre" um número inteiro em seus dígitos individuais e some separadamente os dígitos que são pares e os que são ímpares.

Tarefa: Escreva um programa que leia um único número inteiro N. O programa deve usar um laço de repetição (como while) e o operador de módulo (%) para extrair cada dígito do número. Dentro do laço, use uma estrutura condicional para verificar se o dígito é par ou ímpar e acumule a soma em duas variáveis separadas.

Entrada: Um único inteiro N (0 <= N <= 2147483647).

Saída: A saída deve ser em duas linhas:

Soma Pares: X
Soma Impares: Y*/
#include <stdio.h>
int main() {
    unsigned int N;
    scanf("%u", &N);

    int soma_pares = 0;
    int soma_impares = 0;

    while (N > 0) {
        int digito = N % 10; // Extrai o último dígito
        if (digito % 2 == 0) {
            soma_pares += digito; // Dígito par
        } else {
            soma_impares += digito; // Dígito ímpar
        }
        N = N / 10; // Remove o último dígito
    }

    printf("Soma Pares: %d\n", soma_pares);
    printf("Soma Impares: %d\n", soma_impares);

    return 0;
}