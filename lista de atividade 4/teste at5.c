#include <stdio.h>

int main() {
    int numeros[5], i, j;  // Array para armazenar os 5 n�meros
    int contadorDivisores;

    // Leitura dos 5 n�meros
    for ( i = 0; i < 5; i++) {
        printf("Digite o n�mero %d:\n", i + 1);
        scanf("%d", &numeros[i]);
    }

    // Processamento de cada n�mero
    for ( j = 0; j < 5; j++) {
        contadorDivisores = 0;
        printf("\nDivisores de %d:\n", numeros[j]);

        // Verifica os divisores de cada n�mero
        for ( i = 1; i < numeros[j]; i++) {
            if (numeros[j] % i == 0) {  // Verifica se o resto da divis�o � zero
                printf("%d � um divisor de %d\n", i, numeros[j]);
                contadorDivisores++;  // Incrementa o contador de divisores
            }
        }

        // Exibe a quantidade de divisores encontrados
        printf("O n�mero %d tem %d divisores menores que ele.\n", numeros[j], contadorDivisores);
    }

    return 0;
}
