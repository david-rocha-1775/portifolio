/*Nessa questão, você terá de ler 5 pares de valores inteiros e imprimí-los com a ordem entre eles trocada. A função responsável por realizar a troca deverá chamar trocarAB e receber os dois valores a serem trocados.*/
#include <stdio.h>
void trocarAB(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    int n1, n2;
    for(int i = 0; i < 5; i++){
        scanf("%d %d", &n1, &n2);
        trocarAB(&n1, &n2);
        printf("%d %d\n", n1, n2);
    }
    return 0;
}