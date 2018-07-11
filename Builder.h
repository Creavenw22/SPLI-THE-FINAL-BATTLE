#include"ArrayList.h"
#ifndef persona_H_INCLUDED
#define persona_H_INCLUDED

typedef struct
{
    int id;
    char nombre[50];
    float sueldo;
    int edad;
    char profesion[20];
}persona;


#endif // persona_H_INCLUDED
persona* constructor();

void set_id(persona* this, int id);
void set_name(persona* this, char name[]);
void set_sueldo(persona* this, float sueldo);
void set_edad(persona* this, int edad);
void set_profesion(persona* this, char profesion[]);

int get_id(persona* this);
char* get_nombre(persona* this);
float get_salario(persona* this);
int get_edad(persona* this);
char* get_profesion(persona* this);

void printAll(ArrayList* this);
void printOne(persona* this);
int funcionQueFiltra(void* elemento);
