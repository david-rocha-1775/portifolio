#include <stdio.h>
#include <stdlib.h>

int main() {
    float bMaior, bMenor, altura, area;
    printf("digite o valor da base maior: ");   
    scanf("%f", &bMaior);
    printf("\ndigite o valor da base menor: ");
    scanf("%f", &bMenor);
    printf("\ndigite o valor da altura: ");
    scanf("%f", &altura);
    area = ((bMaior + bMenor) * altura) / 2;
    printf("\narea: %.1f", area);
    return 0;
}