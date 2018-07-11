#include <stdio.h>
#include <stdlib.h>
#include "Parser.h"

int main()
{
    ArrayList* empleado;
    ArrayList* filtro;
    empleado=al_newArrayList();

    printf("\n---Lista de Empleados---\n");
    parserRead(empleado);
    printAll(empleado);
    printf("\n\n---Presione una tecla para imprimir la lista filtrada---\n");
    system("pause > nul");
    printf("\n---Despues de filtrar---\n");
    filtro=al_filter(empleado,funcionQueFiltra);
    if(filtro!=NULL&&filtro->len(filtro)>0)
    {
        printAll(filtro);
        parserWrite(filtro);
    }
    else
    {
        printf("\nNo hay empleados que cumplan los requisitos\n");
    }

    printf("\n\n---Presione una tecla para salir del programa---\n");
    system("pause > nul");
    return 0;
}
