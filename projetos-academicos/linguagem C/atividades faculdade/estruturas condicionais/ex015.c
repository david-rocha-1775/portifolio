/*Escreva um programa que leia a idade de uma pessoa e a classifique em uma das seguintes categorias: "Criança" (0-12 anos), "Adolescente" (13-17 anos), "Adulto" (18-59 anos) ou "Idoso" (60 anos ou mais).

Entrada:

Um número inteiro i representando a idade.

Saída:

Imprima a categoria de idade correspondente.*/
#include <stdio.h>
const char* classificarIdade(int idade) {
    if (idade < 0) {
        return "Idade inválida";
    } else if (idade <= 12) {
        return "Crianca";
    } else if (idade <= 17) {
        return "Adolescente";
    } else if (idade <= 59) {
        return "Adulto";
    } else {
        return "Idoso";
    }
}
int main() {
    int idade;
    scanf("%d", &idade);
    
    const char* categoria = classificarIdade(idade);
    printf("%s\n", categoria);
    
    return 0;
}