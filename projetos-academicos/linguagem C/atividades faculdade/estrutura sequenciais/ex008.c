/*Escreva um programa que leia três carateres do teclado e apresente ele de diversas formas diferentes.*/
#include <stdio.h>
int main(){
    char x, y, z;
    scanf("%c %c %c",&x,&y,&z);
    printf("%c%c%c\n",x,y,z);
    printf("%c\n",x);
    printf("%c%c\n",y,y);
    printf("%c %c %c\n",z,z,z);
    printf("X == %c, Y == %c, Z == %c\n",x,y,z);
    printf("X != %c, Y != %c, Z == %c\n",y,x,z);
    return 0;
}
