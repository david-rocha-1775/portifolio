/*Dada a descrição de uma data, apresente-a conforme os formatos definidos abaixo.*/
#include <stdio.h>
int main(){
    int dia, mes, ano;
    scanf("%d/%d/%d", &dia, &mes, &ano);
    printf("%02d-%02d-%02d\n", dia, mes, ano);
    printf("%02d-%02d-%02d\n", mes, dia, ano);
    printf("%02d/%02d/%02d\n", ano, mes, dia);
    return 0;
}