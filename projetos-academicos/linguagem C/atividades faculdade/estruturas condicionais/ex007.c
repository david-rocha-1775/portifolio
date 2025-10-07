/*Enunciado: Um professor precisa automatizar a atribuição de conceitos para seus alunos com base na nota final (de 0 a 100). O sistema de avaliação é rigoroso e segue faixas de pontuação específicas.

Regras de Conceito:

Nota de 90 a 100: Conceito A
Nota de 80 a 89: Conceito B
Nota de 70 a 79: Conceito C
Nota de 60 a 69: Conceito D
Nota abaixo de 60: Conceito F (Reprovado)
Tarefa: Crie uma função chamada atribuirConceito que receba a nota de um aluno (int) e retorne o caractere (char) correspondente ao seu conceito.

A função deve retornar 'A', 'B', 'C', 'D' ou 'F'.
Se a nota for inválida (menor que 0 ou maior que 100), a função deve retornar 'I' (Inválido).
Entrada: A função receberá um parâmetro: int nota.

Saída: Sua função deve retornar um char com o conceito.*/
#include <stdio.h>
char atribuirConceito(int nota) {  
    if (nota < 0 || nota > 100) {
        return 'I'; // Inválido
    }
    if (nota >= 90) {
        return 'A';
    }
    if (nota >= 80) {
        return 'B';
    }
    if (nota >= 70) {
        return 'C';
    }
    if (nota >= 60) {
        return 'D';
    }
    return 'F'; // Reprovado
}