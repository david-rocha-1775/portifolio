#include <stdio.h>
#include <stdlib.h>

int main() {
    float l1, l2, l3;
    printf("digite o lado 1: ");
    scanf("%f", &l1);
    printf("\ndigite o lado 2: ");
    scanf("%f", &l2);
    printf("\ndigite o lado 3: ");
    scanf("%f", &l3);
    if((l1<l2+l3) && (l2<l1+l3) && (l3<l1+l2)){
        printf("\nforma um triangulo");
        if(l1==l2 && l2==l3){
            printf("\nequilatero");
        } else if(l1==l2 || l1==l3 || l2==l3){
            printf("\nisosceles");
        } else {
            printf("\nescaleno");
        }
    } else {
        printf("\nnao forma um triangulo");
    }
    return 0;
}