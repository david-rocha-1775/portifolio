/* Para calcular a área de um polígono regular, use a fórmula: A = (n * s²) / (4 * tan(π/n)), onde n é o número de lados e s é o comprimento do lado.
IMPORTANTE: Você deve criar uma função chamada calcularAreaPoligono que receba dois parâmetros: um int (lados) e um double (comprimento), e retorne um double com a área do polígono.*/
#include <stdio.h>
#define pi 3.14159265358979323846
#include <math.h>
double calcularAreaPoligono(int lados, double comprimento){
    return (lados * comprimento * comprimento) / (4 * tan(pi / lados));
}
