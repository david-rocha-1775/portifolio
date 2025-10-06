/*No planeta Zorbak, a temperatura é medida em Graus Zorbak (Z). A conversão é: Z = (C * 1.8 + 32) * 2.5 - 100, onde C é a temperatura em Celsius.

IMPORTANTE: Você deve criar uma função chamada converterParaZorbak que receba um parâmetro float (celsius) e retorne um float com a temperatura em Graus Zorbak.

Entrada: Não há entrada do usuário.

Saída: Sua função deve calcular e retornar a temperatura convertida.*/
#include <stdio.h>
float converterParaZorbak(float celsius) {
    return (celsius * 1.8 + 32) * 2.5 - 100;
}