/*Um comerciante galáctico possui três tipos de créditos e quer convertê-los para o sistema monetário universal:

• Créditos verdes valem 5 galácticos cada

• Créditos azuis valem 12 galácticos cada

• Créditos vermelhos valem 25 galácticos cada

No sistema universal: 1 moeda de ouro = 50 galácticos, 1 moeda de prata = 10 galácticos, 1 moeda de bronze = 1 galáctico.

Entrada: Três inteiros: créditos verdes, azuis, vermelhos.

Saída: Total galácticos, moedas de ouro, prata, bronze.*/
#include <stdio.h>
int main() {
    int verdes, azuis, vermelhos;
    scanf("%d %d %d", &verdes, &azuis, &vermelhos);

    int total_galacticos = (verdes * 5) + (azuis * 12) + (vermelhos * 25);

    int moedas_ouro = total_galacticos / 50;
    int resto_ouro = total_galacticos % 50;

    int moedas_prata = resto_ouro / 10;
    int moedas_bronze = resto_ouro % 10;

    printf("%d %d %d %d\n", total_galacticos, moedas_ouro, moedas_prata, moedas_bronze);
    return 0;
}
