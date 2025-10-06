/*Um técnico precisa calcular o consumo total de energia de 3 dispositivos. Para cada dispositivo: Energia = Potência × Tempo × Eficiência. O consumo total é a soma das três energias.

IMPORTANTE: Você deve criar duas funções:

1. calcularEnergia que receba três parâmetros float (potência, tempo, eficiência) e retorne um float com a energia do dispositivo.

2. calcularConsumoTotal que receba nove parâmetros float (p1, t1, e1, p2, t2, e2, p3, t3, e3) e retorne um float com o consumo total.

Entrada: Não há entrada do usuário.

Saída: Suas funções devem calcular e retornar o consumo total de energia.*/
#include <stdio.h>
float calcularEnergia(float potencia, float tempo, float eficiencia) {
    return potencia * tempo * eficiencia;
}
float calcularConsumoTotal(float p1, float t1, float e1, float p2, float t2, float e2, float p3, float t3, float e3) {
    return calcularEnergia(p1, t1, e1) + calcularEnergia(p2, t2, e2) + calcularEnergia(p3, t3, e3);
}