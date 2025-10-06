/*Dado um número de 9 dígitos, extraia diferentes partes e faça cálculos:

• Primeiros 2 dígitos (posições 1-2)

• Últimos 2 dígitos (posições 8-9)

• Dígitos centrais (posições 4-6)

• Resultado = (primeiros 2 + últimos 2) + (centrais × 2)

Entrada: Um número inteiro de 9 dígitos.

Saída: Primeiros 2, últimos 2, centrais 3, resultado final.*/
#include <stdio.h>
#include <math.h>
int main() {
    int numero, primeiros2 = 0, ultimos2 = 0, centrais3 = 0;
    scanf("%d", &numero);

    // Extrair primeiros 2 dígitos (posições 1-2)
    primeiros2 = numero / 10000000;

    // Extrair últimos 2 dígitos (posições 8-9)
    ultimos2 = numero % 100;

    // Extrair dígitos centrais (posições 4-6)
    centrais3 = (numero / 1000) % 1000;

    // Calcular resultado final
    int resultado_final = (primeiros2 + ultimos2) + (centrais3 * 2);

    // Imprimir resultados
    printf("%d ", primeiros2);
    printf("%d ", ultimos2);
    printf("%d ", centrais3);
    printf("%d\n", resultado_final);

    return 0;
}