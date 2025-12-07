/*Enunciado: Uma sequência "Dente de Serra" (ou Zig-Zag) é uma sequência onde os números alternam entre subir e descer.

Exemplos:
1 5 2 6 3 (Sobe, Desce, Sobe, Desce) -> SIM
5 2 6 1 9 (Desce, Sobe, Desce, Sobe) -> SIM
1 2 3 4 5 (Sobe, Sobe...) -> NAO
1 5 6 2 1 (Sobe, Sobe...) -> NAO
1 5 5 2 1 (Sobe, Plano...) -> NAO

Tarefa: Escreva um programa que leia um inteiro N, seguido por N inteiros. O programa deve verificar se a sequência forma um Dente de Serra.

Regras:

Sequências com 0, 1 ou 2 números são sempre "SIM".
A sequência não pode ter números adjacentes iguais (plano).
A direção (subir/descer) deve alternar a cada passo.
Entrada: A primeira linha contém um inteiro N (N >= 0). As N linhas seguintes contêm os números da sequência.

Saída: Uma única linha: "SIM" ou "NAO".*/
#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);

    if (N <= 2) {
        printf("SIM\n");
        return 0;
    }

    int anterior, atual;
    scanf("%d", &anterior);

    int subida = -1; // -1: indefinido, 0: descendo, 1: subindo
    int eh_dente_de_serra = 1;

    for (int i = 1; i < N; i++) {
        scanf("%d", &atual);

        if (atual == anterior) {
            eh_dente_de_serra = 0; // Plano detectado
            break;
        } else if (atual > anterior) {
            if (subida == 1) {
                eh_dente_de_serra = 0; // Duas subidas consecutivas
                break;
            }
            subida = 1; // Agora estamos subindo
        } else { // atual < anterior
            if (subida == 0) {
                eh_dente_de_serra = 0; // Duas descidas consecutivas
                break;
            }
            subida = 0; // Agora estamos descendo
        }

        anterior = atual;
    }

    if (eh_dente_de_serra) {
        printf("SIM\n");
    } else {
        printf("NAO\n");
    }

    return 0;
}