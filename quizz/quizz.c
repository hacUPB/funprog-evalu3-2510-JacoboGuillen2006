#include <stdio.h>

int main()
{
    int incognita=15;
    printf("bienvenido a adivina el número, ingresa un número del 1 al 10\n");
    for ( int respuesta = 15; respuesta = incognita; respuesta++)
    {
        scanf("%d",&respuesta);
        if(respuesta == incognita)
        {
            printf("adivinaste el número");
        }else{
            printf(" intenta de nuevo\n");
        }
    }

    return 0;
}