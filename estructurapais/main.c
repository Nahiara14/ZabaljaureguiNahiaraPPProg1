#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int id;
    char nombre[20];
    int infectados;
    int recuperados;
    int muertos;
}ePais;


void actualizarRecuperados (ePais pais,int recuperados);

int main()
{
   ePais pais;
    actualizarRecuperados(pais ,pais.recuperados);


    return 0;
}

void actualizarRecuperados(ePais pais, int recuperados)
{
    pais.recuperados += recuperados;
}
