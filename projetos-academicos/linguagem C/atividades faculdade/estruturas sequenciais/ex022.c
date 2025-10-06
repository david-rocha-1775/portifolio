/*Nessa questão, você terá 5 pares de números e para cada um deles deverá ser impresso o maior número do par. A função responsável por realizar a essa operação deverá chamar maiorAB e receber dois valores numéricos.*/
#include <stdio.h>
int maiorAB(int a, int b){
    if(a > b){
        return a;
    } else {
        return b;
    }
}
int main(){
    int n1, n2;
    for(int i = 0; i < 5; i++){
        scanf("%d %d", &n1, &n2);
        printf("%d\n", maiorAB(n1, n2));
    }
    return 0;
}