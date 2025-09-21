/*Escreva um programa que leia um caratere do teclado e apresente-o de diversas formas diferentes, de acordo com o solicitado.*/
#include <stdio.h>
int main(){
    char caractere;
    scanf("%c", &caractere);
    printf("%c\n", caractere);
    printf("%c%c\n", caractere, caractere);
    printf("%c %c\n", caractere, caractere);
    printf("2%c\n", caractere);
    printf("[%c]\n", caractere);
    return 0;
}
