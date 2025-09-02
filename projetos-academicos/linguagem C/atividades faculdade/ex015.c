/*Implemente uma função chamada powAPC que calcule XY. Sua função deve receber os valores de X e Y, ambos inteiros, e imprimir o valor de Xy em ponto flutuante.*/
#include <stdio.h>
#include <math.h>
float powAPC(int x, int y){
    return pow(x,y);
}
int main(){
    int x, y;
    scanf("%d %d", &x, &y);
    printf("%.2f\n",powAPC(x,y));
    return 0;
}