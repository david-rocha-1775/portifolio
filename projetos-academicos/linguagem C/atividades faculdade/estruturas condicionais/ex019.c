/*Enunciado: Um centro de meteorologia precisa de um programa que classifique a intensidade de um ciclone tropical com base na velocidade de seus ventos sustentados, utilizando a escala Saffir-Simpson.

O programa deve ler a velocidade do vento em km/h e classificá-lo da seguinte forma:

Abaixo de 119 km/h: "Depressao/Tempestade Tropical"

119 a 153 km/h: "Furacao Categoria 1"

154 a 177 km/h: "Furacao Categoria 2"

178 a 208 km/h: "Furacao Categoria 3 (Grande Furacao)"

209 a 251 km/h: "Furacao Categoria 4 (Grande Furacao)"

252 km/h ou mais: "Furacao Categoria 5 (Grande Furacao)"

Entrada esperada: Um único número inteiro V (velocidade do vento em km/h).

Saída esperada: A string com a classificação do ciclone.*/
#include <stdio.h>
const char* classificarCiclone(int velocidadeVento) {
    if (velocidadeVento < 119) {
        return "Depressao/Tempestade Tropical";
    } else if (velocidadeVento <= 153) {
        return "Furacao Categoria 1";
    } else if (velocidadeVento <= 177) {
        return "Furacao Categoria 2";
    } else if (velocidadeVento <= 208) {
        return "Furacao Categoria 3 (Grande Furacao)";
    } else if (velocidadeVento <= 251) {
        return "Furacao Categoria 4 (Grande Furacao)";
    } else {
        return "Furacao Categoria 5 (Grande Furacao)";
    }
}
int main() {
    int velocidadeVento;
    scanf("%d", &velocidadeVento);
    
    const char* classificacao = classificarCiclone(velocidadeVento);
    printf("%s\n", classificacao);
    
    return 0;
}
