/*Enunciado: Um palíndromo é um número que é lido da mesma forma da esquerda para a direita e da direita para a esquerda (ex: 121, 55, 1331).

Tarefa: Escreva um programa que leia um inteiro N. O programa deve usar um laço de repetição para "inverter" o número (ex: 123 se torna 321). Após o laço, o programa deve usar uma estrutura condicional para comparar o número original com sua versão invertida e imprimir "SIM" se for um palíndromo, ou "NAO" caso contrário.

Entrada: Um único inteiro N (0 <= N <= 2147483647).

Saída: Uma única linha: "SIM" ou "NAO".*/
#include <stdio.h>
int main() {
    int N, original, invertido = 0, digito;

    // Ler o número inteiro N
    scanf("%d", &N);
    original = N; // Armazenar o valor original para comparação

    // Loop para inverter o número
    while (N > 0) {
        digito = N % 10; // Obter o último dígito
        invertido = invertido * 10 + digito; // Construir o número invertido
        N = N / 10; // Remover o último dígito do número original
    }

    // Comparar o número original com o invertido
    if (original == invertido) {
        printf("SIM\n");
    } else {
        printf("NAO\n");
    }

    return 0;
}
