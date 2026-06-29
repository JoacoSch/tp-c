#include <stdio.h>

int main()
{
    int a = 10;
    int b = 20;
    int *p;

    p = &a;
    printf("--- despues de p = &a ---\n");
    printf("a = %d (dir de a = %p)\n", a, &a);
    printf("b = %d (dir de b = %p)\n", b, &b);
    printf("p guarda %p (dir de p = %p)\n", p, &p);
    printf("*p = %d\n\n", *p);

    p = &b;
    printf("--- despues de p = &b ---\n");
    printf("a = %d (dir de a = %p)\n", a, &a);
    printf("b = %d (dir de b = %p)\n", b, &b);
    printf("p guarda %p (dir de p = %p)\n", p, &p);
    printf("*p = %d\n", *p);

    return 0;
}
