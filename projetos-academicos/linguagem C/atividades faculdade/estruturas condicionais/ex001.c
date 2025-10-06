/*Uma startup de agrotecnologia está desenvolvendo um sistema para recomendar a cultura ideal com base na análise do solo. O sistema considera o nível de pH e o percentual de umidade.

Regras de recomendação:

Soja: pH entre 6.0 e 7.0 (inclusive) E umidade entre 60% e 80% (inclusive).
Milho: pH entre 5.5 e 6.5 (inclusive) E umidade entre 50% e 70% (inclusive).
Café: pH entre 4.5 e 5.5 (inclusive) E umidade entre 70% e 90% (inclusive).
Tarefa: Crie um programa que leia o pH e a umidade do solo. Se as condições forem ideais para uma das culturas, o programa deve imprimir o nome dela. Se as condições se encaixarem em mais de uma cultura, priorize a primeira que aparecer na lista de regras (Soja > Milho > Café). Se nenhuma cultura for ideal, o solo deve ser considerado inadequado.

Entrada esperada: Dois números reais em uma única linha: pH e umidade.

Saída esperada: Uma das seguintes strings, seguida por uma quebra de linha:

"Soja"
"Milho"
"Café"
"Cultura inadequada"*/
#include <stdio.h>
int main() {
    float ph, umidade;
    scanf("%f %f", &ph, &umidade);

    if (ph >= 6.0 && ph <= 7.0 && umidade >= 60.0 && umidade <= 80.0) {
        printf("Soja\n");
    } else if (ph >= 5.5 && ph <= 6.5 && umidade >= 50.0 && umidade <= 70.0) {
        printf("Milho\n");
    } else if (ph >= 4.5 && ph <= 5.5 && umidade >= 70.0 && umidade <= 90.0) {
        printf("Café\n");
    } else {
        printf("Cultura inadequada\n");
    }

    return 0;
}