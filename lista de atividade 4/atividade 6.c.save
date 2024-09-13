#include <stdio.h>

float calculaMedia(float nota1, float nota2, float nota3, char letra) {
    float media;

    if (letra == 'A') {

        media = (nota1 + nota2 + nota3) / 3;
    } else if (letra == 'P') {

        media = (nota1 * 5 + nota2 * 3 + nota3 * 2) / 10;
    } else if (letra == 'H') {

        media = 3 / ((1 / nota1) + (1 / nota2) + (1 / nota3));
    } else {
        printf("Letra inválida!\n");
        return -1;
    }

    return media;
}

int main() {
    float nota1 = 7.0, nota2 = 8.0, nota3 = 9.0;
    char letra = 'A';

    float resultado = calculaMedia(nota1, nota2, nota3, letra);
    if (resultado != -1) {
        printf("A média é: %.2f\n", resultado);
    }

    return 0;
}
