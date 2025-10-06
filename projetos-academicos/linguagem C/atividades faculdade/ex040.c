/*Um banco mágico oferece juros compostos especiais. Dado um capital inicial, taxa de juros mensal e número de meses, calcule o montante final usando a fórmula: M = C × (1 + i)^t

IMPORTANTE: Você deve criar uma função chamada calcularMontante que receba três parâmetros double (capital, taxa, tempo) e retorne um double com o montante final.

Entrada: Não há entrada do usuário.

Saída: Sua função deve calcular e retornar o montante final.*/
#include <stdio.h>
#include <math.h>
double calcularMontante(double capital, double taxa, double tempo) {
    return capital * pow((1 + taxa), tempo);
}