# Especificaciones

El programa debe poder tomar un texto como entrada y, con una clave apropiada, cifrar el texto y mostrarlo. El algoritmo que diseñen tiene que ser capaz de:

- Admitir la clave al momento de ejecutar el programa escribiendo:

```
./cifrado clave
```

- Si la clave es válida, el programa debe mostrar un mensaje pidiendo por una cadena para cifrar.

`validar`: esta función debe encargarse de verificar que la clave ingresada sea válida para el problema. Claves válidas son:

- Las que contengan únicamente letras, independientemente de que sean mayúsculas o minúsculas.
- Las que no tengan letras repetidas.
- Las que no tengan 26 caracteres.

Si la clave no fue proporcionada o se es considerada válida, la función debe devolver 1, sino, un 0. 

`cifrar`: esta función debe tomar la clave y la cadena proporcionada y devolver una cadena encriptada. Para encriptar una cadena, la función debe:

- Evaluar cada caracter de la cadena y, de acuerdo a su orden en el alfabeto (a es 0, b es 1, etc.), reemplazarlo por el caracter que ocupe ese lugar en la clave. Es decir, si la cadena comienza con *ium* entonces la *a* es reemplazada por la *i*, la *b* por la *u* y la *c* por la *m*.
- El cifrado debe respetar las mayúsculas y minúsculas, es decir, si en la cadena hay caracteres en mayúscula, deben conservarse en mayúscula en la cadena encriptada.

Luego, armar un `README.md` con lo siguiente:

```markdown
# Cifrado

Alumno: Apellido y nombre
Curso: Curso
Materia: Control de Interfaces
```

## Consideraciones

- Recuerden que `argc` indica la cantidad de parámetros que fueron ingresados, incluyendo el `./cifrado`, mientras que `argv` es un array que tiene cada uno de esos parámetros. Si se ejecuta correctamente, `argc = 2` y `argv[1]` tiene la clave para cifrar.
- En la librería `string` tienen las funciones para trabajar con strings como `strlen` y `strcpy` que les pueden servir. Algunos [ejemplos](https://www.tutorialspoint.com/c_standard_library/string_h.htm).
- En la librería `ctype` tienen funciones para caracteres. Estos son algunos [ejemplos](https://www.tutorialspoint.com/c_standard_library/ctype_h.htm).
- El caracter `\0` indica el fin de una cadena y puede ser útil para recorrerla si usamos un bucle como este:

```c
char *cadena;
int i = 0;
...
while(cadena[i] != '\0') {
    ...
    i++;
}
```

- Recuerden que cada caracter tiene un valor numérico que pueden encontrar en la [tabla ASCII](https://theasciicode.com.ar/), busquen que valores tienen asignados las letras y evalúen como pueden usar ese valor como índice para un array. 

## Como probar el código

Para compilar, abran una terminal en donde tengan el `cifrado.c` y escriban:

```
gcc -o cifrado cifrado.c
```

Luego para correrlo:

```
./cifrado clave
```

## Ejemplos

Estos son algunos ejemplos de lo que debiera ocurrir cuando corran el programa:

- Si no escriben una clave:

```
$ ./cifrado
Uso: ./cifrado clave
```

- Si pasan una clave que no cumpla con el largo de 26 caracteres:

```
$ ./cifrado asdfghjk
La clave debe contener 26 caracteres
```

- Si pasan una clave con caracteres que no sean letras:

```
$ ./cifrado a123
La clave debe contener solo letras
```

- Si pasan una clave con letras repetidas:

```
$ ./cifrado zxcvbnmasdfghjklqwertyuioo
La clave no puede contener caracteres repetidos
```

- Si pasan una clave apropiada:

```
$ ./cifrado QwerTyuiopAsdfGhjklZxcvBnm
Texto: Este es un texto de prueba.
Cifrado: Tlzt tl xf ztbzg rt hkxtwq.
```

## Como entregar

Pongan el `README.md` y el `cifrado.c` en una carpeta, abran una terminal y escriban:

```
git init
git add README.md cifrado.c
git commit -m "Initial commit"
git checkout -b ise4/2021/arrays/cifrado
git push https://github.com/trq20/USERNAME.git ise4/2021/arrays/cifrado
```

Recuerden cambiar `USERNAME` por su nombre de usuario en GitHub. Pueden verificar si la entrega se hizo visitando el repositorio en `https://github.com/trq20/USERNAME/tree/ise4/2021/arrays/word`.
