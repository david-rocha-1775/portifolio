/*Enunciado: Uma transportadora calcula o valor do frete com base na região de destino. Para otimizar o processo, eles precisam de uma função que retorne o valor do frete a partir de um código de região.

Tarefa: Crie uma função chamada calcularFrete que receba o código da região de destino (int) e retorne o valor do frete (double).

A tabela de fretes é a seguinte:

Código 1: Região Norte - Frete R$ 55,00

Código 2: Região Nordeste - Frete R$ 48,50

Código 3: Região Centro-Oeste - Frete R$ 37,80

Código 4: Região Sudeste - Frete R$ 25,00

Código 5: Região Sul - Frete R$ 32,40

Para qualquer outro código, o frete é considerado inválido e a função deve retornar 0.0.

Entrada: A função receberá um único parâmetro: int codigoRegiao.

Saída: Sua função deve retornar um double com o valor do frete.*/
#include <stdio.h>
double calcularFrete(int codigoRegiao) {
    switch (codigoRegiao) {
        case 1:
            return 55.00;
        case 2:
            return 48.50;
        case 3:
            return 37.80;
        case 4:
            return 25.00;
        case 5:
            return 32.40;
        default:
            return 0.0; // Código inválido
    }
}