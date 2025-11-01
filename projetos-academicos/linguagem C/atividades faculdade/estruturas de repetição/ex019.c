/*Enunciado: Um programa de design gráfico precisa renderizar um diamante (losango) de asteriscos (*) com base em uma largura máxima ímpar N.

Exemplo (N=5):

  *
 ***
*****
 ***
  *
Tarefa: Escreva um programa que leia um inteiro ímpar N. O programa deve usar laços de repetição aninhados para desenhar as duas metades do diamante. A lógica condicional está na estrutura do programa (um laço para a parte de cima, outro para a de baixo).

Dica: A linha do meio tem N asteriscos e 0 espaços. As linhas acima e abaixo têm (N-2) asteriscos e 1 espaço, etc.

Entrada: Um único inteiro ímpar N (N >= 1).

Saída: O diamante de asteriscos. Cada linha deve terminar com \n.*/
#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);

    // Parte superior do diamante
    for (int i = 0; i < N / 2 + 1; i++) {
        // Imprime espaços
        for (int j = 0; j < (N / 2 - i); j++) {
            printf(" ");
        }
        // Imprime asteriscos
        for (int k = 0; k < (2 * i + 1); k++) {
            printf("*");
        }
        printf("\n");
    }

    // Parte inferior do diamante
    for (int i = N / 2 - 1; i >= 0; i--) {
        // Imprime espaços
        for (int j = 0; j < (N / 2 - i); j++) {
            printf(" ");
        }
        // Imprime asteriscos
        for (int k = 0; k < (2 * i + 1); k++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}