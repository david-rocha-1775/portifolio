/*O SIGAA, sistema que rege a vida acadêmica na UnB, é famoso por suas regras. Uma das mais importantes é a conversão da nota final de uma disciplina para uma "menção". Além da nota, a frequência mínima de 75% é obrigatória. Um aluno com frequência inferior a 75% recebe a menção "SR" (Sem Rendimento), não importa quão alta seja sua nota.

Sua tarefa é criar um programa que leia a nota final (de 0 a 10) e o percentual de frequência de um aluno e informe qual a sua menção final, de acordo com as regras da UnB:

Frequência < 75%: SR (Sem Rendimento)

Nota de 9.0 a 10.0: SS (Superior)

Nota de 7.0 a 8.9: MS (Médio Superior)

Nota de 5.0 a 6.9: MM (Médio)

Nota de 3.0 a 4.9: MI (Médio Inferior)

Nota de 0.0 a 2.9: II (Inferior)

Entrada esperada: A entrada consiste em dois números em uma única linha: primeiro um número real N (a nota final) e depois um número inteiro F (o percentual de frequência).

Saída esperada: A saída deve ser uma única linha no formato "Mencao final: XX".*/
#include <stdio.h>
int main() {
    float N;
    int F;
    scanf("%f %d", &N, &F);

    if (F < 75) {
        printf("Mencao final: SR\n");
    } else if (N >= 9.0 && N <= 10.0) {
        printf("Mencao final: SS\n");
    } else if (N >= 7.0 && N < 9.0) {
        printf("Mencao final: MS\n");
    } else if (N >= 5.0 && N < 7.0) {
        printf("Mencao final: MM\n");
    } else if (N >= 3.0 && N < 5.0) {
        printf("Mencao final: MI\n");
    } else {
        printf("Mencao final: II\n");
    }

    return 0;
}