#include <stdio.h>

int main()
{
    int a, b;
    a = 552;
    b = 6;

    int *x = &a;
    int *y = &b;

    int temp = *x; //
    *x = *y;
    *y = temp;

    printf("Valor de X: %d\nValor de Y: %d", *x, *y);
    return 0;
}
