#include <stdio.h>

// Fun��o para calcular a pot�ncia de inteiros
int poten(int base, int expoente) {
    int resultado = 1;

    for (int i = 0; i < expoente; i++) {
        resultado *= base;
    }

    return resultado;
}

int main() {
    int base, expoente;

    // Lendo a base e o expoente
    printf("Digite a base:\n");
    scanf("%d", &base);

    printf("Digite o expoente:\n");
    scanf("%d", &expoente);

    // Imprimindo o resultado da fun��o poten
    printf("O valor �: %d\n", poten(base, expoente));

    return 0;
}
