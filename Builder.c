#include "Builder.h"
#include<stdio.h>
persona* constructor()
{
    persona* aux;
    aux=(persona*)malloc(sizeof(persona));
    return aux;
}

void set_id(persona* this, int id)
{
    this->id=id;
}

void set_name(persona* this, char name[])
{
    strcpy(this->nombre,name);
}

void set_sueldo(persona* this, float sueldo)
{
    this->sueldo=sueldo;
}

void set_edad(persona* this, int edad)
{
    this->edad=edad;
}

void set_profesion(persona* this, char profesion[])
{
    tolower(profesion);
    if(profesion!="analista"&&profesion!="programador"&&profesion!="tester")
    {
        strcpy(this->profesion,profesion);
    }
}

int get_id(persona* this)
{
    return this->id;
}

char* get_nombre(persona* this)
{
    return this->nombre;
}

float get_salario(persona* this)
{
    return this->sueldo;
}

int get_edad(persona* this)
{
    return this->edad;
}

char* get_profesion(persona* this)
{
    return this->profesion;
}

void printAll(ArrayList* this)
{
    int i;
    int len=this->len(this);
    persona* aux;
    printf("\nID\tNombre\t\tSalario\t\tEdad\tProfesion");
    for(i=0;i<len;i++)
    {
        aux=this->get(this,i);
        if(aux!=NULL)
        {
            printOne(aux);
        }
    }
}
void printOne(persona* this)
{
    printf("\n%d\t%s\t\t$%.2f\t%d\t%s",get_id(this),get_nombre(this),get_salario(this),get_edad(this),get_profesion(this));
}

int funcionQueFiltra(void* elemento)
{
    if(get_edad((persona*)elemento)>30&&strcmp(get_profesion((persona*)elemento),"programador")==0)
    {
        return 1;
    }
}
