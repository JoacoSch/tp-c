# Codeando en C — Punteros

> Inicio / Trabajos Prácticos / Unidad 2: Estructuras de datos / Codeando en C - Punteros

Para ver el tutorial de Code Blocks entren [acá ↗].

Cuando pido **graficar la memoria** me refiero a lo que vimos la clase de punteros, cuando dibujamos cajitas y ubicamos las variables en hexadecimal.

**Los trabajos que presenten diagramas en formato texto o ASCII estarán desaprobados.** O sea, copiar y pegar lo que les devuelva una IA... Deben usar programas de diagramación o dibujo y evidenciar elaboración propia.

Lo que dibujen tiene que coincidir con las direcciones que tenga su captura.

---

## Ejercicio 1

Copiar y pegar el siguiente código en Code Blocks. Ejecutarlo y poner captura de la salida de la consola.

```c
#include <stdio.h>

int main()
{
    short numero = 25;
    short *p;
    p = &numero;

    printf("numero = %d\n", numero);
    printf("direccion de numero = %p\n", &numero);
    printf("valor de p = %p\n", p);
    printf("contenido apuntado por p = %d\n", *p);

    printf("tamano de numero = %lu bytes\n", sizeof(numero));
    printf("tamano de p = %lu bytes\n", sizeof(p));
    return 0;
}
```

a. ¿Qué valor almacena la variable `p`?

b. ¿Por qué el valor de `p` coincide con el valor de `&numero`?

c. ¿Qué significa la expresión `*p`?

d. Dibujar la memoria indicando:
  1. dónde se encuentra `numero`.
  2. dónde se encuentra `p`.
  3. qué contenido almacena cada celda.

e. Comparar los tamaños de `numero` y de `p`. ¿Por qué `p` ocupa 4 bytes (u 8 bytes dependiendo de su arquitectura) a pesar de ser definido como `short`? ¿Qué significa ese `short` entonces?

---

