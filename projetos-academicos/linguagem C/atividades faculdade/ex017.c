/*No mundo mágico, existem três tipos de moedas: Galeões (G), Sicles (S) e Nuques (N). A taxa de conversão é: 1 Galeão = 17 Sicles, 1 Sicle = 29 Nuques*/
#include <stdio.h>
int main(){
    int galeao, sicles, nuques;
    int total;
    scanf("%d %d %d", &galeao, &sicles, &nuques);
    total = (galeao * 17 * 29) + (sicles * 29) + nuques;
    printf("O bruxo possui %d Nuques\n", total);
    return 0;
}