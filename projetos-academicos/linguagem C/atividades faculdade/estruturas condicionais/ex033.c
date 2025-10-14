/*Em um novo jogo de RPG, os jogadores definem os pontos de seus personagens em três atributos: Força, Magia e Agilidade (de 1 a 10). Para ajudar os novatos, você precisa criar um recomendador de classes.

Regras de Recomendação (Siga esta ordem):

    Guerreiro: Atribuído se a Força for maior ou igual a 8 E a Magia for menor ou igual a 5.

    Mago: Atribuído se a Magia for maior ou igual a 8 E a Força for menor ou igual a 5.

    Arqueiro: Atribuído se a Agilidade for maior ou igual a 8 E tanto a Força quanto a Magia forem menores ou iguais a 5.

    Paladino: Se o personagem não se qualificar como Guerreiro ou Mago, mas sua Força e Magia forem ambas maiores que 5.

    Ladino: Se o personagem não se qualificar como Arqueiro, mas sua Agilidade for estritamente maior que sua Força e sua Magia.

    Indeciso: Para qualquer outra combinação de atributos não listada acima.

    (Força, Magia, Agilidade) e sugira a classe mais adequada. A ordem das verificações é importante para resolver ambiguidades.

Entrada esperada: Três números inteiros em uma linha: F (Força), M (Magia) e A (Agilidade).

Saída esperada: A classe recomendada no formato "Classe recomendada: [Nome da Classe]".*/
#include <stdio.h>
int main() {
    int F, M, A;
    scanf("%d %d %d", &F, &M, &A);

    if (F >= 8 && M <= 5) {
        printf("Classe recomendada: Guerreiro\n");
    } else if (M >= 8 && F <= 5) {
        printf("Classe recomendada: Mago\n");
    } else if (A >= 8 && F <= 5 && M <= 5) {
        printf("Classe recomendada: Arqueiro\n");
    } else if (F > 5 && M > 5) {
        printf("Classe recomendada: Paladino\n");
    } else if (A > F && A > M) {
        printf("Classe recomendada: Ladino\n");
    } else {
        printf("Classe recomendada: Indeciso\n");
    }

    return 0;
}