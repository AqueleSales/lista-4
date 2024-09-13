#include <stdio.h>

int par(int a) {
    if (a % 2 == 0) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int a;
    printf("fale um numero:\n");
    scanf("%d", &a);
    if (par(a)) {
        printf("o valor %d é par.\n", a);
    } else {
        printf("o valor %d é ímpar.\n", a);
    }

    return 0;
}
