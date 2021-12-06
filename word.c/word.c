#include <stdio.h>
#include <ctype.h>

#define MAX 1024

int read_file(char *text, char *filename);

int main(int argc, char *argv[]) {

    if (argc != 2) {
        printf("Uso: ./word file\n");
        return 1;
    }

    char text[MAX];

    if (read_file(text, argv[1])) {
        printf("Archivo no encontrado\n");
        return 1;
    }

    int l = 0, d=0, k=0;

    while (text[l] != '\0') {
        if (isspace(text[i])){
            d++;
        }
        if (text[l]=='.'||text[l]=='!'||text[l]=='?'){
            k++;
    }
    i++;
    }
    printf ("Cantidad de palabras: %d\n",d+1);
    printf ("Cantidad de oraciones: %d\n",k);
    return 0;
    }


int read_file(char *text, char *filename) {

    FILE *fp;
    char c;
    char full_name[30];
    
    sprintf(full_name, "frases/%s.txt", filename);
    fp = fopen(full_name, "r");
    
    if (!fp) {
        return 1;
    } 
    while ((c = getc(fp)) != EOF) {
        *text = c;
        text++;
    }
    return 0;
}