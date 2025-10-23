/*Enunciado: Em uma eleição simples com 3 candidatos (identificados pelos números 1, 2 e 3), você precisa apurar os votos. Qualquer voto que não seja 1, 2 ou 3 é considerado "Nulo".

Tarefa: Escreva um programa que leia um inteiro N (o número total de eleitores). Em seguida, leia N votos (inteiros). O programa deve contar quantos votos cada candidato (1, 2, 3) recebeu e quantos votos Nulos foram registrados.

Entrada: A primeira linha contém um inteiro N (1 <= N <= 1000). As N linhas seguintes contêm, cada uma, um inteiro (o voto).

Saída: A saída deve ser em quatro linhas:

Candidato 1: X
Candidato 2: Y
Candidato 3: Z
Nulos: W*/
#include <stdio.h>
int main() {
    int N, voto;
    int contador1 = 0, contador2 = 0, contador3 = 0, contadorNulos = 0;

    // Ler o número total de eleitores
    scanf("%d", &N);

    // Loop para ler os votos
    for (int i = 0; i < N; i++) {
        scanf("%d", &voto);
        // Contar os votos para cada candidato ou nulos
        if (voto == 1) {
            contador1++;
        } else if (voto == 2) {
            contador2++;
        } else if (voto == 3) {
            contador3++;
        } else {
            contadorNulos++;
        }
    }

    // Imprimir os resultados
    printf("Candidato 1: %d\n", contador1);
    printf("Candidato 2: %d\n", contador2);
    printf("Candidato 3: %d\n", contador3);
    printf("Nulos: %d\n", contadorNulos);

    return 0;
}