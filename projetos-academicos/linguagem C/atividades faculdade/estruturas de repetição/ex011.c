/*Enunciado: "Run-Length Encoding" (RLE) é um algoritmo de compressão simples. Ele funciona substituindo sequências de caracteres repetidos por uma única ocorrência do caractere e o número de suas repetições.

Exemplo: AAAABBBCCDAA se torna A4B3C2D1A2.

Tarefa: Escreva um programa que leia um inteiro N, seguido por N caracteres. O programa deve usar um laço de repetição for para ler os caracteres. Você precisará manter o "estado" (o caractere anterior e a contagem atual).

Dentro do laço, use uma condicional: se o caractere atual for igual ao anterior, aumente a contagem. Se for diferente, imprima o caractere anterior e sua contagem, e reinicie a contagem para 1 com o novo caractere.

Desafio: O laço só imprime quando o caractere *muda*. O último grupo de caracteres não será impresso dentro do laço. Você deve imprimir o último grupo *após* o laço terminar.

Entrada: Um inteiro N (N > 0), seguido por N caracteres (um por linha).

Saída: Uma única linha com a string codificada.*/

#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);

    char prevChar, currChar;
    int count = 0;

    // lê o primeiro caractere
    scanf(" %c", &prevChar);
    count = 1;

    for (int i = 1; i < N; i++) {
        scanf(" %c", &currChar);
        if (currChar == prevChar) {
            count++;
        } else {
            printf("%c%d", prevChar, count);
            prevChar = currChar;
            count = 1;
        }
    }

    // mostra o último grupo
    printf("%c%d\n", prevChar, count);

    return 0;
}