/*Faça um programa que leia dois valores a e b expressos na forma a^b e imprima um texto. O programa funciona da seguinte forma:

Entrada:

Primeiro o usuário informa um número inteiro que pode ser 0 ou 1.
Caso o número seja 0, a será um número inteiro e b será uma letra do alfabeto.
Caso o número seja 1, a será uma letra do alfabeto e b será um número inteiro.
Em seguida são informados os valores de a e b separados por "^", ou seja, na forma a^b.
Saída:

Se a for um número inteiro, então o código deve imprimir na tela: "a^b.ln(a)" substituindo a e b por seus valores.
Se b for um número inteiro, então o código deve imprimir na tela: "ba^(b - 1)" substituindo a e b por seus valores, observe que está sendo subtraído 1 de b.
Caso o valor que representa um número inteiro for igual a zero então o código deve imprimir na tela: "0".*/
#include <stdio.h>
int main() {
    int tipo, a_int, b_int;
    char a_char, b_char;    
    scanf("%d", &tipo);
    if (tipo == 0) {
        scanf("%d^%c", &a_int, &b_char);
        if (a_int == 0) {
            printf("0\n");
        } else {
            printf("%d^%c.ln(%d)\n", a_int, b_char, a_int);
        }
    } else if (tipo == 1) {
        scanf(" %c^%d", &a_char, &b_int);
        if (b_int == 0) {
            printf("0\n");
        } else {
            printf("%d%c^%d \n", b_int, a_char, (b_int -1));
        }
    }
    return 0;
}
