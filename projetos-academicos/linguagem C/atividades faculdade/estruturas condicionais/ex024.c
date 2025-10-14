/*Enunciado: Uma aplicação de fitness precisa de uma função para classificar a zona de frequência cardíaca de um usuário durante um exercício. A classificação é baseada na percentagem da frequência cardíaca máxima (FCM) do indivíduo. A FCM é estimada como 220 menos a idade da pessoa.

Tarefa: Crie uma função chamada identificarZonaCardiaca que receba a idade (int) e os batimentos por minuto atuais (int) do usuário. A função deve retornar um código numérico que represente a zona de treino.

As zonas são definidas como percentagens da FCM:

Retorne 1 para Repouso/Leve (Abaixo de 60% da FCM).

Retorne 2 para Moderada (Entre 60% e 69% da FCM).

Retorne 3 para Aeróbica (Entre 70% e 79% da FCM).

Retorne 4 para Anaeróbica (Entre 80% e 89% da FCM).

Retorne 5 para Esforço Máximo (90% da FCM ou mais).

Retorne 0 se a idade ou os batimentos forem inválidos (zero ou negativo).

Entrada: A função receberá dois parâmetros: int idade, int bpmAtual.

Saída: Sua função deve retornar um int com o código da zona cardíaca.*/
#include <stdio.h>
int identificarZonaCardiaca(int idade, int bpmAtual) {
    if (idade <= 0 || bpmAtual <= 0) {
        return 0; // Idade ou batimentos inválidos
    }

    int fcm = 220 - idade; // Frequência Cardíaca Máxima
    float percentual = (bpmAtual / (float)fcm) * 100; // Percentual da FCM

    if (percentual < 60) {
        return 1; // Repouso/Leve
    } else if (percentual >= 60 && percentual < 70) {
        return 2; // Moderada
    } else if (percentual >= 70 && percentual < 80) {
        return 3; // Aeróbica
    } else if (percentual >= 80 && percentual < 90) {
        return 4; // Anaeróbica
    } else {
        return 5; // Esforço Máximo
    }
}