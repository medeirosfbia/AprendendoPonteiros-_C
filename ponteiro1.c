#include <stdio.h> //Necessário para printf

int main() {
    int x = 5;
    int *p = &x; //declarar ponteiro = endereço da variável

    printf("Valor de X: %d\n", *p);
}