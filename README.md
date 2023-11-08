#include <stdio.h>
#include "Operaciones.h"

int main() {
    float n1, n2;
    float Suma=0;
    printf("Coloque algun numero:");
    scanf("%f", &n1);
    printf("Coloque el ptro numero:");
    scanf("%f", &n2);
    suma = float suma();
    
    printf ("La respuesta es %f", suma);
    return 0;
}




float suma (float n1, float n2);

float suma (float n1, float n2){
    float res=0;
    res= n1 + n2;
    return res;
}
