/*Enunciado: Um hemocentro precisa de um sistema de triagem digital para verificar se um candidato está apto a doar sangue. A elegibilidade depende de critérios como idade, peso e se a pessoa fez tatuagens recentemente.

Tarefa: Crie uma função chamada verificarElegibilidade que receba a idade (int), o peso em kg (double), e há quantos meses foi feita a última tatuagem (int). A função deve retornar um código numérico indicando o status do candidato.

As regras de elegibilidade são:

Retorne 4 para Apto: O candidato atende a todos os critérios.

Retorne 1 para Inapto por Idade: Idade menor que 18 ou maior que 69 anos.

Retorne 2 para Inapto por Peso: Peso inferior a 50.0 kg.

Retorne 3 para Inapto por Tatuagem: Última tatuagem feita há menos de 12 meses.

Retorne 0 para Dados Inválidos: Se qualquer um dos valores for negativo.

Atenção: A verificação deve ter a seguinte prioridade: Idade > Peso > Tatuagem. Se um candidato for inapto por mais de um motivo, a função deve retornar o código do primeiro critério que ele não atendeu nessa ordem.

Entrada: A função receberá três parâmetros: int idade, double peso, int mesesUltimaTatuagem.

Saída: Sua função deve retornar um int com o código de status.*/
#include <stdio.h>
int verificarElegibilidade(int idade, double peso, int mesesUltimaTatuagem) {
    if (idade < 0 || peso < 0 || mesesUltimaTatuagem < 0) {
        return 0; // Dados Inválidos
    }
    if (idade < 18 || idade > 69) {
        return 1; // Inapto por Idade
    }
    if (peso < 50.0) {
        return 2; // Inapto por Peso
    }
    if (mesesUltimaTatuagem < 12) {
        return 3; // Inapto por Tatuagem
    }
    return 4; // Apto
}