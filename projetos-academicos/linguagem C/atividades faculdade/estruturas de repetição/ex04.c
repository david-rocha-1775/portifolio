/*Enunciado: Um professor precisa de um programa que leia uma nota de um aluno, mas ele quer garantir que a nota digitada seja válida (entre 0.0 e 10.0, inclusive).

Tarefa: Escreva um programa que leia um número real. O programa deve usar um laço do-while para continuar pedindo a nota enquanto ela for inválida (menor que 0.0 ou maior que 10.0).

Assim que uma nota válida for inserida, o laço deve parar, e o programa deve imprimir "Nota valida: X.XX", formatada com duas casas decimais.

Entrada: Uma sequência de números reais. O programa só para de ler quando um número válido (0.0 a 10.0) é digitado.

Saída: Apenas a mensagem final com a nota válida.*/
#include <stdio.h>
int main() {
    float nota;

    // Loop do-while para solicitar uma nota válida
    do {
        scanf("%f", &nota);
    } while (nota < 0.0 || nota > 10.0);

    // Imprimir a nota válida formatada com duas casas decimais
    printf("Nota valida: %.2f\n", nota);

    return 0;
}