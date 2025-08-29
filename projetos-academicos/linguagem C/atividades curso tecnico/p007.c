#include <stdio.h>
#include <stdlib.h>

int main() { 
    char aluno[50], turno[50], turma[50]; int matricula; float nota1, nota2, nota3, media;
    printf("digite o nome do aluno: ");
    scanf("%s", aluno);
    printf("\ndigite o numero da matricula: ");
    scanf("%d", &matricula);    
    printf("\ndigite o turno: ");
    scanf("%s", turno);
    printf("\ndigite a turma: ");
    scanf("%s", turma);
    printf("\ndigite a nota 1: ");
    scanf("%f", &nota1);
    printf("\ndigite a nota 2: ");
    scanf("%f", &nota2);
    printf("\ndigite a nota 3: ");
    scanf("%f", &nota3);
    media = (nota1 + nota2 + nota3) / 3;
    printf("\nNome do aluno: %s", aluno);
    printf("\nNumero da matricula: %d", matricula);
    printf("\nTurno: %s", turno);
    printf("\nTurma: %s", turma);
    printf("\nNota 1: %.1f", nota1);
    printf("\nNota 2: %.1f", nota2);
    printf("\nNota 3: %.1f", nota3);
    printf("\nMedia: %.1f", media);
    return 0;
}