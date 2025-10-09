/*Enunciado: Uma agência ambiental monitora a qualidade do ar usando sensores que retornam um código numérico. É preciso criar um sistema que traduza esse código em um diagnóstico claro para o público.

Regras de Diagnóstico:

Código 1: Qualidade Boa.
Código 2: Qualidade Moderada.
Código 3: Qualidade Ruim.
Código 4: Qualidade Muito Ruim.
Código 5: Qualidade Péssima.
Tarefa: Crie uma função chamada diagnosticarQualidadeAr que receba o código do sensor (int) e retorne um novo código numérico simplificado para o sistema de alerta.

Retorne 10 para "Boa".
Retorne 20 para "Moderada".
Retorne 30 para "Ruim".
Retorne 40 para "Muito Ruim".
Retorne 50 para "Péssima".
Para qualquer outro código de sensor, retorne 0 (Erro de Leitura).
Requisito: A solução deve obrigatoriamente usar uma estrutura switch.

Entrada: A função receberá um parâmetro: int codigoSensor.

Saída: Sua função deve retornar um int com o código de alerta.*/
#include <stdio.h>
int diagnosticarQualidadeAr(int codigoSensor) {
    switch (codigoSensor) {
        case 1:
            return 10; // Boa
        case 2:
            return 20; // Moderada
        case 3:
            return 30; // Ruim
        case 4:
            return 40; // Muito Ruim
        case 5:
            return 50; // Péssima
        default:
            return 0; // Erro de Leitura
    }
}