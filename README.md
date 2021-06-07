## Problema

Piensen en el cajero de un banco, al tener una cantidad limitada de billetes y querer reponerlos constantemente, van a diseñar algún algoritmo que pueda determinar cuantos billetes de cada valor puede entregarle a la persona para que la cantidad de billetes sea la mínima posible.

Supongan que este cajero dispone únicamente de billetes de 50, 20, 10, 5 y 1. Se acerca una persona a retirar dinero e ingresa que necesita $27, el algoritmo tiene que poder determinar que billetes darle a esta persona. El proceso lógico seria algo como esto: de 50 no podemos entregarle (es mucho mas que lo que necesita), uno de 20 es posible entregarle y ahora todavía tenemos que darle $7 (27 - 20 = 7). Uno de 10 no es posible pero si uno de 5 y nos quedan $2 (7 - 5 = 2). Finalmente, los $2 que faltan los completamos con dos billetes de 1. 

## Especificaciones

El algoritmo que desarrollen debe cumplir con lo siguiente:

- El programa debe presentar un mensaje al iniciarse que pida por un monto a retirar.
- La persona debe poder ingresar un monto entero (`int`) a retirar. Pueden asumir por esta ocasión que nunca se va ingresar algo que no sea un número entero. 
- El programa debe usar al menos un bucle para resolver el problema.
- Al terminar, el programa debe indicar la cantidad de cada billete que se va a entregar de la siguiente manera:

```
Cantidad de billetes de 50: 4
Cantidad de billetes de 20: 1
Cantidad de billetes de 10: 1
Cantidad de billetes de 5: 0
Cantidad de billetes de 1: 3
```

Luego, armar un `README.md` con lo siguiente:

```markdown
# Cajero

Alumno: Nombre y apellido
Curso: Curso
Materia: Control de Interfaces
```

## Orientación

- Probablemente necesiten variables que cumplan el rol de contadores. Recuerden de inicializarlas en cero!
- Pueden compilar el programa que hagan con `gcc -o cajero cajero.c` y ejecutarlo con `./cajero`.
- Para ingresar un valor por la consola, pueden usar algo como esto:

```c
int monto;
...
scanf("%d", &monto);
```

- Pueden usar la función `printf` para imprimir mensajes en la consola:

```c
#include <stdio.h>	// Libreria necesaria para usar printf

...
int billetes50 = 0;
...
printf("Cantidad de billetes de 50: %d\n", billetes50);
...
```

## Como probar el código

Abran una terminal donde se encuentre el `cajero.c` y corran:

```
gcc -o cajero cajero.c
```

Luego para ejecutarlo, escriban `./cajero`.

## Como entregar

Pongan el `README.md` y el `cajero.c` en una carpeta, abran una terminal y ahora corran los comandos:

```
git init
git add cajero.c README.md
git commit -m "Initial commit"
git checkout -b ise4/2021/c/cajero
git push https://github.com/trq20/USERNAME.git ise4/2021/c/cajero
```

Recuerden cambiar `USERNAME` por su nombre de usuario en GitHub. Pueden verificar si la entrega se hizo visitando el repositorio en `https://github.com/trq20/USERNAME/tree/ise4/2021/c/cajero`.
