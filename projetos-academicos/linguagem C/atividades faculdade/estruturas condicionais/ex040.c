/*Uma concessionária de rodovias cobra tarifas de pedágio diferentes com base no tipo de veículo e no número de eixos. Para agilizar a cobrança, eles precisam de um sistema que calcule o valor a pagar.

Regras de Tarifa:

A tarifa base é de R$ 4,50 por eixo.
Veículos de passeio (código 'P') têm 5% de desconto sobre o valor total.
Veículos comerciais (código 'C') têm um acréscimo de 10% sobre o valor total.
Motos (código 'M') têm uma tarifa fixa de R$ 3,00, independentemente do número de eixos informado.
Tarefa: Crie um programa que leia o tipo de veículo (um caractere 'P', 'C' ou 'M') e o número de eixos (um inteiro). O programa deve calcular e imprimir o valor final do pedágio.

Entrada esperada: Um caractere V e um inteiro E em uma única linha, representando o tipo do veículo e o número de eixos.

Saída esperada: O valor a pagar, formatado como "Valor a pagar: R$ XX.XX".*/
#include <stdio.h>
int main() {
    char tipoVeiculo;
    int numEixos;
    scanf(" %c %d", &tipoVeiculo, &numEixos);

    //centavos (inteiros) para 100% de precisão.
    long tarifaBaseCentavos = 450; // R$ 4,50
    long valorTotalCentavos;

    if (tipoVeiculo == 'M') {
        valorTotalCentavos = 300; // R$ 3,00
    } else {
        valorTotalCentavos = tarifaBaseCentavos * numEixos;

        if (tipoVeiculo == 'P') {
            // Aplica 5% de desconto (multiplica por 95 e divide por 100)
            // O "+ 50" antes da divisão garante o arredondamento matemático correto.
            valorTotalCentavos = (valorTotalCentavos * 95 + 50) / 100;
        } else if (tipoVeiculo == 'C') {
            // Aplica 10% de acréscimo (multiplica por 110 e divide por 100)
            valorTotalCentavos = (valorTotalCentavos * 110 + 50) / 100;
        }
    }

    // Para exibir, convertemos o total de centavos de volta para reais
    // dividindo por 100.0 (uma divisão de ponto flutuante).
    printf("Valor a pagar: R$ %.2f\n", valorTotalCentavos / 100.0);
    
    return 0;
}