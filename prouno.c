#include <stdio.h>
int main()
{
    // Se pide que ingrese el usuario el numero con el que se va a trabajar.
    int n;
    int num;
    int sumas;
    int promedio;
    printf("Escriba su numero maximo de numero que se ingresara: \n");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        // Se realiza el procedimiento de que calcule el promedio a la vez su toma el conteo para saber hasta que numero debe llegar.
        printf("Escriba su numero %d: \n", i);
        scanf("%d", &num);
        sumas = num + num;

        promedio = sumas / n;
    }
    printf("Sumas: %d \n", sumas);
    printf("Pormedio: %d \n", promedio);
    return 0;
}