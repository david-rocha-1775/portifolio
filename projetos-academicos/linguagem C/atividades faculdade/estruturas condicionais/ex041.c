/*Enunciado: A bilheteria de um cinema precisa de um sistema para calcular o preço dos ingressos. O valor varia conforme a idade do cliente e se ele é ou não estudante.

Regras de Preço:

Menores de 12 anos pagam Meia Infantil.
Maiores de 60 anos (inclusive) pagam Meia Idoso.
Estudantes (de qualquer idade entre 12 e 60) pagam Meia Estudante.
Os demais pagam o valor Inteiro.
Tarefa: Crie uma função chamada calcularPrecoIngresso que receba a idade do cliente e um indicador se ele é estudante. A função deve retornar o valor final do ingresso.

Retorne 15.00 para Meia Infantil.
Retorne 20.00 para Meia Idoso.
Retorne 25.00 para Meia Estudante.
Retorne 30.00 para Inteira.
Se a idade for negativa, retorne 0.0 (inválido).
Entrada: A função receberá dois parâmetros: int idade e int ehEstudante (1 para sim, 0 para não).

Saída: Sua função deve retornar um double com o preço do ingresso.*/
#include <stdio.h>
double calcularPrecoIngresso(int idade, int ehEstudante) {
    if (idade < 0) {
        return 0.0; // Idade inválida
    } else if (idade < 12) {
        return 15.00; // Meia Infantil
    } else if (idade >= 60) {
        return 20.00; // Meia Idoso
    } else if (ehEstudante == 1) {
        return 25.00; // Meia Estudante
    } else {
        return 30.00; // Inteira
    }
}