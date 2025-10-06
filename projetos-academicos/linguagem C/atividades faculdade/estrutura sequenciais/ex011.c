/*Você está planejando uma viagem e precisa se organizar financeiramente para realizá-la. Para isso, quer saber quanto precisa economizar por mês para alcançar seu objetivo.*/
#include <stdio.h>
int main() {
    int custo_total, meses,guardado;
    float economia_mensal;
    scanf("%d %d %d", &custo_total, &guardado,&meses);
    economia_mensal = (custo_total - guardado) / meses;
    printf("Voce precisa economizar R$%.2f por mes\n", economia_mensal);
    return 0;
}