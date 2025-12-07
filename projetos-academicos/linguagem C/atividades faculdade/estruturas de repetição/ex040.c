/*Enunciado: Um criptógrafo está analisando sequências numéricas em busca de padrões. Ele quer saber se uma sequência contém o padrão "dois-dois", que é definido como um número par seguido imediatamente por outro número par.

Tarefa: Escreva um programa que leia um inteiro N, seguido por N inteiros. O programa deve usar um laço de repetição e manter o estado (o número anterior) para verificar se o padrão "par-par" ocorre em qualquer ponto da sequência.

Entrada: A primeira linha contém um inteiro N (N >= 0). As N linhas seguintes contêm os números da sequência.

Saída: "Padrao 'par-par' detectado." ou "Padrao 'par-par' nao detectado." (Se N < 2, o padrão não é detectado).*/
#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);

    if (N < 2) {
        printf("Padrao 'par-par' nao detectado.\n");
        return 0;
    }

    int numero, anterior;
    int padrao_detectado = 0;

    // Ler o primeiro número
    scanf("%d", &anterior);

    for (int i = 1; i < N; i++) {
        scanf("%d", &numero);
        if (anterior % 2 == 0 && numero % 2 == 0) {
            padrao_detectado = 1;
            break;
        }
        anterior = numero;
    }

    if (padrao_detectado) {
        printf("Padrao 'par-par' detectado.\n");
    } else {
        printf("Padrao 'par-par' nao detectado.\n");
    }

    return 0;
}