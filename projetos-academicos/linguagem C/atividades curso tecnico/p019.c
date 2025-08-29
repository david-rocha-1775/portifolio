#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, v[10], somapar=0, somaimpar=0, contpar=0, contimpar=0;
    float perc_par, perc_impar;
    for (i=0; i<10; i++){
        printf("\ndigite o valor %d: ", i+1);
        scanf("%d", &v[i]);
        if(v[i]%2==0){
            somapar+=v[i];
            contpar++;
        } else {
            somaimpar+=v[i];
            contimpar++;
        }
    }
    perc_impar = (float)contimpar/10*100;
    perc_par = (float)contpar/10*100;
    printf("\nsoma dos pares: %d", somapar);
    printf("\nsoma dos impares: %d", somaimpar);
    printf("\nquantidade de pares: %d", contpar);
    printf("\nquantidade de impares: %d", contimpar);
    printf("\npercentual de pares: %.2f%%", perc_par);
    printf("\npercentual de impares: %.2f%%", perc_impar);
    return 0;
}