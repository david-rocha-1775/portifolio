/*Dado um número de 9 dígitos, extraia diferentes segmentos e crie versões espelhadas:

• Início normal: dígitos das posições 1-3

• Final normal: dígitos das posições 7-9

• Soma dos normais

• Soma dos mesmos segmentos, mas com dígitos invertidos

Entrada: Um número inteiro de 9 dígitos.

Saída: Início normal, final normal, soma normais, soma invertidos.*/
#include <stdio.h>
#include <math.h>
int main() {
    int numero, inicio_normal = 0, final_normal = 0;
    int inicio_invertido = 0, final_invertido = 0;
    scanf("%d", &numero);

    // Extrair início normal (posições 1-3)
    inicio_normal = numero / 1000000;

    // Extrair final normal (posições 7-9)
    final_normal = numero % 1000;

    // Calcular início invertido
    inicio_invertido = (inicio_normal % 10) * 100 + ((inicio_normal / 10) % 10) * 10 + (inicio_normal / 100);

    // Calcular final invertido
    final_invertido = (final_normal % 10) * 100 + ((final_normal / 10) % 10) * 10 + (final_normal / 100);

    // Calcular somas
    int soma_normais = inicio_normal + final_normal;
    int soma_invertidos = inicio_invertido + final_invertido;

    // Imprimir resultados
    printf("%d ", inicio_normal);
    printf("%d ", final_normal);
    printf("%d ", soma_normais);
    printf("%d\n", soma_invertidos);

    return 0;
}