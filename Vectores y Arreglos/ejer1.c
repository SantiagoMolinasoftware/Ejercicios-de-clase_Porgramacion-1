#include <stdio.h>

int main()
{
    int vector1[10];

    for (int i = 0; i < 10; i++)
    {
        printf ("Ingresar el contenido del vector:\n");
        scanf ("%d",&vector1[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        printf ("%d ",vector1[i]);
    }

    return 0;
}