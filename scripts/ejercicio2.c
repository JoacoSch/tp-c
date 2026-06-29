#include <stdio.h>

int main()
{
    int edad = 18;
    int *p = &edad;
    printf("direcciones: edad = %p, p = %p\n", &edad, &p);
    printf("valores: edad = %d, *p = %p\n", edad, p);
    *p = 25;
    printf("direcciones: edad = %p, p = %p\n", &edad, &p);
    printf("valores: edad = %d, *p = %p\n", edad, p);
    return 0;
}
