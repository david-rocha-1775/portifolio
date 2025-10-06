/*Uma base espacial coleta recursos para construir naves. Cada cristal gera 15 unidades de energia, cada metal gera 8 unidades. Cada nave custa 100 unidades de energia.

Entrada: Três números inteiros: quantidade de cristais, metais e energia inicial já disponível.

Saída: Três números: energia total, número de naves que podem ser construídas, energia restante*/
#include <stdio.h>
int main() {
    int cristais, metais, energiaInicial;
    int energiaTotal, naves, energiaRestante;

    scanf("%d %d %d", &cristais, &metais, &energiaInicial);

    energiaTotal = cristais * 15 + metais * 8 + energiaInicial;
    naves = energiaTotal / 100;
    energiaRestante = energiaTotal % 100;

    printf("%d %d %d\n", energiaTotal, naves, energiaRestante);

    return 0;
}
