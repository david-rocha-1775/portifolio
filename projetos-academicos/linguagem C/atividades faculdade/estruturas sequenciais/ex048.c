/*Numa estação espacial, os aliens usam três tipos de combustível: Zeltrons (Z), Quarks (Q) e Protons (P). As conversões são: 1 Zeltron = 2.5 Quarks, 1 Quark = 3.7 Protons.

IMPORTANTE: Você deve criar uma função chamada converterParaProtons que receba três parâmetros double (zeltrons, quarks, protons) e retorne um double com o total equivalente em Protons.

Entrada: Não há entrada do usuário.

Saída: Sua função deve calcular e retornar o total em Protons.*/
#include <stdio.h>
double converterParaProtons(double zeltrons, double quarks, double protons) {
    return (zeltrons * 2.5 * 3.7) + (quarks * 3.7) + protons;
}
