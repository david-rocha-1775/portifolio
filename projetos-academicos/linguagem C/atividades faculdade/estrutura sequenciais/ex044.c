/*Para calcular a velocidade de escape de um planeta, use a fórmula: v = √(2 * G * M / R), onde G = 6.674e-11 é a constante gravitacional, M é a massa do planeta (kg), R é o raio (m).

IMPORTANTE: Você deve criar uma função chamada calcularVelocidadeEscape que receba dois parâmetros double (massa, raio) e retorne um double com a velocidade de escape em m/s.

Entrada: Não há entrada do usuário.

Saída: Sua função deve calcular e retornar a velocidade de escape.*/
#include <stdio.h>
#include <math.h>
double calcularVelocidadeEscape(double massa, double raio) {
    const double G = 6.674e-11;
    return sqrt((2 * G * massa) / raio);
}
