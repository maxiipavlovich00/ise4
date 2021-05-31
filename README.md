# Especificaciones

Escribir un programa que: 
  - Tome como entrada el nombre de uno de los archivos en la carpeta `frases` (sin extensión).
  - Imprima un mensaje con la cantidad de palabras.
  - Imprima un mensaje con la cantidad de oraciones.
  
Luego, armar un `README.md` con lo siguiente:

```markdown
# Word

Alumno: Apellido y nombre
Curso: Curso
Materia: Control de Interfaces
```

## Consideraciones

- Consideren que una palabra es cuando detectan un espacio y una oración cuando detectan alguno de estos caracteres: `.`, `!` o `?`.
- Pueden usar la función `isspace()` de la libreróía `ctype.h` que devuelve `true` si el el caracter es un espacio. Algunos ejemplos [aquí](https://www.programiz.com/c-programming/library-function/ctype.h/isspace).
- Pueden aprovechar el fin de cadena o caracter nulo `\0` para hacer algo como esto:

```c
int i = 0;
char string[30];

while (string[i] != '\0') {
  ...
  i++;
}
```

## Como probar el código

Para compilarlo, abran una terminal donde tengan el `word.c` y luego corran para compilar:

```
gcc -o word word.c
```

Para probarlo, usen los archivos en la carpeta `frases`, ejemplo:

```
./word gandalf
```

## Ejemplos para comparar

```
$ ./word gandalf.txt
Cantidad de palabras: 17
Cantidad de oraciones: 1
```

```
$ ./word geralt.txt
Cantidad de palabras: 46
Cantidad de oraciones: 4
```

```
$ ./word roland.txt
Cantidad de palabras: 66
Cantidad de oraciones: 6
```

## Como subir

Pongan el `README.md` y el `word.c` en una carpeta, abran una terminal y escriban:

```
git init
git add README.mc word.c
git commit -m "Initial commit"
git checkout -b ise4/2021/arrays/word
git push https://github.com/trq20/USERNAME.git ise4/2021/arrays/word
```

Recuerden cambiar `USERNAME` por su nombre de usuario en GitHub. Pueden verificar si la entrega se hizo visitando el repositorio en `https://github.com/trq20/USERNAME/tree/ise4/2021/arrays/word`.
