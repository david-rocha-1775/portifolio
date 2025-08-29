#include <stdio.h>

int main() {
    int vinho, continuar = 1, c;
    float preco = 0, quant, total, desconto = 0, total_com_desconto = 0;

    while (continuar) {
        preco = 0; desconto = 0; total = 0; total_com_desconto = 0;

        printf("\n\t===============================\n");
        printf("\t\t    ADEGA ETC\n");
        printf("\t===============================\n");

        do {
            printf("\tEscolha o tipo de vinho:\n");
            printf("\t1 - Tinto (R$ 80,00/L)\n");
            printf("\t2 - Rose  (R$ 75,00/L)\n");
            printf("\t3 - Branco (R$ 60,00/L)\n");
            printf("\tDigite sua escolha (1, 2 ou 3): ");

            if (scanf("%d", &vinho) != 1) {
                printf("\n\tEntrada invalida! Digite apenas numeros.\n");

                while ((c = getchar()) != '\n' && c != EOF);
                vinho = 0;
            } else if (vinho < 1 || vinho > 3) {
                printf("\n\tOpcao invalida. Por favor, tente novamente.\n");
            }
        } while (vinho < 1 || vinho > 3);

        do {
            printf("\tInforme a quantidade de litros: ");

            if (scanf("%f", &quant) != 1) {
                printf("\n\tEntrada invalida! Digite um numero valido.\n");
                while ((c = getchar()) != '\n' && c != EOF);
                quant = -1;
            } else if (quant <= 0) {
                printf("\n\tQuantidade invalida. Digite um valor maior que zero.\n");
            }
        } while (quant <= 0);

        switch (vinho) {
            case 1:
                preco = 80.0;
                printf("\n\tVoce escolheu Vinho Tinto.\n");
                break;
            case 2:
                preco = 75.0;
                printf("\n\tVoce escolheu Vinho Rose.\n");
                break;
            case 3:
                preco = 60.0;
                printf("\n\tVoce escolheu Vinho Branco.\n");
                break;
        }

        total = preco * quant;

        if (total > 200 && total <= 500) {
            desconto = total * 0.10;
        } else if (total > 500) {
            desconto = total * 0.15;
        }

        total_com_desconto = total - desconto;

        printf("\n\tResumo do pedido:\n");
        printf("\tQuantidade: %.2f litros\n", quant);
        printf("\tPreco por litro: R$ %.2f\n", preco);
        printf("\tValor bruto: R$ %.2f\n", total);
        printf("\tDesconto: R$ %.2f\n", desconto);
        printf("\tTotal a pagar: R$ %.2f\n", total_com_desconto);

        do {
            printf("\n\tDeseja fazer outro pedido? (1 - Sim / 0 - Nao): ");

            if (scanf("%d", &continuar) != 1) {
                printf("\n\tEntrada invalida! Digite 1 para sim ou 0 para nao.\n");
                while ((c = getchar()) != '\n' && c != EOF);
                continuar = -1;
            } else if (continuar != 0 && continuar != 1) {
                printf("\n\tOpcao invalida. Digite 1 para sim ou 0 para nao.\n");
            }
        } while (continuar != 0 && continuar != 1);
    }

    printf("\n\tObrigado por comprar na ADEGA ETC!\n");

    return 0;
}
