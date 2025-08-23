#include <stdio.h>
#include <stdlib.h>

int main() {
    int a,n;char nome[5][10];float nota[3],media[5],somaNota=0;
    for (a=0;a<5;a++){
        printf("\ndigite o nome do aluno %d: ", a+1);
        scanf("%s", nome[a]);
        for(n=0;n<3;n++){
            printf("\ndigite a nota %d do aluno %s: ", n+1, nome[a]);
            scanf("%f", &nota[n]);
            somaNota+=nota[n];system("cls");
        }
        media[a]=somaNota/3;
        somaNota=0;
    }
    for (a=0;a<5;a++){
        printf("\n aluno: %s,media =%.2f",nome[a], media[a]);

    }
    return 0;
}