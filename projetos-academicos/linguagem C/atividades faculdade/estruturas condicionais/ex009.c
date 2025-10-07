/*Enunciado: Uma empresa de tecnologia quer incentivar sua equipe de vendas com um sistema de bônus progressivo. O bônus é calculado com base no valor total de vendas e no número de metas individuais que o vendedor atingiu no mês.

Regras de Bônus:

Vendas acima de R$ 50.000,00: O vendedor recebe um bônus base de 10% sobre o valor vendido.
Se, além disso, ele bateu mais de 3 metas, recebe um bônus adicional de 5% (totalizando 15%).
Vendas entre R$ 25.000,01 e R$ 50.000,00: O vendedor recebe um bônus base de 5% sobre o valor vendido.
Se, além disso, ele bateu mais de 3 metas, recebe um bônus adicional de 2% (totalizando 7%).
Vendas de R$ 25.000,00 ou menos não recebem bônus.
Tarefa: Crie uma função chamada calcularBonus que receba o valor total das vendas (double) e a quantidade de metas batidas (int). A função deve retornar o valor monetário do bônus a ser pago.

Entrada: A função receberá dois parâmetros: double valorVendas e int metasBatidas.

Saída: Sua função deve retornar um double com o valor do bônus. Se as entradas forem negativas, retorne 0.0.*/
#include <stdio.h>
double calcularBonus(double valorVendas, int metasBatidas) {
    if (valorVendas < 0 || metasBatidas < 0) {
        return 0.0; // Entradas inválidas
    }
    
    double bonus = 0.0;

    if (valorVendas > 50000.0) {
        bonus = valorVendas * 0.10; // Bônus base de 10%
        if (metasBatidas > 3) {
            bonus += valorVendas * 0.05; // Bônus adicional de 5%
        }
    } else if (valorVendas > 25000.0) {
        bonus = valorVendas * 0.05; // Bônus base de 5%
        if (metasBatidas > 3) {
            bonus += valorVendas * 0.02; // Bônus adicional de 2%
        }
    }

    return bonus;
}