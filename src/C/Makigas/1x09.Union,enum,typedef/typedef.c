#include<stdio.h>
#include<string.h>

enum tipo_empleado { Analista, Programador};

struct empleado_t 
{
    char nombre[20];
    char apellido[20];
    char nif [10];
    char telefono[10];
    enum tipo_empleado tipo;
};

typedef struct empleado_t Empleado;
