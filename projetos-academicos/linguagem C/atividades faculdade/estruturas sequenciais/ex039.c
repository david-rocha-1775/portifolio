/*Uma empresa de energia solar precisa calcular a economia anual de seus clientes. O sistema recebe a potência dos painéis solares (em kW), as horas médias diárias de sol e o preço por kWh da energia elétrica.

IMPORTANTE: Você deve criar uma função chamada calcularEconomia que receba três parâmetros float (potência, horas, preço) e retorne um float com a economia anual.

Entrada: Não há entrada do usuário.

Saída: Sua função deve calcular e retornar a economia anual.*/
#include <stdio.h>
float calcularEconomia(float potencia, float horas, float preco) {
    return potencia * horas * preco * 365;
}