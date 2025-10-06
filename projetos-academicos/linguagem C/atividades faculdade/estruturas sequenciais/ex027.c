/*Escreva um programa que transforme números decimais em binário. Seu programa deve ler 5 números inteiros e para cada um deles deve imprimir sua representação em código binário. A função responsável pela transformação deve se chamar binario e receber como parâmetro um número inteiro e imprimir o valor binário. */
#include <stdio.h>
void binario(int n){
    int bin[32], i = 0;
    if(n == 0){
        printf("0b0");
        return;
    }
    while(n > 0){
        bin[i] = n % 2;
        n = n / 2;
        i++;
    }
    printf("0b");
    for(i = i - 1; i >= 0; i--){
        printf("%d", bin[i]);
    }
}
int main(){
    int n, i;
    for(i = 0; i < 5; i++){
        scanf("%d", &n);
        binario(n);
        printf("\n");

    }
    return 0;
}