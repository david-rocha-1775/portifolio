/*Dada a descrição de um horário, diga quantos segundos já se passaram no dia conforme o formato definido abaixo.*/
#include <stdio.h>
int main(){
    int h, m, s,total_segundos;
    scanf("%d:%d:%d", &h, &m, &s);
    total_segundos = h * 3600 + m * 60 + s;
    printf("La se foram %d segundos que nao voltam mais...\n", total_segundos);
    return 0;
}