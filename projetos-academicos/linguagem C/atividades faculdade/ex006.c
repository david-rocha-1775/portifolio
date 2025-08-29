/*Escreva um programa que leia um caratere do teclado e apresente-o de diversas formas diferentes, de acordo com o solicitado.*/
#include <stdio.h>
int main(){
    char carac;
    scanf("%c",&carac);
    printf("%c\n",carac);
    printf("%c%c\n",carac,carac);
    printf("%c %c\n",carac,carac);
    printf("2%c\n",carac);
    printf("[%c]\n",carac);
    return 0;
}