#include <stdio.h>
#include <ctype.h>
#include <string.h>

int validate (int argc, char *argv);
char* cifrar (char *text, char *key);

int main (int argc, char *argv[]) {
    if (validate(argc, argv)) {
        return 0;
    }

    char *plain;
    printf("Texto: ");
    gets(plain);

    printf("Cifrado %s", cif (plain, argv[1]));

    return 0;
}

int validate(int argc, char *argv[]) {
    if (argc < 2){
        printf("Uso: ./cifrado clave\n");
        return 1;
    }

    int i = 0;
    while (argv[1][i]) {
        if (!isalpha(argv[1][i])) {
            printf("La clave debe contener solamente letras\n");
            return 1;
        }
        i++;
    }

    int len = strlen (argv[1]);

    if (len != 26) {
        printf("La clave debe contener 26 caracteres\n");
        return 1;
    }

    for (i = 0; i < len-1; i++) {

        for (int j = i+1; j < len; j++) {

            if (tolower(argv[1][i]) == tolower(argv[1][j])) {

                printf ("La clave no puede contener caracteres repetidosn");
                return 1;
            }
        }
    }

    return 0;
}

char* cifrar (char *text, char *key) {

    int i = 0;

    while (text[i]) {
        char c = text[i];
        char ch = key[toupper(c) - 65];
        if (isalpha(c)) {
            if (isupper(c)) {
                text[i] = toupper(ch);
            }
            else {
                text[i] = tolower(ch);
            }
        }
        i++;
    }
    return text;
}