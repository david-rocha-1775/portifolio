/*conversao de temperatura*/
#include <stdio.h>
int main(){
    float C, F;
    char opcao;
    printf("conversor de celcius para farenheit e vice versa\n");
    printf("digite 1 para converter de C para F e 2 para o inverso\n");
    scanf("%c",&opcao);
    if (opcao=='1')
    {
        printf("digite a teperatura em C para converter em F\n");
        scanf("%f", &C);
        F= C * 1.8 + 32;
        printf("%.2f graus celcius em farenheit = %.2f\n",C,F);
    }
    else
    {
        printf("digite a teperatura em F para converter em C\n");
        scanf("%f", &F);
        C= (F - 32) * 5 / 9;
        printf("%.2f graus farenheit em celcius = %.2f\n",F,C);
    }
    return 0;
}