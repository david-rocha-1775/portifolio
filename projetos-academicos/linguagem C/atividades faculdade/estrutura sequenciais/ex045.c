/*Um agente secreto precisa codificar caracteres individuais para criar mensagens secretas. Cada caractere deve ser convertido para seu código ASCII, multiplicado por 3 e somado 7.

IMPORTANTE: Você deve criar uma função chamada codificar que receba um parâmetro char e retorne um int com o código secreto.

Entrada: Não há entrada do usuário.

Saída: Sua função deve calcular e retornar o código secreto.*/
#include <stdio.h>
int codificar(char caractere) {
    return (caractere * 3) + 7;
}
