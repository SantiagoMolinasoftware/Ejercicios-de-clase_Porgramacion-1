#include <stdio.h>

int main ()
{
    int voto;
    int candidatos[5];

    printf ("Bienvenido al sistema de sufragio, a continuacion se mostrara los canditos y su listas elegibles.\n");
    printf ("Lista 1: Candidato 1.\n");
    printf ("Lista 2: Candidato 2.\n");
    printf ("Lista 3: Candidato 3.\n");
    printf ("Lista 4: Candidato 4.\n");
    printf ("Lista 5: Candidato 5.\n");
    printf ("Ahora ingrese su voto con respecto a la lista de su candidato\n");

    do
    {
        printf ("Ingresar su voto con respecto a la lista de su candidato\n");
        scanf ("%d",&voto);

        if (voto > 0 && voto < 6)
        {
            candidatos[voto -1] ++;
        }

    }while( voto != 0);

    return 0;
}
