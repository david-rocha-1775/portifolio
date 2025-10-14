/*Enunciado: Uma federação de natação precisa de um sistema para categorizar seus atletas com base na idade. Isso ajuda a organizar as competições de forma justa.

Tarefa: Crie uma função chamada identificarCategoria que receba a idade de um atleta (int) e retorne um código numérico para sua categoria.

As categorias são definidas da seguinte forma:

Retorne 1 para Infantil A (5 a 7 anos).

Retorne 2 para Infantil B (8 a 10 anos).

Retorne 3 para Juvenil A (11 a 13 anos).

Retorne 4 para Juvenil B (14 a 17 anos).

Retorne 5 para Sênior (18 anos ou mais).

Retorne 0 para idade Inválida (menor que 5 anos).

Entrada: A função receberá um único parâmetro: int idade.

Saída: Sua função deve retornar um int com o código da categoria.*/
#include <stdio.h>
int identificarCategoria(int idade) {
    if (idade >= 5 && idade <= 7) {
        return 1; // Infantil A
    } else if (idade >= 8 && idade <= 10) {
        return 2; // Infantil B
    } else if (idade >= 11 && idade <= 13) {
        return 3; // Juvenil A
    } else if (idade >= 14 && idade <= 17) {
        return 4; // Juvenil B
    } else if (idade >= 18) {
        return 5; // Sênior
    } else {
        return 0; // Idade Inválida
    }
}