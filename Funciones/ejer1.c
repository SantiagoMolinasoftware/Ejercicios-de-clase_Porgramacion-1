#include <stdio.h>

int sumar(int a, int b)
{
    int operacion = a + b;
}

void main()
{
    int num1 = 0, num2 = 0;
    int resultado;
    printf("Ingrese el 1er valor: ");
    scanf("%d", &num1);
    printf("Ingrese el 2do valor: ");
    scanf("%d", &num2);

    resultado = sumar(num1, num2);

    printf("El resultado es: %d", resultado);
}