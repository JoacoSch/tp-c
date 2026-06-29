#include <stdio.h>

int main()
{
    char texto[] = "Hola";
    char *p = texto;

    printf("%c\n", *p);
    printf("%p\n", p);

    p++;
    printf("%c\n", *p);
    printf("%p\n", p);

    p++;
    printf("%c\n", *p);
    printf("%p\n", p);

    p++;
    printf("%c\n", *p);
    printf("%p\n", p);

    p++;
    printf("%c\n", *p);
    printf("%p\n", p);

    return 0;
}
