#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float numero;
    printf("digite um numero: ");
    scanf("%f", &numero);
    printf("\no cubo desse numero subtraido o dobro adicionado de 5 é: %.2f", pow(numero,3) - (2 * numero) + 5);
    return 0;
}