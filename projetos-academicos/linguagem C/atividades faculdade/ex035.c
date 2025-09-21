/*Crie uma função chamada calculaAreaTrapezio que calcule a área de um trapézio usando uma função. A função deve se chamar calculaAreaTrapezio e receber como parâmetros a base maior, base menor e altura (todos valores reais). A função deve retornar a área calculada.*/
#include <stdio.h>
float calculaAreaTrapezio(float baseMaior, float baseMenor, float altura){
    return ((baseMaior + baseMenor) * altura) / 2;
}
