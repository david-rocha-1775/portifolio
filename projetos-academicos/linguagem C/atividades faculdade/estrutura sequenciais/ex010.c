/*Você está tentando economizar água em suas atividades diárias. Cada descarga no vaso sanitário que você deixou de usar economiza 12 litros de água. Cada minuto a menos no chuveiro economiza 9 litros de água. Cada minuto que a torneira fica fechada economiza 2 litros de água.
Seu programa deve imprimir uma única linha contendo a quantidade total de litros de água economizados*/
#include <stdio.h>
int main(){
    int descargas, minutosChuveiro, minutosTorneira,litrosEconomizados;

    scanf("%d %d %d", &descargas, &minutosChuveiro, &minutosTorneira);
    litrosEconomizados = (descargas * 12) + (minutosChuveiro * 9) + (minutosTorneira * 2);
    printf("Voce economizou %d litros de agua\n", litrosEconomizados);

    return 0;
}