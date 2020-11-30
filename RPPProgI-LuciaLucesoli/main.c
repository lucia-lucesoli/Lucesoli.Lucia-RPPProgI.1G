#include <stdio.h>
#include <stdlib.h>

 // Ejercicios realizados en clase

int reemplazarCaracter(char cadena[], char a, char b)
{
    int repeticiones = 0;
    int i = 0;

    while(cadena[i] != '\0' )
    {
        if(cadena[i] == a)
        {
        	cadena[i] = b;
            repeticiones++;
        }
        i++;
    }
    return repeticiones;
}

/******************************************************************/

int ordenarNotebook(eNotebook lista[], int tam)
{
    int error = 1 ;
    eNotebook auxLaptop;

    if(lista != NULL && tam > 0)
    {
        for(int i = 0; i < tam -1 ; i++)
        {
            for(int j = i+1; j < tam ; j++)
            {
                if(strcmp((lista[i].marca), (lista[j]).marca) > 0)
                {
                    auxLaptop = lista[i];
                    lista[i] = lista[j];
                    lista[j] = auxLaptop;
                }
                else if(strcmp((lista[i].marca), (lista[j]).marca) == 0 && lista[i].precio > lista[j].precio)
                {
                    auxLaptop = lista[i];
                    lista[i] = lista[j];
                    lista[j] = auxLaptop;
                }
            }
        }

        error = 0;
    }

    return error;
}


