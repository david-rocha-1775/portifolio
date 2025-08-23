#define pi 3.14
#include <stdio.h>
#include <stdlib.h>

int main() {
    float raio, area, perimetro;
    
    printf("digite o valor do raio: ");
    scanf("%f", &raio);
    
    area = pi * (raio * raio);
    perimetro = 2 * pi * raio;
    
    printf("area da circunferencia: %.1f\n", area);
    printf("perimetro circunferencia: %.1f\n", perimetro);
    
    return 0;
}