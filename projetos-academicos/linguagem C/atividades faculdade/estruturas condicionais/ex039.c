/*Leia 5 letras e as vogais devem ser substituidas por outras letras da seguinte forma:

"a" por "b".
"e" por "G".
"i" por "Z".
"o" por "m".
"u" por "C".
Observe que algumas letras estão em maiúsculo, a letra em minúsculo não será aceita.

Após realizar a substituição imprima os 5 caracteres juntos

Entrada:

A entrada consiste de 5 caracteres separados por vírgulas
Saída:

Os 5 caracteres alterados de acordo com a forma supracitada*/
#include <stdio.h>
int main() {
    char letras[5];
    for (int i = 0; i < 5; i++) {
        scanf(" %c,", &letras[i]);
        if (letras[i] == 'a') {
            letras[i] = 'b';
        } else if (letras[i] == 'e') {
            letras[i] = 'G';
        } else if (letras[i] == 'i') {
            letras[i] = 'Z';
        } else if (letras[i] == 'o') {
            letras[i] = 'm';
        } else if (letras[i] == 'u') {
            letras[i] = 'C';
        }
    }

    for (int i = 0; i < 5; i++) {
        printf("%c", letras[i]);
    }
    printf("\n");

    return 0;
}