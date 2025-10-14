/*Faça um programa que leia três notas de um aluno (de 0 a 10) e calcule a média. Com base na média, o programa deve imprimir a situação do aluno: "Aprovado" (média >= 7), "Recuperação" (média >= 5 e < 7) ou "Reprovado" (média < 5).

Entrada:

Três números de ponto flutuante n1, n2 e n3 representando as notas.

Saída:

Imprima a situação do aluno, seguida pela média com duas casas decimais.*/
#include <stdio.h>
int main() {
    float n1, n2, n3, media;

    // Leitura das três notas
    scanf("%f %f %f", &n1, &n2, &n3);

    // Cálculo da média
    media = (n1 + n2 + n3) / 3.0;

    // Verificação da situação do aluno
    if (media >= 7.0) {
        printf("Aprovado\n%.2f\n", media);
    } else if (media >= 5.0) {
        printf("Recuperacao\n%.2f\n", media);
    } else {
        printf("Reprovado\n%.2f\n", media);
    }

    return 0;
}