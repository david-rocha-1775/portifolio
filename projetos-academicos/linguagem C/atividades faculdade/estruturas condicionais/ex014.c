/*Enunciado: Um sistema de gestão de stock de um supermercado precisa de uma função para categorizar novos produtos com base no seu código. A categoria determina o corredor onde o produto será armazenado.

Tarefa: Crie uma função chamada categorizarProduto que receba um código de produto (int) e retorne um código numérico para a sua categoria.

A categorização por código é a seguinte:

Código 1 a 100: Categoria 1 (Mercearia).

Código 101 a 200: Categoria 2 (Laticínios e Frios).

Código 201 a 300: Categoria 3 (Higiene).

Código 301 a 400: Categoria 4 (Bebidas).

Qualquer outro código positivo é Categoria 5 (Outros).

Se o código for zero ou negativo, retorne 0 (Código Inválido).

Entrada: A função receberá um único parâmetro: int codigoProduto.

Saída: Sua função deve retornar um int com o código da categoria.*/
#include <stdio.h>
int categorizarProduto(int codigoProduto) {
    if (codigoProduto <= 0) {
        return 0; // Código Inválido
    } else if (codigoProduto >= 1 && codigoProduto <= 100) {
        return 1; // Categoria 1 (Mercearia)
    } else if (codigoProduto >= 101 && codigoProduto <= 200) {
        return 2; // Categoria 2 (Laticínios e Frios)
    } else if (codigoProduto >= 201 && codigoProduto <= 300) {
        return 3; // Categoria 3 (Higiene)
    } else if (codigoProduto >= 301 && codigoProduto <= 400) {
        return 4; // Categoria 4 (Bebidas)
    } else {
        return 5; // Categoria 5 (Outros)
    }
}