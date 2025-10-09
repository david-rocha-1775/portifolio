/*Enunciado: Um banco digital precisa de um sistema automático para analisar o risco de crédito de novos clientes com base na sua pontuação (score). A análise determinará o nível de risco associado a cada cliente.

Regras de Risco:

Score de 0 a 300: Alto Risco
Score de 301 a 600: Risco Moderado
Score de 601 a 800: Baixo Risco
Score acima de 800: Risco Mínimo
Tarefa: Crie uma função chamada analisarRisco que receba a pontuação de crédito de um cliente (int) e retorne um código numérico representando o nível de risco.

Retorne 4 para "Alto Risco".
Retorne 3 para "Risco Moderado".
Retorne 2 para "Baixo Risco".
Retorne 1 para "Risco Mínimo".
Se a pontuação for negativa, retorne 0 (inválido).
Entrada: A função receberá um parâmetro: int pontuacao.

Saída: Sua função deve retornar um int com o código de risco.*/
#include <stdio.h>
int analisarRisco(int pontuacao) {
    if (pontuacao < 0) {
        return 0; // Inválido
    } else if (pontuacao <= 300) {
        return 4; // Alto Risco
    } else if (pontuacao <= 600) {
        return 3; // Risco Moderado
    } else if (pontuacao <= 800) {
        return 2; // Baixo Risco
    } else {
        return 1; // Risco Mínimo
    }
}