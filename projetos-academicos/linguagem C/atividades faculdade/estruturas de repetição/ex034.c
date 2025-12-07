/*Escreva um programa que leia um número inteiro positivo N (N > 1) e determine se ele é um número primo. Um número primo é aquele que é divisível apenas por 1 e por ele mesmo. Utilize um loop while (ou for) para verificar os divisores.

Entrada esperada: Um número inteiro N maior que 1.

Saída esperada: "[N] eh primo" ou "[N] nao eh primo".*/
#include <stdio.h>  
int main() {
    int N;
    int eh_primo = 1; // Assume que N é primo

    scanf("%d", &N);

    if (N <= 1) {
        printf("%d nao eh primo\n", N);
        return 0;
    }

    for (int i = 2; i * i <= N; i++) {
        if (N % i == 0) {
            eh_primo = 0; // Encontrou um divisor, N não é primo
            break;
        }
    }

    if (eh_primo) {
        printf("%d eh primo\n", N);
    } else {
        printf("%d nao eh primo\n", N);
    }

    return 0;
}