/*A Faculdade do Gama (FGA) é conhecida por seu ciclo básico comum, onde os alunos de engenharia têm contato com diversas áreas antes de escolherem sua especialização definitiva. Para ajudar os calouros, foi criado um programa de orientação vocacional simplificado. Ele se baseia nos interesses do aluno em duas grandes áreas: Hardware (interesse em componentes físicos, circuitos, mecânica) e Software (interesse em algoritmos, lógica, abstração).

Crie um programa que leia as notas de interesse do aluno (de 0 a 10) para Hardware e Software e sugira uma engenharia, com base nas regras:

Se Software >= 8 e Hardware <= 5: "Sua vocacao aponta para Engenharia de Software."

Se Hardware >= 8 e Software <= 5: "Sua vocacao aponta para Engenharia Automotiva."

Se Hardware >= 7 e Software >= 7: "Sua vocacao aponta para Engenharia Eletronica."

Se Hardware > 5, Software > 5, mas não se encaixa nas anteriores: "Sua vocacao aponta para Engenharia de Energia."

Para os demais casos: "Continue explorando as materias do Ciclo Basico."

Entrada esperada: Dois números inteiros em uma única linha: H (nota de interesse em Hardware) e S (nota de interesse em Software).

Saída esperada: A mensagem com a sugestão de curso correspondente.*/
#include <stdio.h>
int main() {
    int H, S;
    scanf("%d %d", &H, &S);

    if (S >= 8 && H <= 5) {
        printf("Sua vocacao aponta para Engenharia de Software.\n");
    } else if (H >= 8 && S <= 5) {
        printf("Sua vocacao aponta para Engenharia Automotiva.\n");
    } else if (H >= 7 && S >= 7) {
        printf("Sua vocacao aponta para Engenharia Eletronica.\n");
    } else if (H > 5 && S > 5) {
        printf("Sua vocacao aponta para Engenharia de Energia.\n");
    } else {
        printf("Continue explorando as materias do Ciclo Basico.\n");
    }

    return 0;
}