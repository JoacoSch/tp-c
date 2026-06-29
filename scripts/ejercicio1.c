#include <stdio.h>

int main()
{
    short numero = 25;
    short *p;
    p = &numero;

    printf("numero = %d\n", numero);
    printf("direccion de numero = %p\n", &numero);
    printf("valor de p = %p\n", p);
    printf("contenido apuntado por p = %d\n\n", *p);

    printf("tamanio de numero = %lu bytes\n", sizeof(numero));
    printf("tamanio de p = %lu bytes\n", sizeof(p));
    printf("dir de p = %p\n", &p);
    return 0;
}