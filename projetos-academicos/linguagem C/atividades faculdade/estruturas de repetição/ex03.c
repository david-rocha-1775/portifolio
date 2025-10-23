/*Escreva um programa que solicite ao usuário que digite um número inteiro positivo. O programa deve continuar pedindo o número até que um valor maior que zero seja inserido. Utilize um loop do-while.

Entrada esperada: Uma sequência de números inteiros, terminando com um número positivo.

Saída esperada: A mensagem "Numero positivo lido: [valor]" assim que um número positivo for lido.*/
#include <stdio.h>
int main() {
    int numero;

    // Loop do-while para solicitar um número positivo
    do {
        scanf("%d", &numero);
    } while (numero <= 0);

    // Imprimir o número positivo lido
    printf("Numero positivo lido: %d\n", numero);

    return 0;
}