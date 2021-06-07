# Especificaciones

Implementar en un archivo `hello.c` un programa que:
- Imprima un mensaje pidiendo el nombre de la persona que ejecuta el programa.
- Imprima un mensaje saludando a la persona que ingresó el nombre.

Luego, escribir un `README.md` con lo siguiente:

```markdown
# Hello

Alumno: Nombre y apellido
Curso: Curso
Materia: Control de Interfaces
```

## Orientación

- Van a necesitar trabajar con un tipo de dato especial, una cadena de caracteres, que en otros lenguajes se denomina `string`. No vamos a entrar en detalles ahora en lo que es una cadena de caracteres, pero vamos a declararla de la siguiente forma:

```c
char name[20];		   // Puedo almacenar hasta 20 caracteres 
```

- Para tratar con esta cadena, sugerimos la función `gets` para poder hacerlo de forma mas sencilla:

```c
gets(name);	// Entre parentesis pasamos la variable donde queremos guardar el texto
```

## Como probar el código

Abran una terminal donde tengan el `hello.c` y escriban:

```
gcc -o hello hello.c
```

Van a ver aparecer un `hello.exe`. Luego ejecuten el programa escribiendo:

```
./hello
```

Asegúrense de que el programa se comporte de la manera apropiada, especialmente para casos donde el que ejecute el programa tenga mas de un nombre o decida poner su nombre y apellido.

## Como entregar

Pongan el `README.md` y el `hello.c` en una carpeta, abran una terminal y escriban:

```
git init
git add hello.c README.md
git commit -m "Initial commit"
git checkout -b ise4/2021/c/hello
git push https://github.com/trq20/USERNAME.git ise4/2021/c/hello
```

Recuerden cambiar `USERNAME` por su nombre de usuario en GitHub. Pueden verificar si la entrega se hizo visitando el repositorio en `https://github.com/trq20/USERNAME/tree/ise4/2021/c/hello`. 
