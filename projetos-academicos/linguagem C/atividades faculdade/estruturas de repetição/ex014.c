/*Enunciado: Um professor precisa de um programa rápido para contar quantos alunos foram aprovados e reprovados em sua turma. Ele não sabe o número exato de alunos, então ele digitará as notas uma a uma.

Para sinalizar o fim da entrada de dados, ele digitará um número negativo (por exemplo, -1).

Tarefa: Escreva um programa que leia uma sequência de notas (números reais). O programa deve parar de ler quando uma nota negativa for inserida. O programa deve contar quantas notas foram de "Aprovados" (nota >= 5.0) e quantas foram de "Reprovados" (nota < 5.0).

Nota: O valor negativo (sentinela) não deve ser contado como uma nota (nem como aprovado, nem como reprovado).

Entrada: Uma sequência de números reais, um por linha. A sequência termina quando um número < 0 é inserido.

Saída: A saída deve ser em duas linhas:

Aprovados: X
Reprovados: Y*/
#include <stdio.h>
int main() {
    float nota;
    int aprovados = 0;
    int reprovados = 0;

    while (1) {
        scanf("%f", &nota);
        if (nota < 0) {
            break; // sai do laço se a nota for negativa
        }
        if (nota >= 5.0) {
            aprovados++;
        } else {
            reprovados++;
        }
    }

    printf("Aprovados: %d\n", aprovados);
    printf("Reprovados: %d\n", reprovados);

    return 0;
}