/*Escreva um programa para receber o valor do raio de uma circunferência e calcular três informações: diâmetro, área e perímetro.*/
#include <stdio.h>
#include <math.h>
#define PI 3.14159
int main(){
    float raio, diametro, area, perimetro;
    scanf("%f", &raio);
    diametro = 2 * raio;
    area = PI * pow(raio, 2);
    perimetro = 2 * PI * raio;
    printf("%.2f\n%.2f\n%.2f\n", diametro, area, perimetro);
    return 0;
}