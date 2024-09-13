#include <stdio.h>

int maior(int a, int b){
    if(a>b){
        return a;
    }else{
        return b;
    }
}

int main() {
    int a, b, c;
    printf("digite o primeiro valor :\n");
    scanf("%d", &a);
    printf("digite o segundo valor :\n");
    scanf("%d", &b);

    c = maior(a, b);
    printf("o maior valor é :%d", c);

    return 0;
}
