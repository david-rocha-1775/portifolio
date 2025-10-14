/*Bernardinho é professor de matemática e precisa dos serviços de um programador para criar um software que resolva equações do segundo grau, para isso ele pediu para que você fizesse essa tarefa para ele, pois ele sabe que você consegue fazer milagres com a linguagem C.

Entrada:

A entrada consiste de uma equação do segundo grau escrita na forma ax^2 + bx + c.
Saída:

Caso a entrada não seja uma equação do segundo grau imprima na tela: "A EQUACAO NAO E UMA EQUACAO DO SEGUNDO GRAU".
Caso a equação não possua raízes reais imprima na tela: "A EQUACAO NAO POSSUI RAIZES REAIS"
Caso a equação possua apenas uma raíz imprima na tela: "A EQUACAO POSSUI APENAS UMA RAIZ REAL:". Em seguida informe a raíz imprimindo na tela: "A RAIZ E: x"  x ser substuído pelo valor da raiz
Caso a equação possua duas raízes imprima na tela: "A EQUACAO POSSUI DUAS RAIZES REAIS:".   Em seguida informe as raizes imprimindo na tela: "X1 = x1" e na linha seguinte "X2 = x2"   x1 é a raíz adquirida ao somar a raíz quadrada do Delta e x2 é a raíz adquirida ao se subtrair a raíz quadrada do Delta.
OBS: Caso as raízes existam elas devem ser expressas com duas casas decimais*/
#include <stdio.h>
#include <math.h>
int main() {
    float a, b, c, delta, x1, x2;

    // Leitura dos coeficientes da equação
    scanf("%fx^2 + %fx + %f", &a, &b, &c);

    // Verifica se é uma equação do segundo grau
    if (a == 0) {
        printf("NAO E EQUACAO DO SEGUNDO GRAU\n");
        return 0;
    }

    // Calcula o valor de Delta
    delta = b * b - 4 * a * c;

    // Verifica o valor de Delta para determinar as raízes
    if (delta < 0) {
        printf("NAO POSSUI RAIZES NOS REAIS\n");
    } else if (delta == 0) {
        x1 = -b / (2 * a);
        printf("A EQUACAO POSSUI APENAS UMA RAIZ REAL:\n");
        printf("A RAIZ E: %.2f\n", x1);
    } else {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("A EQUACAO POSSUI DUAS RAIZES REAIS:\n");
        printf("X1 = %.2f\n", x1);
        printf("X2 = %.2f\n", x2);
    }

    return 0;
}