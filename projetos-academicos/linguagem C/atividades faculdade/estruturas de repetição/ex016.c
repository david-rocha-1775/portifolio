/*Enunciado: Um topógrafo está analisando um perfil de terreno e quer contar quantos "picos" existem. Um "pico" é definido como um ponto que é estritamente mais alto que seus vizinhos imediatos (o da esquerda e o da direita).

Regra: Os elementos no início e no fim de uma sequência nunca podem ser picos, pois não têm dois vizinhos para comparação.

Exemplo: Na sequência {1, 5, 2, 6, 3}, os picos são o 5 (que é > 1 e > 2) e o 6 (que é > 2 e > 3). Portanto, a contagem é 2.

Tarefa: Crie uma função chamada int contarPicos(int valores[], int n) que receba um array de inteiros (as altitudes) e seu tamanho n. A função deve usar um laço de repetição e uma estrutura condicional para contar o número de picos.

Cuidado: Pense nos limites do seu laço de repetição para evitar acessar posições inválidas do array (como array[-1] ou array[n]).

Saída: Sua função deve retornar um int com a contagem total de picos encontrados.*/
#include <stdio.h>
int contarPicos(int valores[], int n) {
    int count = 0;
    for (int i = 1; i < n - 1; i++) {
        if (valores[i] > valores[i - 1] && valores[i] > valores[i + 1]) {
            count++;
        }
    }
    return count;
}
