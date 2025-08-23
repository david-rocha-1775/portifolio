#include <stdio.h>
#include <stdlib.h>

int main(){
    int num;
    printf("digite um numero: ");
    scanf("%d", &num);
    if (num>0){
        printf("\no numero é positivo");
    } else if (num<0){
        printf("\no numero é negativo");
    } else {
        printf("\no numero é nulo");
    }
    return 0;
}