/*Mellin é um lendário feiticeiro conhecido por toda a terra tupiniquim. Cercado por mistérios, ninguém conhece ao certo o que ele faz ou de onde veio, são apenas lendas. Recentemente, em uma de suas escavações, o Instituto Brilhante de Grandes Escavações (IBGE) encontrou três números misteriosos em ruínas de um lugar que Mellin supostamente viveu.  A principal teoria é que um destes números representa a idade de Mellin em dias, no momento em que foram escritos. O problema é que eles não conseguem saber qual desses números seria a idade e precisam compará-los, porém meros mortais têm dificuldade em entender idades em dias.

Dessa forma, o IBGE lançou um Programa Internacional Brilhante de Iniciação Científica (PIBIC) de modo que estudantes universitários ao redor do mundo iriam ajudar a entender estas datas. O seu papel é dizer quantos anos, meses e dias representam cada um dos três números misteriosos. Para facilitar o entendimento, o IBGE pediu que uma função chamada age que recebe a quantidade dias a serem calculadas fosse implementada. Essa função deve transformar e imprimir essa informação em anos, meses e dias.

IMPORTANTE: No mundo de Mellin, todos os anos têm 360 dias e todos os meses têm 30 dias.*/
#include <stdio.h>
void age(int dias){
    int anos = dias / 360;
    dias = dias % 360;
    int meses = dias / 30;
    dias = dias % 30;
    printf("%d ano(s), %d mes(es) e %d dia(s)\n", anos, meses, dias);
}
int main(){
    int n1, n2, n3;
    scanf("%d %d %d", &n1, &n2, &n3);
    age(n1);
    age(n2);
    age(n3);
    return 0;
}