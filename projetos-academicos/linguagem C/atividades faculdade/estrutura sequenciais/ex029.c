/*Faça um programa que leia três notas de um aluno e o peso de cada nota e imprima a média final deste aluno.*/
#include <stdio.h>
int main(){
    float n1, n2, n3, p1, p2, p3, media;
    scanf("%f %f %f", &n1, &n2, &n3);
    scanf("%f %f %f", &p1, &p2, &p3);
    media = (n1*p1 + n2*p2 + n3*p3)/(p1 + p2 + p3);
    printf("%.6f\n", media);
    return 0;
}