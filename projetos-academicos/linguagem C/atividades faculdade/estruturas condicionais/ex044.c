/*Enunciado: Um site de e-commerce precisa validar a força da senha de seus usuários no momento do cadastro para garantir a segurança das contas. A força é medida pelo comprimento da senha.

Tarefa: Crie uma função chamada validarForcaSenha que receba o comprimento de uma senha (int) e retorne um código numérico que represente sua força.

As regras de validação são:

Retorne 1 para Muito Fraca (menos de 6 caracteres).

Retorne 2 para Fraca (entre 6 e 7 caracteres).

Retorne 3 para Média (entre 8 e 11 caracteres).

Retorne 4 para Forte (12 ou mais caracteres).

Retorne 0 para comprimento Inválido (zero ou negativo).

Entrada: A função receberá um único parâmetro: int comprimento.

Saída: Sua função deve retornar um int com o código da força da senha.*/
#include <stdio.h>
int validarForcaSenha(int comprimento) {
    if (comprimento <= 0) {
        return 0; // Inválido
    } else if (comprimento < 6) {
        return 1; // Muito Fraca
    } else if (comprimento <= 7) {
        return 2; // Fraca
    } else if (comprimento <= 11) {
        return 3; // Média
    } else {
        return 4; // Forte
    }
}