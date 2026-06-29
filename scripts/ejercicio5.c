#include <stdio.h>

int main()
{
    int hola = 1;
    int *p1 = &hola, *p2 = &hola;

    printf("p1 = %p\n", p1);
    printf("p2 = %p\n", p2);

    p2 = p1 + 3;
    printf("p1 = %p\n", p1);
    printf("p2 = %p\n", p2);
    printf("Es igual a p2? %d\n", p1 == p2);

    printf("*p1 = %d\n", *p1);
    printf("*p2 = %d\n", *p2);

    return 0;
}
