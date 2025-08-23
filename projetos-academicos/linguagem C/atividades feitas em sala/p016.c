#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.14

int main(){
    int opcao;float lado,base,altura,maior_base,menor_base,raio,diagonal1,diagonal2;
    printf("\nopcoes:");
    printf("\n1 - quadrado");
    printf("\n2 - retangulo");
    printf("\n3 - trapezio");
    printf("\n4 - circulo");
    printf("\n5 - losango");
    printf("\ndigite um dos numeros para selecionar a figura: ");
    scanf("%d", &opcao);
    switch(opcao){
        case 1: // quadrado
            printf("\ndigite o lado: ");
            scanf("%f", &lado);
            printf("\nresultado: %.2f", lado*lado);
            break;
        case 2: // retangulo
            printf("\ndigite a base: ");
            scanf("%f", &base);
            printf("\ndigite a altura: ");
            scanf("%f", &altura);
            printf("\nresultado: %.2f", base*altura);
            break;
        case 3: // trapezio
            printf("\ndigite a maior base: ");
            scanf("%f", &maior_base);
            printf("\ndigite a menor base: ");
            scanf("%f", &menor_base);
            printf("\ndigite a altura: ");
            scanf("%f", &altura);
            printf("\nresultado: %.2f", ((maior_base+menor_base)*altura)/2);
            break;
        case 4: // circulo
            printf("\ndigite o raio: ");
            scanf("%f", &raio);
            printf("\nresultado: %.2f", PI*raio*raio);
            break;
        case 5: // losango
            printf("\ndigite a diagonal 1: ");
            scanf("%f", &diagonal1);
            printf("\ndigite a diagonal 2: ");
            scanf("%f", &diagonal2);
            printf("\nresultado: %.2f", (diagonal1*diagonal2)/2);
            break;
        default:
            printf("\nopcao invalida");
    }
    return 0;
}