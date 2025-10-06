/*Faça um programa que leia idades de três pessoas em dias e mostre suas idades em anos, meses e dias. Considere que todo ano contém 360 dias e todo mês tem 30 dias. */
#include <stdio.h>
void age(int total_dias){
    int anos, meses, dias;
    anos = total_dias / 360;
    total_dias = total_dias % 360;
    meses = total_dias / 30;
    dias = total_dias % 30;
    printf("%d %d %d\n",anos,meses,dias);
}
int main(){
    int d1,d2,d3;
    scanf("%d %d %d",&d1,&d2,&d3);
    age(d1);
    age(d2);    
    age(d3);
    return 0;
}
