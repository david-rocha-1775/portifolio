/*Enunciado: Você precisa programar a lógica de validação para um caixa eletrônico. A função deve verificar se um pedido de saque é válido com base no saldo do cliente e nas regras do banco.

Tarefa: Crie uma função chamada validarSaque que receba o saldo da conta (double) e o valor do saque desejado (int). A função deve retornar um código numérico (int) que representa o status da transação.

As regras de validação e os códigos de retorno são:

Retorne 1 para "Saque Aprovado".
Retorne -1 para "Valor invalido" (valor do saque é negativo, zero, ou não é um múltiplo de 10).
Retorne -2 para "Saldo insuficiente" (valor do saque é maior que o saldo em conta).
Retorne -3 para "Limite diario excedido" (valor do saque é maior que R$ 1000,00).
Atenção: A verificação deve seguir a seguinte ordem de prioridade: Valor Inválido > Limite Diário > Saldo Insuficiente. O primeiro erro encontrado deve ser retornado.

Entrada: A função receberá dois parâmetros: double saldo, int valorSaque.

Saída: Sua função deve retornar um int com o código de status.*/
#include <stdio.h>
int validarSaque(double saldo, int valorSaque) {
    if (valorSaque <= 0 || valorSaque % 10 != 0) {
        return -1; // Valor invalido
    } else if (valorSaque > 1000) {
        return -3; // Limite diario excedido
    } else if (valorSaque > saldo) {
        return -2; // Saldo insuficiente
    } else {
        return 1; // Saque Aprovado
    }
}