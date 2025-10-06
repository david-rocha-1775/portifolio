/*Em um planeta distante, a temperatura é medida em graus Zork (Z). Para converter de Celsius (C) para Zork, usa-se a fórmula: Z = 3 * C - 15. Escreva um programa que leia uma temperatura em Celsius e converta para Zork.*/
#include <stdio.h>
int main(){
    float celsius, zork;
    scanf("%f", &celsius);
    zork = 3 * celsius - 15;
    printf("%.0f graus Celsius equivalem a %.0f graus Zork\n",celsius ,zork);
    return 0;
}