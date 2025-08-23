#include <stdio.h>
#include <stdlib.h>

int main() {
    float d1, d2, area;
    printf("digite o valor da diagonal 1: ");
    scanf("%f", &d1);   
    printf("\ndigite o valor da diagonal 2: ");
    scanf("%f", &d2);
    area = (d1 * d2) / 2;
    printf("\narea do lozango é: %.1f", area);
    return 0;
}