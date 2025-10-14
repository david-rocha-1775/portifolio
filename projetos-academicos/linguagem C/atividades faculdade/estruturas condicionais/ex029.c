/*Enunciado: No templo de Delfos, um antigo oráculo de Apolo revela profecias baseadas em um "número da sorte". As profecias variam conforme o número: números positivos pares preveem sucesso; números positivos ímpares indicam jornadas; números negativos com valor absoluto maior que 10 sinalizam superação; e outros números negativos sugerem cautela. O número zero é especial e aponta para recomeços.

Tarefa: Você deve criar uma função chamada interpretarProfecia que receba um número inteiro e retorne um código numérico representando a profecia, de acordo com as seguintes regras:

Retorne 1 para "sucesso e abundancia".

Retorne 2 para "jornadas e desafios".

Retorne 3 para "superacao e aprendizado".

Retorne 4 para "cautela e reflexao".

Retorne 0 para "recomecos".

Entrada: A função receberá um único parâmetro: um int chamado numeroDaSorte.

Saída: Sua função deve retornar um int com o código correspondente à profecia.*/
#include <stdio.h>
#include <stdlib.h>
int interpretarProfecia(int numeroDaSorte) {
    if (numeroDaSorte > 0) {
        if (numeroDaSorte % 2 == 0) {
            return 1; // sucesso e abundancia
        } else {
            return 2; // jornadas e desafios
        }
    } else if (numeroDaSorte < 0) {
        if (abs(numeroDaSorte) > 10) {
            return 3; // superacao e aprendizado
        } else {
            return 4; // cautela e reflexao
        }
    } else {
        return 0; // recomecos
    }
}