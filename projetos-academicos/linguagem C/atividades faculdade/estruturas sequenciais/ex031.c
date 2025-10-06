/*Escreva um programa que leia um inteiro não negativo T representando um tempo em segundos e imprima o mesmo tempo no formato Hh MMm SSs, onde H é o número de horas, MM o número de minutos (com zero à esquerda) e SS o número de segundos (com zero à esquerda).*/
#include <stdio.h>
int main(){
    int T, H, M, S;
    scanf("%d", &T);
    H = T / 3600;
    M = (T % 3600) / 60;
    S = T % 60;
    printf("%dh %02dm %02ds\n", H, M, S);
    return 0;
}