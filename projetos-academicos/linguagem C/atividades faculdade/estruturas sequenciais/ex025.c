/*Escreva um teste programa que leia, para uma determina pessoa, a altura da mesma. Este programa deve utilizar uma função chamada peso_ideal que recebe como parâmetro a altura em ponto flutuante e  imprime o peso ideal para homem e mulher.

Para homens, deve-se calcular o peso ideal usando a fórmula de peso ideal = 72.7 x alt - 58 e, para mulheres, peso ideal = 62.1 x alt - 44.7.*/
#include <stdio.h>
void peso_ideal(float alt){
    float peso_homem = 72.7 * alt - 58;
    float peso_mulher = 62.1 * alt - 44.7;
    printf("%.2f %.2f", peso_homem, peso_mulher);
}
int main(){
    float altura;
    scanf("%f", &altura);
    peso_ideal(altura);
    return 0;
}