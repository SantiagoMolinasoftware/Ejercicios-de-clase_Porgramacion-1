#include <stdio.h>

int main() {
    int voto;
    int candidatos[5] = {0};  // Inicializar el array a cero

    printf("Bienvenido al sistema de sufragio, a continuación se mostrarán los candidatos y sus listas elegibles.\n");
    printf("Lista 1: Candidato 1.\n");
    printf("Lista 2: Candidato 2.\n");
    printf("Lista 3: Candidato 3.\n");
    printf("Lista 4: Candidato 4.\n");
    printf("Lista 5: Candidato 5.\n");
    printf("Ahora ingrese su voto con respecto a la lista de su candidato\n");

    do {
        printf("Ingresar su voto con respecto a la lista de su candidato (0 para salir)\n");
        scanf("%d", &voto);

        if (voto > 0 && voto < 6) {
            candidatos[voto - 1]++;
        }

    } while (voto != 0);

    printf("Cantidad final de votos de los candidatos son:\n");
    for (int i = 0; i < 5; i++) {
        printf("Candidato %d: %d votos\n", i + 1, candidatos[i]);
    }

    return 0;
}

