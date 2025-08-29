#include <stdio.h>
#include <stdlib.h>

int main() {
    char nome[50];int quantidade; float preco, valor_bruto, valor_liquido;
    printf("digite o nome do produto: ");
    scanf("%s", nome);
    printf("\ndigite a quantidade: ");
    scanf("%d", &quantidade);
    printf("\ndigite o preco: ");
    scanf("%f", &preco);
    valor_bruto = quantidade * preco;
    valor_liquido = valor_bruto * 0.9;
    printf("\nproduto: %s", nome);
    printf("\nvalor bruto: %.2f", valor_bruto);
    printf("\nvalor com 10 porcento de desconto: R$ %.2f", valor_liquido);
    return 0;
}