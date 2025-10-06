/*Leia três números reais e imprima a média aritmética com duas casas decimais.*/
#include <stdio.h>
int main(){
    float n1, n2, n3, media;
    scanf("%f %f %f", &n1, &n2, &n3);
    media = (n1 + n2 + n3) / 3;
    printf("%.2f\n", media);
    return 0;
}