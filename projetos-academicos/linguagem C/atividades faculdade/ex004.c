/*media de notas com pesos diferentes*/
#include <stdio.h>
int main(){
    float n1, n2 ,n3, media;
    printf("digite a primeira nota: ");
    scanf("%f",&n1);
    printf("digite a segunda nota: ");
    scanf("%f",&n2);
    printf("digite a terceira nota: ");
    scanf("%f",&n3);
    media = ((n1*1) + (n2*2) + (n3*3))/3;
    printf("media com peso 1,2,3 respectivamente =%.2f",media);
    return 0;
}