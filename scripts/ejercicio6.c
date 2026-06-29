#include <stdio.h>

int main()
{
    int numeros[4] = {10, 20, 30, 40};
    int *p = numeros;

    printf("--- el array en memoria ---\n");
    printf("numeros[0] = %d, dir = %p\n", numeros[0], &numeros[0]);
    printf("numeros[1] = %d, dir = %p\n", numeros[1], &numeros[1]);
    printf("numeros[2] = %d, dir = %p\n", numeros[2], &numeros[2]);
    printf("numeros[3] = %d, dir = %p\n", numeros[3], &numeros[3]);

    printf("\n--- recorrido de p ---\n");
    printf("dir de p (&p): %p\n", &p);
    printf("inicio:        p guarda %p, *p = %d\n", p, *p);
    p++;
    printf("primer p++:    p guarda %p, *p = %d\n", p, *p);
    p++;
    printf("segundo p++:   p guarda %p, *p = %d\n", p, *p);

    return 0;
}
