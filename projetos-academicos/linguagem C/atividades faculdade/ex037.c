/*Dado um número de 9 dígitos, extraia dígitos específicos e calcule códigos de verificação:
• Extrair dígitos das posições 2, 5 e 8
• Extrair os 4 dígitos centrais (posições 3-6)
• Código produto = d2 × d5 × d8
• Verificador = (produto + centrais) mod 1000
• Resultado = (d2 + d5 + d8) × 100 + verificador
Entrada: Um número inteiro de 9 dígitos.
Saída: d2, d5, d8, centrais, resultado final.*/
#include <stdio.h>
int main(){ 
    int numero, d2, d5, d8, centrais, produto, verificador, resultado;
    scanf("%d", &numero);
    d2 = (numero / 10000000) % 10;
    d5 = (numero / 10000) % 10;
    d8 = (numero / 10) % 10;
    centrais = (numero / 1000) % 10000;
    produto = d2 * d5 * d8;
    verificador = (produto + centrais) % 1000;
    resultado = (d2 + d5 + d8) * 100 + verificador;
    printf("%d %d %d %d %d\n", d2, d5, d8, centrais, resultado);
    return 0;
}