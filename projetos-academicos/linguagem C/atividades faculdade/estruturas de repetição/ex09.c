/*Enunciado: Um programa de análise de texto precisa classificar caracteres de um documento.

Tarefa: Escreva um programa que leia um inteiro N, seguido por N caracteres. O programa deve usar um laço de repetição para ler cada caractere e uma estrutura condicional (if/else if) para classificá-lo em uma de quatro categorias: "Vogal", "Consoante", "Dígito" ou "Outro". Ao final, imprima a contagem de cada categoria.

Regras:

Vogais: a, e, i, o, u (maiúsculas ou minúsculas).
Consoantes: Outras letras (maiúsculas ou minúsculas).
Dígitos: 0 a 9.
Outros: Símbolos, pontuação, espaços, etc.
Entrada: A primeira linha contém um inteiro N (N >= 0). As N linhas seguintes contêm, cada uma, um caractere.

Saída: A saída deve ser em quatro linhas:

Vogais: X
Consoantes: Y
Digitos: Z
Outros: W*/
#include <stdio.h>
int main() {
    int N;
    char caractere;
    int contadorVogais = 0, contadorConsoantes = 0, contadorDigitos = 0, contadorOutros = 0;

    // Ler o número de caracteres
    scanf("%d", &N);

    // Loop para ler cada caractere
    for (int i = 0; i < N; i++) {
        scanf(" %c", &caractere); // Espaço antes de %c para ignorar espaços em branco

        // Classificar o caractere
        if (caractere == 'a' || caractere == 'e' || caractere == 'i' || caractere == 'o' || caractere == 'u' ||
            caractere == 'A' || caractere == 'E' || caractere == 'I' || caractere == 'O' || caractere == 'U') {
            contadorVogais++;
        } else if ((caractere >= 'b' && caractere <= 'z') || (caractere >= 'B' && caractere <= 'Z')) {
            contadorConsoantes++;
        } else if (caractere >= '0' && caractere <= '9') {
            contadorDigitos++;
        } else {
            contadorOutros++;
        }
    }

    // Imprimir os resultados
    printf("Vogais: %d\n", contadorVogais);
    printf("Consoantes: %d\n", contadorConsoantes);
    printf("Digitos: %d\n", contadorDigitos);
    printf("Outros: %d\n", contadorOutros);

    return 0;
}