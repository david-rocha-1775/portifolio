/*Quando Sam e Jean estão viajando, eles sempre veem esse terminais que mostram a temperatura do local onde eles se encontram. Um problema muito comum que causa diversas confusões é que dependendo do lugar, a temperatura é exibida em graus Celsius e em outros lugares a temperatura é exibida em Fahrenheit. Atualmente eles estão viajando pela América do Sul onde é comum medir a temperatura em Celsius. Escreva uma função chamda converte que recebe uma temperatura em ponto flutuante e imprima o resultado após a conversão para Fahrenheit.*/
#include <stdio.h>
void converte(float celsius){
    float fahrenheit = (celsius * 9/5) + 32;
    printf("%.1f\n", fahrenheit);
}
int main(){
    float celsius;
    scanf("%f", &celsius);
    converte(celsius);
    return 0;
}