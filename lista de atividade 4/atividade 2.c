#include <stdio.h>
#include <math.h>

float pontos(float x1, float y1, float x2, float y2){
    float a;
    a = sqrt((x1 - x2) * (x1 - x2)) - ((y1 - y2) * (y1 - y2));
    return a;
}

int main() {
    float x1, y1, x2, y2, a, c;
    printf("digite o primeiro valor :\n");
    scanf("%f", &x1);
    printf("digite o segundo valor :\n");
    scanf("%f", &y1);
    printf("digite o terceiro valor :\n");
    scanf("%f", &x2);
    printf("digite o quarto valor :\n");
    scanf("%f", &y2);
    c = pontos(x1, y1, x2, y2);

    printf("o valor � :%.2f", c);

    return 0;
}
