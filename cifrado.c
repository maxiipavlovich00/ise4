#include <stdio.h>
#include <ctype.h>
#include <string.h>

int validar(int argc, char *argv[]);
char* cifrar(char *text, char *key);

int main(int argc, char *argv[]) {

    if (validar(argc, argv)) {
        return 1;
    }

    // TODO

    return 0;
}

/*
*   Funcion: validar
*   ---------------------------------------
*   Verifica que la clave de cifrado 
*   ingresada:
*   - Tenga 26 caracteres
*   - No repita letras
*   - Solo contenga letras
*   
*   @param: argc - cantidad de argumentos
*   @param: argv - argumentos
*
*   @return: cero si es valida, uno si no
*/

int validar(int argc, char *argv[]) {
    
    // TODO
}

/*  
 *  Funcion: cifrar
 *  ----------------------------------------
 *  Cifra un texto a partir de una clave
 *  determinada
 *
 *  @param: text - texto a cifrar
 *  @param: key - clave valida para cifrar
 *
 *  @return: texto cifrado
 */

char* cifrar(char *text, char *key) {

    // TODO
}
