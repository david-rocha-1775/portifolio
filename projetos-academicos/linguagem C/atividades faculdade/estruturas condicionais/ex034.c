/*Enunciado: Uma operadora de telefonia quer ajudar seus clientes a escolherem o melhor plano de dados. O sistema deve recomendar um plano com base em uma categoria de consumo, informada pelo cliente.

Categorias de Consumo:

1: Consumo Baixo (até 5GB)
2: Consumo Médio (de 6GB a 20GB)
3: Consumo Alto (de 21GB a 50GB)
4: Consumo Ilimitado (acima de 50GB)
Tarefa: Crie uma função chamada recomendarPlano que receba a categoria de consumo do cliente (int) e retorne o valor mensal do plano recomendado.

Retorne 39.90 para o plano Básico (Categoria 1).
Retorne 59.90 para o plano Intermediário (Categoria 2).
Retorne 89.90 para o plano Avançado (Categoria 3).
Retorne 119.90 para o plano Premium (Categoria 4).
Se a categoria for inválida, retorne 0.0.
Requisito: A solução deve obrigatoriamente usar uma estrutura switch.

Entrada: A função receberá um parâmetro: int categoria.

Saída: Sua função deve retornar um double com o valor do plano.*/
#include <stdio.h>
double recomendarPlano(int categoria) {
    switch (categoria) {
        case 1:
            return 39.90;
        case 2:
            return 59.90;
        case 3:
            return 89.90;
        case 4:
            return 119.90;
        default:
            return 0.0;
    }
}