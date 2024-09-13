#include <stdio.h>

// Função para calcular a potência de inteiros
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

    // Imprimindo o resultado da função poten
    printf("O valor é: %d\n", poten(base, expoente));

    return 0;
}
