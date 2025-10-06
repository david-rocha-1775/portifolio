/*Você foi jantar em um restaurante e deseja calcular corretamente o valor total a ser pago, incluindo a gorjeta. Para isso, deseja criar um programa que te ajude a calcular o valor final com base na conta e na porcentagem de gorjeta que você pretende dar.*/
#include <stdio.h>
int main(){
    float conta, porcentagem_gorjeta, valor_gorjeta, valor_total;
    scanf("%f %f", &conta, &porcentagem_gorjeta);
    valor_gorjeta = (porcentagem_gorjeta / 100) * conta;
    valor_total = conta + valor_gorjeta;
    printf("Valor da gorjeta: R$%.2f\n", valor_gorjeta);
    printf("Valor total: R$%.2f\n", valor_total);
    return 0;
}