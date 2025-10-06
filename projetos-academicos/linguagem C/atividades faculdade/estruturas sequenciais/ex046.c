/*Dado um número de 9 dígitos, extraia os dígitos em posições ímpares e pares separadamente, formando dois novos números.

• Dígitos ímpares: posições 1ª, 3ª, 5ª, 7ª, 9ª

• Dígitos pares: posições 2ª, 4ª, 6ª, 8ª

Entrada: Um número inteiro de 9 dígitos.

Saída: Dois números: dígitos das posições ímpares, dígitos das posições pares.*/
#include <stdio.h>
#include <math.h>
int main() {
    int numero, impar = 0, par = 0, posicao = 1;
    scanf("%d", &numero);

    while (numero > 0) {
        int digito = numero % 10;
        if (posicao % 2 == 1) {
            impar = digito * pow(10, (posicao / 2)) + impar;
        } else {
            par = digito * pow(10, ((posicao / 2) - 1)) + par;
        }
        numero /= 10;
        posicao++;
    }

    printf("%d ", impar);
    printf("%d\n", par);
    return 0;
}