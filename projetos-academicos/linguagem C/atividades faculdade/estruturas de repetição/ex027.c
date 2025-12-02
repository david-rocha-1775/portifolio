/*Enunciado: Vamos criar um jogo de adivinhação. O programa deve primeiro ler um número secreto. Em seguida, o jogador deve tentar adivinhar.

Tarefa: Escreva um programa que leia um inteiro Secreto. Em seguida, use um laço do-while para ler os Palpites do jogador. O jogador deve dar pelo menos um palpite.

Dentro do laço, use uma estrutura condicional para imprimir "MAIOR" (se o palpite for menor que o secreto) ou "MENOR" (se o palpite for maior que o secreto). O laço deve continuar while (Palpite != Secreto).

Quando o jogador acertar, o laço termina e o programa deve imprimir "Acertou!".

Entrada: O primeiro inteiro é o Secreto. As linhas seguintes são os Palpites, até o acerto.

Saída: "MAIOR" ou "MENOR" para cada palpite errado, e "Acertou!" no final.

Por exemplo:

Input	Resultado
50
10
60
50
MAIOR
MENOR
Acertou!
10
10
Acertou!
*/
#include <stdio.h>
int main() {
    int secreto, palpite;

    // Ler o número secreto
    scanf("%d", &secreto);

    // Loop para ler os palpites do jogador
    do {
        scanf("%d", &palpite);

        if (palpite < secreto) {
            printf("MAIOR\n");
        } else if (palpite > secreto) {
            printf("MENOR\n");
        }
    } while (palpite != secreto);

    // Jogador acertou
    printf("Acertou!\n");

    return 0;
}