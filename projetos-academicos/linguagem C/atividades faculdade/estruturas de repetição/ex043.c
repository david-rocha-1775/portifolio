/*Enunciado: Você precisa de um programa que leia uma sequência de números e some apenas os números positivos (maiores que 0). A leitura deve parar quando o número 0 for digitado.

Tarefa: Escreva um programa que use um laço do-while para ler números inteiros. O laço deve ler o número, e se o número for positivo (> 0), ele deve ser adicionado a um acumulador (soma). O laço deve continuar repetindo while (numero != 0).

Ao final, o programa deve imprimir a soma total.

Entrada: Uma sequência de inteiros, um por linha, terminada por 0.

Saída: Uma única linha: "Soma: X".*/
#include <stdio.h>
int main() {
    int numero;
    int soma = 0;

    do {
        scanf("%d", &numero);
        if (numero > 0) {
            soma += numero;
        }
    } while (numero != 0);

    printf("Soma: %d\n", soma);

    return 0;
}