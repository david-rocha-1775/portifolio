/*Escreva um programa que leia várias notas de alunos (números reais entre 0 e 10). A entrada termina quando um número negativo for digitado. Calcule e imprima a média das notas válidas (0 a 10). Utilize um loop while.

Entrada esperada: Uma sequência de números reais, terminando com um número negativo.

Saída esperada: A média das notas válidas com duas casas decimais no formato "Media: [valor]". Se nenhuma nota válida for inserida, imprima "Nenhuma nota valida.".*/
#include <stdio.h>
int main() {
    float nota, soma = 0.0;
    int count = 0;

    // Ler notas até que uma nota negativa seja digitada
    while (1) {
        scanf("%f", &nota);
        if (nota < 0) {
            break; // Sair do loop se a nota for negativa
        }
        if (nota <= 10) {
            soma += nota; // Somar notas válidas
            count++; // Contar notas válidas
        }
    }

    // Calcular e imprimir a média ou mensagem de nenhuma nota válida
    if (count > 0) {
        float media = soma / count;
        printf("Media: %.2f\n", media);
    } else {
        printf("Nenhuma nota valida.\n");
    }

    return 0;
}