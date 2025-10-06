/*Um navegador espacial precisa calcular a distância euclidiana tridimensional entre duas coordenadas no espaço.

IMPORTANTE: Você deve criar uma função chamada calcularDistancia que receba seis parâmetros double (x1, y1, z1, x2, y2, z2) e retorne um double com a distância entre os pontos.

Entrada: Não há entrada do usuário.

Saída: Sua função deve calcular e retornar a distância euclidiana.*/
#include <stdio.h>
#include <math.h>
double calcularDistancia(double x1, double y1, double z1, double x2, double y2, double z2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2) + pow(z2 - z1, 2));
}
