/*Enunciado: Uma fábrica produz peças de metal. Um lote só é "APROVADO" se todas as peças dentro dele estiverem dentro do padrão de qualidade. O padrão exige que cada peça tenha um peso entre 100.0g e 110.0g (inclusive).

Se pelo menos uma peça estiver fora dessa faixa, o lote inteiro é "REPROVADO".

Tarefa: Escreva um programa que primeiro leia um inteiro N, (a quantidade de peças no lote). Em seguida, o programa deve ler N números reais (os pesos das peças). Ao final, o programa deve imprimir "Lote APROVADO" ou "Lote REPROVADO".

Entrada: A primeira linha contém um inteiro N (1 <= N <= 100). As N linhas seguintes contêm, cada uma, um número real (o peso da peça).

Saída: Uma única linha: "Lote APROVADO" ou "Lote REPROVADO".*/
#include <stdio.h>
int main() {
    int N, i;
    float peso;
    int aprovado = 1; // Variável para controlar se o lote está aprovado

    // Ler a quantidade de peças no lote
    scanf("%d", &N);

    // Loop para ler os pesos das peças
    for (i = 0; i < N; i++) {
        scanf("%f", &peso);
        // Verificar se o peso está fora do padrão
        if (peso < 100.0 || peso > 110.0) {
            aprovado = 0; // Marcar como reprovado
        }
    }

    // Imprimir o resultado final
    if (aprovado) {
        printf("Lote APROVADO\n");
    } else {
        printf("Lote REPROVADO\n");
    }

    return 0;
}