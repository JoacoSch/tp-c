#include <stdio.h>

int main()
{
    int valor = 100;
    int *p1 = &valor;
    int *p2 = &valor;

    printf("--- antes de *p1 = *p1 + 50 ---\n");
    printf("valor = %d (dir de valor = %p)\n", valor, &valor);
    printf("p1 guarda %p (dir de p1 = %p)\n", p1, &p1);
    printf("p2 guarda %p (dir de p2 = %p)\n", p2, &p2);
    printf("*p1 = %d, *p2 = %d\n\n", *p1, *p2);

    *p1 = *p1 + 50;

    printf("--- despues de *p1 = *p1 + 50 ---\n");
    printf("valor = %d (dir de valor = %p)\n", valor, &valor);
    printf("p1 guarda %p (dir de p1 = %p)\n", p1, &p1);
    printf("p2 guarda %p (dir de p2 = %p)\n", p2, &p2);
    printf("*p1 = %d, *p2 = %d\n", *p1, *p2);

    return 0;
}
