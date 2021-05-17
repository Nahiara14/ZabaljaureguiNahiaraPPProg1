#include <stdio.h>
#include <stdlib.h>
char *invertir(char cadena[]);
int main()
{
    char nombre[20] = "Nahiara";
    printf("\nLa cadena invertida es: %s",invertir(nombre));
    return 0;
}
char *invertir(char cadena[])
{
    int longitud = strlen(cadena);

    char temporal;

    for (int i = 0, j = longitud - 1; i < (longitud / 2); i++, j--)
    {
        temporal = cadena[i];
        cadena[i] = cadena[j];
        cadena[j] = temporal;
    }

    return cadena;
}
