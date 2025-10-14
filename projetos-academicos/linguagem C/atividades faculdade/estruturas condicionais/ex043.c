/*O Restaurante Universitário (RU) da UnB é um ponto de encontro para toda a comunidade acadêmica. Para manter o sistema justo, os preços das refeições variam conforme a categoria do usuário. Você foi encarregado de criar o programa para o novo totem de autoatendimento. O programa deve ler um caractere que representa a categoria do usuário e informar o valor que ele deve pagar.

As categorias e preços são:

'E': Estudante de Graduação/Pós - R$ 5.00

'S': Servidor (Técnico ou Docente) - R$ 15.00

'V': Visitante - R$ 20.00

Qualquer outro caractere deve ser considerado como uma "Categoria invalida".

Entrada esperada: Um único caractere C representando a categoria do usuário.

Saída esperada: Se a categoria for válida, a saída deve ser no formato "Valor a pagar: R$ XX.XX". Caso contrário, a saída deve ser "Categoria invalida".*/
#include <stdio.h>
int main() {
    char categoria;
    scanf(" %c", &categoria);

    switch (categoria) {
        case 'E':
            printf("Valor a pagar: R$ 5.00\n");
            break;
        case 'S':
            printf("Valor a pagar: R$ 15.00\n");
            break;
        case 'V':
            printf("Valor a pagar: R$ 20.00\n");
            break;
        default:
            printf("Categoria invalida\n");
            break;
    }

    return 0;
}