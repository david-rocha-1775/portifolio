/*Du, Dudu e Edu aproveitaram que não tinham aula na sexta-feira e resolveram ir para o Barbosinha conversar e comer uns petiscos (situação hipotética, devido a pandemia). Após um tempo de conversa, bebidas e comidas, eles resolveram pedir a conta e o garçom entregou uma conta indivual para cada um e avisou que os 10% ainda não estavam inclusos. Com isso, eles viram você passando e, sabendo que você é um exímio programador, pediram para ajudar a calcular quanto cada um iria pagar e qual o valor total da conta com os 10% inclusos.*/
#include <stdio.h>
int main(){
    float du, dudu, edu, total;
    scanf("%f %f %f", &du, &dudu, &edu);
    du= du + du * 0.1;
    dudu= dudu + dudu * 0.1;
    edu= edu + edu * 0.1;
    total= du + dudu + edu;
    printf("%.2f %.2f %.2f \n%.2f", du, dudu, edu, total);
    return 0;
}