#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int vector1[10];

    for (int i = 0; i < 20; i++)
    {
        vector1[i] = rand() % 11;
    }

    for (int i = 0; i < 20; i++)
    {
        printf ("%d",vector1[i]);
    }

    return 0;
}