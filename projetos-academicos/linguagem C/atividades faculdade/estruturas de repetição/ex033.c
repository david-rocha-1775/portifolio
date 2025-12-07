/*Enunciado: Você deve criar uma mini calculadora que oferece 3 operações (Soma, Multiplicação, Divisão) e uma opção de Sair. O programa deve mostrar o resultado da operação e, em seguida, esperar pela próxima escolha, até que o usuário decida Sair.

Tarefa: Escreva um programa que usa um laço do-while. Dentro do laço, o programa deve ler um caractere (a opção). Use uma estrutura condicional (if ou switch) para tratar a escolha:

Se a escolha for +: Leia dois inteiros A e B, imprima a soma.
Se a escolha for *: Leia dois inteiros A e B, imprima a multiplicação.
Se a escolha for /: Leia dois inteiros A e B, imprima a divisão inteira.
Se a escolha for S: Imprima "Saindo..." e o laço deve terminar.
O laço do-while deve continuar repetindo enquanto a escolha for diferente de S.

Entrada: Uma sequência de comandos. Cada comando é um caractere. Se o caractere for +, * ou /, a entrada seguinte será de dois inteiros.

Saída: O resultado da operação ou a mensagem "Saindo...".*/
#include <stdio.h>
int main() {
    char opcao;
    int A, B;

    do {
        scanf(" %c", &opcao);

        switch (opcao) {
            case '+':
                scanf("%d %d", &A, &B);
                printf("Resultado: %d\n", A + B);
                break;
            case '*':
                scanf("%d %d", &A, &B);
                printf("Resultado: %d\n", A * B);
                break;
            case '/':
                scanf("%d %d", &A, &B);
                if (B != 0) {
                    printf("Resultado: %d\n", A / B);
                } else {
                    printf("Erro: Divisao por zero\n");
                }
                break;
            case 'S':
                printf("Saindo...\n");
                break;
            default:
                printf("Opcao invalida!\n");
                break;
        }
    } while (opcao != 'S');

    return 0;
}