#include <stdio.h>


int main() {
    int a, b, c, d, e, resultadoA,resultadoB,resultadoC,resultadoD,resultadoE;
    printf("digite o numero:\n");
    scanf("%d", &a);
    printf("digite o numero:\n");
    scanf("%d", &b);
    printf("digite o numero:\n");
    scanf("%d", &c);
    printf("digite o numero:\n");
    scanf("%d", &d);
    printf("digite o numero:\n");
    scanf("%d", &e);

    resultadoA = absoluto(a);
    resultadoB = absoluto(b);
    resultadoC = absoluto(c);
    resultadoD = absoluto(d);
    resultadoE = absoluto(e);

    printf("o valor � :%d,%d,%d,%d,%d", resultadoA, resultadoB, resultadoC, resultadoD, resultadoE);

    return 0;
}


int absoluto(a){
    if (a>=0){
        a = a;
        return a;
    }else {
        a *= -1;
        return a;
    }
}
