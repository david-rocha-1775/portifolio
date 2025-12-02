/*Enunciado: Um centro de meteorologia precisa analisar dados de um sensor de temperatura. O sensor enviou N medições consecutivas.

Tarefa: Escreva um programa que leia um inteiro N, e em seguida, leia N números reais (as temperaturas). O programa deve calcular e imprimir a temperatura Máxima, a Mínima e a Média das N medições.

Dica: Para encontrar o máximo e o mínimo, leia a primeira temperatura *antes* do laço e a use para inicializar as variáveis max e min.

Entrada: A primeira linha contém um inteiro N (1 <= N <= 1000). As N linhas seguintes contêm, cada uma, um número real (a temperatura).

Saída: A saída deve ser em três linhas, formatada com duas casas decimais:

Maximo: XX.XX
Minimo: XX.XX
Media: XX.XX*/
#include <stdio.h>
int main() {
    int N, i;
    float temp, max, min, sum = 0.0;

    // Ler o número de medições
    scanf("%d", &N);

    // Ler a primeira temperatura para inicializar max e min
    scanf("%f", &temp);
    max = min = temp;
    sum += temp;

    // Ler as N-1 temperaturas restantes
    for (i = 1; i < N; i++) {
        scanf("%f", &temp);
        sum += temp;

        if (temp > max) {
            max = temp;
        }
        if (temp < min) {
            min = temp;
        }
    }

    // Calcular a média
    float media = sum / N;

    // Imprimir os resultados formatados
    printf("Maximo: %.2f\n", max);
    printf("Minimo: %.2f\n", min);
    printf("Media: %.2f\n", media);

    return 0;
}