#include <stdio.h>
#include <stdlib.h>

int main() {
    float base, altura, area, perimetro;
    
    printf("digite o valor da base: ");
    scanf("%f", &base);
    
    printf("\ndigite o valor da altura: ");
    scanf("%f", &altura);
    
    area = base * altura;
    perimetro = 2 * (base + altura);
    
    printf("area: %.1f\n", area);
    printf("perimetro: %.1f\n", perimetro);
    
    return 0;
}