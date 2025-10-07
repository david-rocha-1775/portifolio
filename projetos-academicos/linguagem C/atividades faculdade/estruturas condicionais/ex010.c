/*Enunciado: Um desenvolvedor de jogos precisa de uma função para calcular o bônus de pontuação que um jogador recebe ao final de uma fase. O bônus é determinado pelo tempo restante e pelo número de itens secretos encontrados.

Tarefa: Crie uma função chamada calcularBonusJogo que receba o tempo restante em segundos (int) e o número de segredos encontrados (int). A função deve retornar um código numérico que representa a patente do bônus.

As regras para a patente são:

Retorne 4 para Patente Platina (tempo restante maior que 120s E 3 ou mais segredos).

Retorne 3 para Patente Ouro (tempo restante maior que 60s E 2 ou mais segredos).

Retorne 2 para Patente Prata (tempo restante maior que 0s OU pelo menos 1 segredo).

Retorne 1 para Sem Bônus (nenhuma das condições acima).

Retorne 0 se os dados forem inválidos (tempo ou segredos negativos).

Atenção: As patentes são exclusivas. Se um jogador atinge os critérios para Platina, ele não pode ser Ouro. A verificação deve ser feita da maior patente para a menor.

Entrada: A função receberá dois parâmetros: int tempoRestante, int segredosEncontrados.

Saída: Sua função deve retornar um int com o código da patente.*/
#include <stdio.h>
int calcularBonusJogo(int tempoRestante, int segredosEncontrados) {
    if (tempoRestante < 0 || segredosEncontrados < 0) {
        return 0; // Dados inválidos
    }
    if (tempoRestante > 120 && segredosEncontrados >= 3) {
        return 4; // Patente Platina
    }
    if (tempoRestante > 60 && segredosEncontrados >= 2) {
        return 3; // Patente Ouro
    }
    if (tempoRestante > 0 || segredosEncontrados >= 1) {
        return 2; // Patente Prata
    }
    return 1; // Sem Bônus
}