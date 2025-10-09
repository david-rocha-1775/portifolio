/*Enunciado: Uma federação de artes marciais precisa de um sistema para categorizar lutadores com base no seu peso em quilogramas (kg). As categorias são essenciais para garantir lutas justas.

Regras de Categoria:

Até 65 kg (inclusive): Pena
Mais de 65 kg até 75 kg (inclusive): Leve
Mais de 75 kg até 85 kg (inclusive): Médio
Mais de 85 kg: Pesado
Tarefa: Crie uma função chamada definirCategoria que receba o peso de um lutador (double) e retorne um código numérico para sua respectiva categoria.

Retorne 1 para a categoria Pena.
Retorne 2 para a categoria Leve.
Retorne 3 para a categoria Médio.
Retorne 4 para a categoria Pesado.
Se o peso for negativo ou zero, retorne 0 (inválido).
Entrada: A função receberá um parâmetro: double peso.

Saída: Sua função deve retornar um int com o código da categoria.*/
#include <stdio.h>
int definirCategoria(double peso) {
    if (peso <= 0) {
        return 0; // Peso inválido
    } else if (peso <= 65) {
        return 1; // Pena
    } else if (peso <= 75) {
        return 2; // Leve
    } else if (peso <= 85) {
        return 3; // Médio
    } else {
        return 4; // Pesado
    }
}