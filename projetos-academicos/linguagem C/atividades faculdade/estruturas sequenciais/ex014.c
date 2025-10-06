/*O Índice de Massa Corporal (IMC) é uma medida utilizada para avaliar se uma pessoa está dentro do peso ideal em relação à sua altura. Ele é calculado dividindo o peso (em quilogramas) pela altura ao quadrado (em metros).*/
#include <stdio.h>
int main() {
    float peso, altura, imc;
    scanf("%f %f", &peso, &altura);
    imc = peso / (altura * altura);
    printf("Seu IMC e: %.2f\n", imc);
    return 0;
}