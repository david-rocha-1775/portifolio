/*Frajola foi ao mercado e calculou o preço total de todos os produtos que separou para comprar, porém está tendo dificuldade para descobrir se o dinheiro que possui é suficiente. Felizmente, você estava por perto e sabendo que você é estudante de ensino superior, Frajola te pediu para criar um programa que verifique se o dinheiro que ele possui é suficiente para ele realizar a compra.

Entrada:

A entrada consiste de dois valores inteiros precididos por R$ e separados por " : ".
Os valores estão escritos de acordo com o sistema de numeração decimal(0, 1, 2, 3, 4, 5, 6, 7, 8 , 9) e devem ser lidos como valores desse sistema de numeração.
 Saída:

O programa deve imprimir "Pode comprar!" caso o valor seja suficiente, caso contrário ele deve imprimir "Ta pobre."*/
#include <stdio.h>
int main() {
    float preco_total, dinheiro_frajola;

    // Leitura dos valores de entrada
    scanf("R$ %f : R$ %f", &preco_total, &dinheiro_frajola);

    // Verifica se Frajola pode comprar os produtos
    if (dinheiro_frajola >= preco_total) {
        printf("Pode comprar!\n");
    } else {
        printf("Ta pobre.\n");
    }

    return 0;
}