#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int opcao;float n1, n2;
    printf("\nopcoes:");
    printf("\n1 - soma");
    printf("\n2 - subtracao");
    printf("\n3 - multiplicacao");
    printf("\n4 - divisao");
    printf("\n5 - potencia");
    printf("\n6 - raiz da soma");
    printf("\ndigite um dos numeros para selecionar a operacao: ");
    scanf("%d", &opcao);

    switch(opcao){
        case 1:
            printf("\ndigite o primeiro numero: ");
            scanf("%f", &n1);
            printf("\ndigite o segundo numero: ");
            scanf("%f", &n2);
            printf("\nresultado: %.2f", n1+n2);
            break;
        case 2:
            printf("\ndigite o primeiro numero: ");
            scanf("%f", &n1);
            printf("\ndigite o segundo numero: ");
            scanf("%f", &n2);
            printf("\nresultado: %.2f", n1-n2);
            break;
        case 3:
            printf("\ndigite o primeiro numero: ");
            scanf("%f", &n1);
            printf("\ndigite o segundo numero: ");
            scanf("%f", &n2);
            printf("\nresultado: %.2f", n1*n2);
            break;
        case 4:
            printf("\ndigite o primeiro numero: ");
            scanf("%f", &n1);
            printf("\ndigite o segundo numero: ");
            scanf("%f", &n2);
            if(n2==0){
                printf("\nerro, divisao por zero");
                break;
            }
            printf("\nresultado: %.2f", n1/n2);
            break;
        case 5:
            printf("\ndigite a base: ");
            scanf("%f", &n1);
            printf("\ndigite o expoente: ");
            scanf("%f", &n2);
            printf("\nresultado: %.2f", pow(n1, n2));
            break;
        case 6:
            printf("\ndigite o primeiro numero: ");
            scanf("%f", &n1);
            printf("\ndigite o segundo numero: ");
            scanf("%f", &n2);
            printf("\nresultado: %.2f", sqrt(n1+n2));
            break;
        default:
            printf("\nopcao invalida");
    }
    return 0;
}