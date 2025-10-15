#include<stdio.h>
#include<string.h>

int main ()
{
    char nombre;
    int ed;

    printf("Ingrese el nombre de la persona: \n");
    gets(&nombre);

    printf("Ingrese la edad de la persona: ");
    scanf("%d", &ed);

    if(ed > 100)
    {
        printf("Esa edad no existe");
    }else if (ed >=65)
    {
        printf("La persona es un Adulto Mayor");
    }else if(ed >= 18)
    {
        printf("La persona es Mayor de edad");
    }else
    {
        printf("La persona es Menor de edad");
    }
}
