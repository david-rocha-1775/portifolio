/*Enunciado: Um investidor quer saber quantos meses levará para seu investimento atingir uma determinada meta, considerando juros compostos mensais.

Tarefa: Escreva um programa que leia três números reais: o valor inicial (V), a taxa de juros mensal em porcentagem (J), e a meta (M). O programa deve usar um laço de repetição (como while) para simular a passagem dos meses. A cada mês, o valor V deve ser atualizado (V = V + V * (J/100.0)). O laço deve parar quando V for maior ou igual a M.

Entrada: Três números reais em linhas separadas: V (V > 0), J (J > 0), e M (M > V).

Saída: Uma única linha no formato: "Meses: X", onde X é o número de meses necessários.

Por exemplo:

Input	Resultado
1000.0
10.0
2000.0
Meses: 8
100.0
100.0
200.0
Meses: 1
*/
#include <stdio.h>
int main() {
    float V, J, M;
    int meses = 0;

    // Ler o valor inicial, a taxa de juros e a meta
    scanf("%f", &V);
    scanf("%f", &J);
    scanf("%f", &M);

    // Simular a passagem dos meses até atingir ou superar a meta
    while (V < M) {
        V = V + V * (J / 100.0); // Atualizar o valor com os juros compostos
        meses++; // Incrementar o contador de meses
    }

    // Imprimir o número de meses necessários
    printf("Meses: %d\n", meses);

    return 0;
}