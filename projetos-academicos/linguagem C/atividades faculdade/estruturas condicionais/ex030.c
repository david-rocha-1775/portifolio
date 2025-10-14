/*Enunciado: No topo do Monte Parnaso, um antigo terminal de computador foi descoberto. Acredita-se que ele abriga o "Oráculo de Delphos Digital". Os peregrinos digitais podem fazer uma oferenda na forma de um número inteiro e, em troca, o oráculo revela uma pequena profecia sobre seu futuro na programação. As regras do oráculo são misteriosas e baseadas na natureza do número oferecido:

Se o número for 0, a profecia é sobre "recomeços".

Se o número for par e positivo, a profecia é sobre "sucesso e abundância".

Se o número for ímpar e positivo, a profecia é sobre "jornadas e desafios".

Se o número for par e negativo, a profecia é sobre "cautela e reflexão".

Se o número for ímpar e negativo, a profecia é sobre "superação e aprendizado".

Sua tarefa é criar um programa que simule o Oráculo de Delphos Digital, recebendo o número do usuário e exibindo a profecia correta.

Entrada esperada: Um único número inteiro N.

Saída esperada: A saída deve ser uma única linha contendo a profecia correspondente, exatamente como descrito nas regras.*/
#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);

    if (N == 0) {
        printf("A profecia eh sobre recomecos.\n");
    } else if (N > 0 && N % 2 == 0) {
        printf("A profecia eh sobre sucesso e abundancia.\n");
    } else if (N > 0 && N % 2 != 0) {
        printf("A profecia eh sobre jornadas e desafios.\n");
    } else if (N < 0 && N % 2 == 0) {
        printf("A profecia eh sobre cautela e reflexao.\n");
    } else {
        printf("A profecia eh sobre superacao e aprendizado.\n");
    }

    return 0;
}