/*Enunciado: A secretaria acadêmica de uma universidade precisa de um sistema para automatizar a verificação da situação final dos alunos em uma disciplina. A situação depende da nota final e da frequência.

Tarefa: Crie uma função chamada verificarSituacao que receba a nota final (double, de 0 a 10) e a frequência do aluno (double, de 0 a 100). A função deve retornar um código numérico que represente a situação do aluno:

Retorne 1 para Aprovado (nota >= 6.0 e frequência >= 75%).

Retorne 2 para Reprovado por Falta (frequência < 75%).

Retorne 3 para Recuperação (nota >= 4.0 e nota < 6.0, com frequência >= 75%).

Retorne 4 para Reprovado por Nota (nota < 4.0, com frequência >= 75%).

Atenção: A reprovação por falta tem prioridade sobre as outras condições.

Entrada: A função receberá dois parâmetros: double notaFinal, double frequencia.

Saída: Sua função deve retornar um int com o código da situação acadêmica.*/
#include <stdio.h>
int verificarSituacao(double notaFinal, double frequencia) {
    if (frequencia < 75.0) {
        return 2; // Reprovado por Falta
    }
    if (notaFinal >= 6.0) {
        return 1; // Aprovado
    }
    if (notaFinal >= 4.0) {
        return 3; // Recuperação
    }
    return 4; // Reprovado por Nota
}