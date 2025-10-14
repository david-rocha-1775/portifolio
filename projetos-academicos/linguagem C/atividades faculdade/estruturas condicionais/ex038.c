/*Enunciado: O Hospital Universitário de Brasília (HUB) precisa otimizar seu pronto-socorro com um sistema de triagem automático. O programa deve classificar a prioridade de um paciente com base em seus sinais vitais, seguindo o Protocolo de Manchester.

Crie um programa que leia a temperatura (°C), a pressão arterial sistólica (mmHg) e a saturação de oxigênio (%). A classificação de risco é:

VERMELHO (Emergência): Saturação abaixo de 90% OU pressão sistólica abaixo de 80.

LARANJA (Muito Urgente): Se não for VERMELHO, e a temperatura for maior que 39.0°C OU a pressão sistólica for maior que 180.

AMARELO (Urgente): Se não for VERMELHO ou LARANJA, e a temperatura estiver entre 38.0°C e 39.0°C (inclusive).

VERDE (Pouco Urgente): Para todos os outros casos.

Entrada esperada: Três números em uma única linha: um real T (temperatura), um inteiro P (pressão) e um inteiro S (saturação).

Saída esperada: A classificação de risco no formato "Classificacao de Risco: [COR]".*/
#include <stdio.h>
int main() {
    float T;
    int P, S;
    scanf("%f %d %d", &T, &P, &S);

    if (S < 90 || P < 80) {
        printf("Classificacao de Risco: VERMELHO\n");
    } else if (T > 39.0 || P > 180) {
        printf("Classificacao de Risco: LARANJA\n");
    } else if (T >= 38.0 && T <= 39.0) {
        printf("Classificacao de Risco: AMARELO\n");
    } else {
        printf("Classificacao de Risco: VERDE\n");
    }

    return 0;
}