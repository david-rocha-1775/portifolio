/*Crie um programa que leia três valores de ponto flutuante representando os lados de um triângulo. Primeiro, verifique se os valores fornecidos podem formar um triângulo (a soma de quaisquer dois lados deve ser maior que o terceiro lado). Se puderem, classifique o triângulo como "Equilátero" (todos os lados iguais), "Isósceles" (dois lados iguais) ou "Escaleno" (todos os lados diferentes). Caso contrário, imprima "Não forma um triângulo".

Entrada:

Três valores de ponto flutuante l1, l2 e l3, representando os lados.

Saída:

Imprima a classificação do triângulo ou a mensagem de que não é um triângulo.*/
#include <stdio.h>
const char* classificarTriangulo(double l1, double l2, double l3) {
    // Verifica se os lados podem formar um triângulo
    if (l1 + l2 > l3 && l1 + l3 > l2 && l2 + l3 > l1) {
        if (l1 == l2 && l2 == l3) {
            return "Equilatero";
        } else if (l1 == l2 || l1 == l3 || l2 == l3) {
            return "Isosceles";
        } else {
            return "Escaleno";
        }
    } else {
        return "Nao forma um triangulo";
    }
}
int main() {
    double l1, l2, l3;
    scanf("%lf %lf %lf", &l1, &l2, &l3);
    
    const char* classificacao = classificarTriangulo(l1, l2, l3);
    printf("%s\n", classificacao);
    
    return 0;
}