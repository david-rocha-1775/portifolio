/*Em um jogo de RPG, os atributos de um personagem determinam seus pontos de combate. Dados os atributos Força, Destreza, Inteligência e Carisma, calcule:

• Pontos de Ataque = Força × 3 + Destreza × 2

• Pontos de Magia = Inteligência × 4 + Carisma

• Pontos de Defesa = (Força + Destreza) × 2

• Total = soma de todos os pontos

Entrada: Quatro números inteiros: Força, Destreza, Inteligência, Carisma.

Saída: Quatro números: Pontos de Ataque, Pontos de Magia, Pontos de Defesa, Total.*/
#include <stdio.h>
int main() {
    int forca, destreza, inteligencia, carisma;
    int pontosAtaque, pontosMagia, pontosDefesa, total;

    scanf("%d %d %d %d", &forca, &destreza, &inteligencia, &carisma);

    pontosAtaque = forca * 3 + destreza * 2;
    pontosMagia = inteligencia * 4 + carisma;
    pontosDefesa = (forca + destreza) * 2;
    total = pontosAtaque + pontosMagia + pontosDefesa;

    printf("%d %d %d %d\n", pontosAtaque, pontosMagia, pontosDefesa, total);

    return 0;
}