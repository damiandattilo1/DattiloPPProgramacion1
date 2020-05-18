#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define TAM 5

typedef struct
{
    int id;
    char procesador[20];
    char marca[20];
    float precio;
}Notebook;

float aplicarDescuento (float precio);
int contarCaracteres(char c[], char letra);
void ordenarMarca (Notebook n[], int cant);

int main()
{
    float precio = 100.00;
    float nuevoPrecio;

    char cadena[100];
    char caracter;
    int contarLetra;

    Notebook n[TAM];

    nuevoPrecio = aplicarDescuento(precio);
    contarLetra = contarCaracteres(cadena, letra);
    ordenarMarca(n, TAM);

    return 0;
}


float aplicarDescuento (float precio)
{
    float precioNuevo;
    float descuento;
    descuento = (5*precio)/100;
    precioNuevo = precio-descuento;

    return precioNuevo;
}

int contarCaracteres(char c[], char letra)
{
    int contLetra;
    int tamC;

    for(int i=0; c[i]!='\0'; i++)
    {
        tamC++;
    }
    for(int i=0; i<tamC;i++)
    {
        if(c[i]==letra)
        {
            contLetra++;
        }
    }

    return contLetra;
}

void ordenarMarca (Notebook n[], int cant)
{
    Notebook aux;
    for(int i=0;i<cant-1;i++)
    {
        for(int j=i+1;j<cant;j++)
        {
            if(n[i].marca == n[j].marca)
            {
                aux=n[j];
                n[j]=n[i];
                n[i]=aux;
            }
        }
    }
}
