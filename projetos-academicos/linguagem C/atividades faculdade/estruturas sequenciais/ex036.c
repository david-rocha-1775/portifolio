/*Um sistema de segurança usa códigos de barras especiais com 5 dígitos. Para validar:
• Soma dos dígitos em posições ímpares (1º, 3º, 5º)
• Soma dos dígitos em posições pares (2º, 4º)
• Código verificador = (soma_ímpares × 3 + soma_pares × 7) mod 10
• Código final = concatenação dos 5 dígitos
Entrada: Cinco dígitos separados por espaços.
Saída: Soma ímpares, soma pares, verificador, código final.*/
#include <stdio.h>
int main(){
    int d1, d2, d3, d4, d5,soma_impares, soma_pares, codigo_verificador;
    scanf("%d %d %d %d %d", &d1, &d2, &d3, &d4, &d5);
    soma_impares = d1 + d3 + d5;
    soma_pares = d2 + d4;
    codigo_verificador = (soma_impares * 3 + soma_pares * 7) % 10;
    printf("%d %d %d %d%d%d%d%d\n", soma_impares, soma_pares, codigo_verificador, d1, d2, d3, d4, d5);
    return 0;
}
