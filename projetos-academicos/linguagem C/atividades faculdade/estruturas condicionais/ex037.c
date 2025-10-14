/*Uma cafeteria moderna está instalando um totem de autoatendimento. Você foi contratado para programar a lógica de preços, que se baseia em um código numérico para cada produto.

Menu e Códigos:

Código 1: Espresso - R$ 5.00
Código 2: Cappuccino - R$ 8.50
Código 3: Latte - R$ 9.00
Código 4: Chá - R$ 6.00
Tarefa: Crie um programa que leia um código de pedido (int) e imprima o valor a ser pago. Se o código não corresponder a nenhum item do menu, o programa deve informar que a opção é inválida. Utilize obrigatoriamente a estrutura switch para resolver este problema.

Entrada esperada: Um número inteiro C (código do produto).

Saída esperada: Se o código for válido, imprima "Valor a pagar: R$ XX.XX". Caso contrário, imprima "Opcao invalida".*/
#include <stdio.h>
int main() {
    int codigo;
    scanf("%d", &codigo);

    switch (codigo) {
        case 1:
            printf("Valor a pagar: R$ 5.00\n");
            break;
        case 2:
            printf("Valor a pagar: R$ 8.50\n");
            break;
        case 3:
            printf("Valor a pagar: R$ 9.00\n");
            break;
        case 4:
            printf("Valor a pagar: R$ 6.00\n");
            break;
        default:
            printf("Opcao invalida\n");
            break;
    }

    return 0;
}