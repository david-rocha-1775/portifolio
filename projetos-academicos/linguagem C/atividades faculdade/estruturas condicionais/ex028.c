/*Enunciado: Em um reino de fantasia, uma jovem alquimista chamada Elara está aprendendo a catalogar gemas mágicas. Cada gema possui um "potencial arcano", um valor numérico que determina sua raridade e poder. Elara precisa de um programa para automatizar a classificação. A guilda dos alquimistas utiliza a seguinte tabela:

Potencial Arcano menor ou igual a 0: Gema sem poder.

Potencial Arcano de 1 a 10: Comum.

Potencial Arcano de 11 a 30: Incomum.

Potencial Arcano de 31 a 60: Rara.

Potencial Arcano de 61 a 100: Épica.

Potencial Arcano acima de 100: Lendária.

Seu trabalho é criar um programa que leia o potencial arcano de uma gema e exiba sua classificação correta.

Entrada: Um número inteiro representando o potencial arcano da gema.

Saída: O programa deve imprimir uma das seguintes frases, de acordo com a classificação: "Classificacao: Gema sem poder." "Classificacao: Comum." "Classificacao: Incomum." "Classificacao: Rara." "Classificacao: Epica." "Classificacao: Lendaria."*/
#include <stdio.h>
int main() {
    int potencial;

    // Leitura do potencial arcano
    scanf("%d", &potencial);

    // Classificação da gema com base no potencial arcano
    if (potencial <= 0) {
        printf("Classificacao: Gema sem poder.\n");
    } else if (potencial <= 10) {
        printf("Classificacao: Comum.\n");
    } else if (potencial <= 30) {
        printf("Classificacao: Incomum.\n");
    } else if (potencial <= 60) {
        printf("Classificacao: Rara.\n");
    } else if (potencial <= 100) {
        printf("Classificacao: Epica.\n");
    } else {
        printf("Classificacao: Lendaria.\n");
    }

    return 0;
}