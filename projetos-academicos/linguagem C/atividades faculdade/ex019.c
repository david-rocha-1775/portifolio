/*Du, Dudu e Edu aproveitaram que não tinham aula na sexta-feira e resolveram ir para o Barbosinha conversar e comer uns petiscos (situação hipotética, devido a pandemia). Após um tempo de conversa, bebidas e comidas, eles resolveram pedir a conta e o garçom entregou uma conta indivual para cada um e avisou que os 10% ainda não estavam inclusos. Com isso, eles viram você passando e, sabendo que você é um exímio programador, pediram para ajudar a calcular quanto cada um iria pagar e qual o valor total da conta com os 10% inclusos.*/
#include <stdio.h>
int main(){
    double du, dudu, edu, total;
    scanf("%lf %lf %lf", &du, &dudu, &edu);
    total = (du + dudu + edu)*1.1;
    du= du * 1.1;
    dudu= dudu * 1.1;
    edu= edu * 1.1;
    printf("%.2lf %.2lf %.2lf \n%.2lf", du, dudu, edu, total);
    return 0;
}