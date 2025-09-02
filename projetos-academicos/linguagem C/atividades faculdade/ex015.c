/*Implemente uma função chamada powAPC que calcule XY. Sua função deve receber os valores de X e Y, ambos inteiros, e imprimir o valor de Xy em ponto flutuante.*/
#include <stdio.h>
#include <math.h>
void powAPC(int x, int y){
    float resultado = pow(x,y);
    printf("%.1f\n", resultado);
}
int main(){
    int x, y;
    scanf("%d %d", &x, &y);
    powAPC(x,y);
    return 0;
}