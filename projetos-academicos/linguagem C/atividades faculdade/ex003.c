/*area circulo*/
#include <stdio.h>
#define pi 3.14
int main(){
    float r1 ,area_c ;
    printf("informe o valor do raio de um circulo: ");
    scanf("%f",&r1);
    area_c= pi * (r1*r1);
    printf("area do circulo = %.2f", area_c);

}
