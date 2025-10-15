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

    if(ed >= 18)
    {
        printf("La persona es Mayor de edad");
    }else
    {
        printf("La persona es Menor de edad");
    }
}
