/*Crie um programa que leia a idade de uma pessoa expressa em anos, meses e dias, e calcule quantos dias de vida essa pessoa tem, sem considerar anos bissextos.*/
#include <stdio.h>
int main() {
    int anos, meses, dias, total_dias;
    scanf("%d %d %d", &anos, &meses, &dias);
    total_dias = (anos * 360) + (meses * 30) + dias;
    printf("Voce ja viveu %d dias\n", total_dias);
    return 0;
}