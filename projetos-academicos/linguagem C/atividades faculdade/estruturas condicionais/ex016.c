/*O Índice de Massa Corporal (IMC) é uma medida internacional usada para saber se uma pessoa está no peso ideal. Ele é calculado dividindo o peso (em kg) pela altura ao quadrado (em metros).

Crie um programa que leia o peso e a altura de uma pessoa e classifique seu IMC de acordo com a tabela abaixo:

Abaixo de 18.5: Abaixo do peso
Entre 18.5 e 24.9: Peso normal
Entre 25.0 e 29.9: Sobrepeso
Entre 30.0 e 34.9: Obesidade grau I
Entre 35.0 e 39.9: Obesidade grau II
Acima de 40.0: Obesidade grau III
Fórmula: IMC = peso / (altura * altura)

Entrada esperada: Dois números reais em uma única linha: peso (em kg) e altura (em metros).

Saída esperada: A string exata da classificação, seguida por uma quebra de linha (\n).*/
#include <stdio.h>
const char* classificarIMC(double peso, double altura) {
    if (altura <= 0) {
        return "Altura invalida";
    }
    
    double imc = peso / (altura * altura);
    
    if (imc < 18.5) {
        return "Abaixo do peso";
    } else if (imc < 25.0) {
        return "Peso normal";
    } else if (imc < 30.0) {
        return "Sobrepeso";
    } else if (imc < 35.0) {
        return "Obesidade grau I";
    } else if (imc < 40.0) {
        return "Obesidade grau II";
    } else {
        return "Obesidade grau III";
    }
}
int main() {
    double peso, altura;
    scanf("%lf %lf", &peso, &altura);
    
    const char* classificacao = classificarIMC(peso, altura);
    printf("%s\n", classificacao);
    
    return 0;
}