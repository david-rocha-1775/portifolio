/*Para se formar em um curso da UnB, um aluno precisa cumprir uma quantidade mínima de créditos em diferentes categorias. Crie um programa que simule a verificação final para o curso de Ciência da Computação. Para se formar, o aluno precisa satisfazer todas as seguintes condições simultaneamente:

Ter no mínimo 130 créditos obrigatórios.

Ter no mínimo 40 créditos optativos.

A soma total de créditos (obrigatórios + optativos) deve ser de no mínimo 200.

O programa deve ler a quantidade de créditos obrigatórios e optativos de um aluno e informar se ele está apto a se formar. Caso não esteja, deve apontar o primeiro motivo encontrado na ordem acima.

Entrada esperada: Dois números inteiros O (créditos obrigatórios) e P (créditos optativos), na mesma linha.

Saída esperada: "Apto para formatura!", "Creditos obrigatorios insuficientes.", "Creditos optativos insuficientes." ou "Total de creditos insuficiente.".*/
#include <stdio.h>
int main() {
    int obrigatorios, optativos;
    scanf("%d %d", &obrigatorios, &optativos);

    if (obrigatorios < 130) {
        printf("Creditos obrigatorios insuficientes.\n");
    } else if (optativos < 40) {
        printf("Creditos optativos insuficientes.\n");
    } else if ((obrigatorios + optativos) < 200) {
        printf("Total de creditos insuficiente.\n");
    } else {
        printf("Apto para formatura!\n");
    }

    return 0;
}