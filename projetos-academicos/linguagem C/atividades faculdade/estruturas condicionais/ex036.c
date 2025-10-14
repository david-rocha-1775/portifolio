/*Uma agência ambiental precisa de um programa para emitir alertas com base no Índice de Qualidade do Ar (IQA) e na contagem de pólen. A combinação desses fatores determina o nível de alerta para a população.

Regras de Alerta:

Alerta Vermelho: IQA maior que 150.
Alerta Laranja: Se não for Vermelho, IQA maior que 100 OU contagem de pólen maior que 80.
Alerta Amarelo: Se não for Vermelho ou Laranja, IQA maior que 50 OU contagem de pólen maior que 50.
Alerta Verde: Demais casos.
Tarefa: Crie um programa que leia dois valores inteiros, o IQA e a contagem de pólen, e imprima o nível de alerta correspondente. A ordem de verificação deve ser da condição mais grave (Vermelho) para a mais branda (Verde).

Entrada esperada: Dois números inteiros em uma única linha: IQA e pólen.

Saída esperada: Uma das seguintes strings, seguida por uma quebra de linha:

"Alerta Vermelho"
"Alerta Laranja"
"Alerta Amarelo"
"Alerta Verde"*/
#include <stdio.h>
int main() {
    int IQA, polen;
    scanf("%d %d", &IQA, &polen);

    if (IQA > 150) {
        printf("Alerta Vermelho\n");
    } else if (IQA > 100 || polen > 80) {
        printf("Alerta Laranja\n");
    } else if (IQA > 50 || polen > 50) {
        printf("Alerta Amarelo\n");
    } else {
        printf("Alerta Verde\n");
    }

    return 0;
}