/*Um robô recebe coordenadas codificadas em formato especial. Para decodificar as coordenadas reais, use as fórmulas:

• x_real = (x_cod - 1000) / 10.0

• y_real = (y_cod + 500) / 5.0

• z_real = z_cod * 2.5

IMPORTANTE: Você deve criar três funções: decodificarX, decodificarY e decodificarZ. Cada uma recebe um parâmetro int e retorna um float com a coordenada decodificada.

Entrada: Não há entrada do usuário.

Saída: Suas funções devem calcular e retornar as coordenadas decodificadas.*/
#include <stdio.h>
float decodificarX(int x_cod) {
    return (x_cod - 1000) / 10.0;
}
float decodificarY(int y_cod) {
    return (y_cod + 500) / 5.0;
}
float decodificarZ(int z_cod) {
    return z_cod * 2.5;
}
