/*Crie um programa que determine se um ano é bissexto. Um ano é bissexto se for divisível por 4, exceto para anos que são divisíveis por 100, a menos que também sejam divisíveis por 400.

Entrada:

Um número inteiro a representando o ano.

Saída:

Imprima "Bissexto" se o ano for bissexto, e "Não Bissexto" caso contrário.*/
#include <stdio.h>
int main() {
    int ano;
    scanf("%d", &ano);

    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
        printf("Bissexto\n");
    } else {
        printf("Nao Bissexto\n");
    }

    return 0;
}