#include <stdio.h>

int main() {
    int numeros[5], i, j;  // Array para armazenar os 5 números
    int contadorDivisores;

    // Leitura dos 5 números
    for ( i = 0; i < 5; i++) {
        printf("Digite o número %d:\n", i + 1);
        scanf("%d", &numeros[i]);
    }

    // Processamento de cada número
    for ( j = 0; j < 5; j++) {
        contadorDivisores = 0;
        printf("\nDivisores de %d:\n", numeros[j]);

        // Verifica os divisores de cada número
        for ( i = 1; i < numeros[j]; i++) {
            if (numeros[j] % i == 0) {  // Verifica se o resto da divisão é zero
                printf("%d é um divisor de %d\n", i, numeros[j]);
                contadorDivisores++;  // Incrementa o contador de divisores
            }
        }

        // Exibe a quantidade de divisores encontrados
        printf("O número %d tem %d divisores menores que ele.\n", numeros[j], contadorDivisores);
    }

    return 0;
}
