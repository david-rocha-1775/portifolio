/*Um pirata escondeu um tesouro e deixou coordenadas codificadas. Para decodificar as coordenadas reais:

• X_real = (codigo_x × 2 + chave_secreta) ÷ 3

• Y_real = (codigo_y - chave_secreta × 2) ÷ 4

• Distância da origem = X_real² + Y_real²

Entrada: Três números inteiros: codigo_x, codigo_y, chave_secreta.

Saída: Três números: X_real, Y_real, distância da origem.*/
#include <stdio.h>
int main() {
    int codigo_x, codigo_y, chave_secreta;
    scanf("%d %d %d", &codigo_x, &codigo_y, &chave_secreta);

    double x_real = (codigo_x * 2.0 + chave_secreta) / 3.0;
    double y_real = (codigo_y - chave_secreta * 2.0) / 4.0;
    double distancia_origem =(x_real * x_real )+( y_real * y_real);

    printf("%.0f %.0f %.0f\n", x_real, y_real, distancia_origem);
    return 0;
}