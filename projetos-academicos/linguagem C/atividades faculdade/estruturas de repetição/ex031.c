/*Enunciado: Um estatístico precisa calcular a média de uma série de números pares. A entrada de dados termina quando o usuário digita o número 0 (zero).

Tarefa: Escreva um programa que leia uma sequência de números inteiros. O laço de repetição deve parar quando o número lido for 0. Dentro do laço, o programa deve usar uma estrutura condicional para verificar se o número é par (e diferente de zero). Se for, o número deve ser somado a um total e um contador de pares deve ser incrementado.

Caso Especial: Se nenhum número par for digitado (além do 0), o programa deve imprimir "Nenhum numero par".

Entrada: Uma sequência de inteiros, um por linha, terminada por 0.

Saída: Uma única linha: "Media dos pares: XX.XX" (formatado com 2 casas decimais) ou "Nenhum numero par".*/
#include <stdio.h>
int main() {
    int numero;
    int soma = 0;
    int contador = 0;

    while (1) {
        scanf("%d", &numero);
        if (numero == 0) {
            break;
        }
        if (numero % 2 == 0) {
            soma += numero;
            contador++;
        }
    }

    if (contador == 0) {
        printf("Nenhum numero par\n");
    } else {
        double media = (double)soma / contador;
        printf("Media dos pares: %.2f\n", media);
    }

    return 0;
}