/*Enunciado: A sequência de Fibonacci (0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55...) contém números pares e ímpares. Queremos um programa que liste apenas os números ímpares dessa sequência.

Tarefa: Escreva um programa que leia um inteiro N. O programa deve calcular os números da sequência de Fibonacci e imprimir os primeiros N números ímpares que encontrar na sequência.

Nota: A sequência começa com 0, 1, 1. O número '1' aparece duas vezes e deve ser contado duas vezes. (Ou seja, para N=2, a saída é "1 1 ").

Entrada: Um único inteiro N (0 <= N <= 30).

Saída: Uma única linha contendo os N primeiros números de Fibonacci ímpares, separados por um espaço. Se N=0, não imprima nada.

Por exemplo:

Input	Resultado
5
1 1 3 5 13 
1
1 
2
1 1 
*/
#include <stdio.h>
int main() {
    int N, count = 0;
    int a = 0, b = 1, next;

    // Ler o inteiro N
    scanf("%d", &N);

    // Gerar a sequência de Fibonacci e imprimir os números ímpares
    while (count < N) {
        next = a + b; // Próximo número na sequência
        a = b;
        b = next;

        // Verificar se o número é ímpar
        if (a % 2 != 0) {
            printf("%d ", a);
            count++;
        }
    }

    printf("\n");
    return 0;
}