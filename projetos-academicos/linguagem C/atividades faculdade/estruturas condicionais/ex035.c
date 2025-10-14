/*Enunciado: Uma oficina mecânica precisa de um sistema rápido para recomendar o tipo de pneu correto para um veículo. A recomendação depende do tipo de terreno predominante onde o cliente dirige e da estação do ano.

Tarefa: Crie uma função chamada selecionarPneu que receba o tipo de terreno (char: 'U' para Urbano, 'R' para Rural) e a estação do ano (char: 'V' para Verão, 'I' para Inverno). A função deve retornar um código numérico para o tipo de pneu recomendado.

As regras de recomendação são:

Retorne 1 para Pneu de Verão (Urbano, Verão).

Retorne 2 para Pneu All-Season (Urbano, Inverno).

Retorne 3 para Pneu Off-Road (Rural, Verão).

Retorne 4 para Pneu Misto (Rural, Inverno).

Retorne 0 se qualquer uma das entradas for inválida.

Entrada: A função receberá dois parâmetros: char tipoTerreno, char estacao.

Saída: Sua função deve retornar um int com o código do pneu.*/
#include <stdio.h>
int selecionarPneu(char tipoTerreno, char estacao) {
    if (tipoTerreno == 'U' && estacao == 'V') {
        return 1; // Pneu de Verão
    } else if (tipoTerreno == 'U' && estacao == 'I') {
        return 2; // Pneu All-Season
    } else if (tipoTerreno == 'R' && estacao == 'V') {
        return 3; // Pneu Off-Road
    } else if (tipoTerreno == 'R' && estacao == 'I') {
        return 4; // Pneu Misto
    } else {
        return 0; // Entrada inválida
    }
}