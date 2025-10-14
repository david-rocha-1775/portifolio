/*Enunciado: A segurança de um evento exclusivo precisa de um sistema para verificar se os convidados podem entrar. As regras de acesso são baseadas na idade, na posse de um convite VIP e se está acompanhado por um responsável.

Regras de Acesso:

A pessoa deve ter 18 anos ou mais para entrar.
OU, se for menor de idade, deve estar acompanhada por um responsável.
Independentemente da idade, se a pessoa tiver um convite VIP, a entrada é sempre permitida.
Tarefa: Crie uma função chamada verificarAcesso que receba a idade do convidado, um indicador se possui convite VIP e outro se está acompanhado. A função deve retornar um código de status.

Retorne 1 se o acesso for Permitido.
Retorne 0 se o acesso for Negado.
Entrada: A função receberá três parâmetros: int idade, int temVip (1 para sim, 0 para não), e int acompanhado (1 para sim, 0 para não).

Saída: Sua função deve retornar um int (1 para permitido, 0 para negado).*/
#include <stdio.h>
int verificarAcesso(int idade, int temVip, int acompanhado) {
    if (temVip == 1) {
        return 1; // Acesso Permitido
    } else if (idade >= 18) {
        return 1; // Acesso Permitido
    } else if (idade < 18 && acompanhado == 1) {
        return 1; // Acesso Permitido
    } else {
        return 0; // Acesso Negado
    }
}