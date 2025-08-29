#include <stdio.h>
#include <stdlib.h>

int main() {
    float lado, area, perimetro;
    
    printf("digite o lado do quadrado: ");
    scanf("%f", &lado);
    
    area = lado * lado;
    perimetro = 4 * lado;
    
    printf("area: %.1f\n", area);
    printf("perimetro: %.1f\n", perimetro);
    
    return 0;
}