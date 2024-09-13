#include <stdio.h>

void SomaDivisores(int a) {
    int i, cont = 0;
    printf("\nos divisores de %d:\n", a);

    for (i = 1; i < a; i++) {
        if (a % i == 0) {
            printf("%d e um divisor de %d\n", i, a);
            cont++;
        }
    }
    printf("o numero %d tem %d divisores menores que ele.\n", a, cont);
}

int main() {
    int a, b, c, d, e;

    printf("digite o primeiro numero:\n");
    scanf("%d", &a);
    printf("digite o segundo numero:\n");
    scanf("%d", &b);
    printf("digite o terceiro numero:\n");
    scanf("%d", &c);
    printf("digite o quarto numero:\n");
    scanf("%d", &d);
    printf("digite o quinto numero:\n");
    scanf("%d", &e);

    SomaDivisores(a);
    SomaDivisores(b);
    SomaDivisores(c);
    SomaDivisores(d);
    SomaDivisores(e);

    return 0;
}
