/*Enunciado: Uma empresa de jogos quer dar um bônus em moedas virtuais aos jogadores que atingirem altas pontuações. Você deve criar uma função que calcula o bônus total com base em uma lista de pontuações de várias fases.

Regra: O jogador ganha um bônus de 50 moedas para cada fase em que sua pontuação foi estritamente maior que 1000 pontos. Pontuações de 1000 ou menos não dão bônus.

Tarefa: Crie uma função chamada int calcularBonus(int pontuacoes[], int n). A função recebe um array de inteiros (as pontuações) e um inteiro n (o número de fases, ou seja, o tamanho do array). A função deve usar um laço de repetição para percorrer o array e uma estrutura condicional para somar o bônus total.

Entrada: A função receberá dois parâmetros:

int pontuacoes[]: Um array com as pontuações do jogador.
int n: O número de elementos no array pontuacoes.
Saída: Sua função deve retornar um int com o valor total do bônus (em moedas) acumulado.*/
#include <stdio.h>
int calcularBonus(int pontuacoes[], int n) {
    int bonusTotal = 0;

    // Loop para percorrer as pontuações
    for (int i = 0; i < n; i++) {
        // Verificar se a pontuação é estritamente maior que 1000
        if (pontuacoes[i] > 1000) {
            bonusTotal += 50; // Adicionar 50 moedas ao bônus total
        }
    }

    return bonusTotal; // Retornar o bônus total acumulado
}