/*O "PIE" é uma matéria fundamental na FGA, onde os alunos desenvolvem um projeto prático em grupo. A avaliação final depende de três notas: Técnica (qualidade do projeto), Gestão (organização e trabalho em equipe) e Apresentação (defesa para a banca). Para ser aprovado, o grupo precisa atingir as notas mínimas em TODAS as áreas.

Crie um programa que leia as três notas do grupo e determine se ele foi aprovado. As regras de aprovação são:

Nota Técnica: maior ou igual a 6.0

Nota de Gestão: maior ou igual a 5.0

Nota da Apresentação: maior ou igual a 7.0

Se o grupo não atingir a nota mínima em alguma das áreas, ele é reprovado. O programa deve informar o status final.

Entrada esperada: Três números reais em uma única linha: T (Técnica), G (Gestão) e A (Apresentação).

Saída esperada: A saída deve ser "Grupo Aprovado!" ou "Grupo Reprovado.".*/
#include <stdio.h>
int main()
{
    float tecnica, gestao, apresentacao;
    scanf("%f %f %f", &tecnica, &gestao, &apresentacao);

    if (tecnica >= 6.0 && gestao >= 5.0 && apresentacao >= 7.0){
        printf("Grupo Aprovado!\n");
    }
    else{
        printf("Grupo Reprovado.\n");
    }

    return 0;
}