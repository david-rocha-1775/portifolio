/*"Trancar o curso" (realizar o Trancamento Geral de Matrícula) é um procedimento que permite ao aluno da UnB suspender suas atividades por um semestre, mas existem regras. A Secretaria de Administração Acadêmica (SAA) precisa de um programa para fazer uma pré-análise dos pedidos.

Desenvolva um programa que leia o número de trancamentos que o aluno já realizou e seu IRA atual (de 0 a 5). A autorização depende das seguintes condições:

Um aluno não pode trancar o curso mais de 2 vezes. Se ele já trancou 2 vezes ou mais, o pedido é negado.

Para o primeiro trancamento, o aluno só precisa ter um IRA maior que 0.

Para o segundo trancamento, o aluno precisa ter um IRA maior ou igual a 2.5.

Se o IRA for 0, o trancamento é negado, pois indica que o aluno ainda não cursou nenhuma matéria.

Entrada esperada: Um número inteiro T (trancamentos já realizados) e um número real I (IRA atual), na mesma linha.

Saída esperada: A saída deve ser "Pedido de Trancamento Aprovado" ou "Pedido de Trancamento Negado".*/
#include <stdio.h>
int main() {
    int trancamentos;
    float ira;
    scanf("%d %f", &trancamentos, &ira);

    if (trancamentos >= 2) {
        printf("Pedido de Trancamento Negado\n");
    } else if (trancamentos == 1) {
        if (ira >= 2.5) {
            printf("Pedido de Trancamento Aprovado\n");
        } else {
            printf("Pedido de Trancamento Negado\n");
        }
    } else { // trancamentos == 0
        if (ira > 0) {
            printf("Pedido de Trancamento Aprovado\n");
        } else {
            printf("Pedido de Trancamento Negado\n");
        }
    }

    return 0;
}