/*Enunciado: Vamos simular um jogo de adivinhação. O computador (o juiz) "pensa" em um número secreto e define um número máximo de tentativas.

Tarefa: Escreva um programa que leia dois inteiros: o número Secreto e o número de Tentativas. Em seguida, use um laço de repetição for para ler os palpites. Para cada palpite, o programa deve usar uma estrutura condicional para responder:

Se o palpite for menor que o secreto: imprima "MAIOR"
Se o palpite for maior que o secreto: imprima "MENOR"
Se o palpite for igual ao secreto: imprima "ACERTOU EM X TENTATIVAS" e o programa deve parar.
Se o laço terminar (acabarem as tentativas) sem o jogador acertar, o programa deve imprimir "PERDEU".

Entrada: A primeira linha contém o Secreto e as Tentativas. As linhas seguintes contêm os palpites.

Saída: Uma linha de feedback para cada palpite e uma linha final (ACERTOU ou PERDEU).*/
#include <stdio.h>
int main() {
    int secreto, tentativas, palpite;
    int acertou = 0; // Flag para indicar se o jogador acertou

    // Ler o número secreto e o número de tentativas
    scanf("%d %d", &secreto, &tentativas);

    // Loop para ler os palpites
    for (int i = 1; i <= tentativas; i++) {
        scanf("%d", &palpite);

        if (palpite < secreto) {
            printf("MAIOR\n");
        } else if (palpite > secreto) {
            printf("MENOR\n");
        } else {
            printf("ACERTOU EM %d TENTATIVAS\n", i);
            acertou = 1; // Jogador acertou
            break; // Sair do loop
        }
    }

    // Se o jogador não acertou após todas as tentativas
    if (!acertou) {
        printf("PERDEU\n");
    }

    return 0;
}