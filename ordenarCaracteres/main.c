#include <stdio.h>
#include <stdlib.h>
#define TAM 5

int ordenarCaracteres(char caracteres[], int tam);
void mostrarCaracteres(char c[20], int tam);

int main()
{
    char caracteres[]={"Algoritmo", "Algoritmo", "Algoritmo", "Algoritmo", "Algoritmo"};

    mostrarCaracteres(caracteres,TAM);

    ordenarCaracteres(caracteres,TAM);

    mostrarCaracteres(caracteres,TAM);
    return 0;
}
void mostrarCaracteres(char c[20], int tam)
{
    for(int i=0; i<tam; i++)
    {
        printf("%s\n", c[i]);
    }
    printf("\n");
}
int ordenarCaracteres(char caracteres[], int tam)
{
     char aux[20];

     for(int i=0; i<tam-1; i++)
    {
        for(int j= i+1; j<tam; i++)
        {
            if( stricmp (caracteres[i], caracteres[j]) >0 )
            {
                strcpy(aux,caracteres[i]);
                strcpy(caracteres[i],caracteres[j]);
                strcpy (caracteres[j],aux);

            }
        }
    }
}


