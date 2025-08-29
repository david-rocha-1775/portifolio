#include <stdio.h>

int main() {
    int vinho;
    float preco = 0, quant, total, desconto = 0, total_com_desconto= 0;

    printf("\t===============================\n");
    printf("\t\t    ADEGA ETC\n");
    printf("\t===============================\n");

    printf("\tEscolha o tipo de vinho:\n");
    printf("\t1 - Tinto (R$ 80,00/L)\n");
    printf("\t2 - Rose  (R$ 75,00/L)\n");
    printf("\t3 - Branco (R$ 60,00/L)\n");
    printf("\tDigite sua escolha (1, 2 ou 3): ");
    scanf("%d", &vinho);

    printf("\tInforme a quantidade de garrafas: ");
    scanf("%f", &quant);

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
            preco =  60.0;
            printf("\n\tVoce escolheu Vinho Branco.\n");
            break;
        default:
            printf("\n\tOpcao invalida.\n");
            return 1;
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

    return 0;
}
