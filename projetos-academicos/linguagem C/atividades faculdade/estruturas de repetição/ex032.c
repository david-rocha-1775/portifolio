/*Escreva um programa que apresente um menu com opções numeradas (1, 2, 3) e uma opção para sair (0). O programa deve ler a opção do usuário e executar uma ação simulada (imprimir qual opção foi escolhida). O menu deve ser exibido repetidamente até que o usuário escolha a opção 0. Utilize um loop do-while.

Menu:

1 - Opcao A

2 - Opcao B

3 - Opcao C

0 - Sair

Escolha uma opcao:

Entrada esperada: Uma sequência de números inteiros representando as opções do menu, terminando com 0.

Saída esperada: Para cada opção válida (1, 2 ou 3), imprima "Voce escolheu a Opcao [A/B/C]". Para opção 0, imprima "Saindo...". Para opções inválidas, imprima "Opcao invalida!". O menu deve ser impresso antes de cada leitura de opção.*/
#include <stdio.h>
int main() {
    int opcao;

    do {
        printf("1 - Opcao A\n");
        printf("2 - Opcao B\n");
        printf("3 - Opcao C\n");
        printf("0 - Sair\n");
        printf("Escolha uma opcao:\n");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Voce escolheu a Opcao A\n\n");
                break;
            case 2:
                printf("Voce escolheu a Opcao B\n\n");
                break;
            case 3:
                printf("Voce escolheu a Opcao C\n\n");
                break;
            case 0:
                printf("Saindo...\n");
                break;
            default:
                printf("Opcao invalida!\n\n");
                break;
        }
    } while (opcao != 0);

    return 0;
}