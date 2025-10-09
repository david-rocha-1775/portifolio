/*Enunciado: O shopping "Universo" precisa de um sistema para calcular o valor do estacionamento. A tarifa depende do dia da semana e do número de horas que o cliente permaneceu no local.

As regras são as seguintes:

Dias de semana (Segunda a Sexta): A tarifa é de R$ 5,00 por hora.
Fim de semana (Sábado e Domingo): A tarifa é de R$ 8,00 por hora.
Tarefa: Crie uma função chamada calcularTarifa que receba o dia da semana (representado por um número de 1 a 7, onde 1 é Domingo) e a quantidade de horas. A função deve retornar o valor total a ser pago.

Retorne um double com o valor total. Se o dia da semana for inválido (menor que 1 ou maior que 7), ou se as horas forem negativas, o valor a ser retornado é 0.0.

Entrada: A função receberá dois parâmetros: int diaDaSemana (1=Domingo, 2=Segunda, ..., 7=Sábado) e int horas.

Saída: Sua função deve retornar um double com o valor da tarifa.*/
#include <stdio.h>
double calcularTarifa(int diaDaSemana, int horas) {
    if (diaDaSemana < 1 || diaDaSemana > 7 || horas < 0) {
        return 0.0;
    }
    
    double tarifa;
    if (diaDaSemana >= 2 && diaDaSemana <= 6) { // Dias de semana
        tarifa = 5.0 * horas;
    } else { // Fim de semana
        tarifa = 8.0 * horas;
    }
    
    return tarifa;
}