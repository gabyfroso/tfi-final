#include <stdio.h>
#include <windows.h>
#include "utils/methods.h"
#include "utils/methods.c"

/*
    Grupo:

    FyN: Frosoni, Hugo Gabriel 1k2
    Alias: Gabyfroso
    DNI: 44866295
    Legajo: 56657
    Correo: Gabyfroso@gmail.com

*/

void invertir_arreglo(int arr[], int n)
{
    int temp;
    for (int i = 0; i < n / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
}

int main()
{
    index:
    int N_Cantidad;
    printf("Ingrese la cantidad de elementos del arreglo: ");
    scanf("%d", &N_Cantidad);
    int arr[N_Cantidad];

    printf("Ingrese los elementos del arreglo uno en uno:\n");
    for (int i = 0; i < N_Cantidad; i++)
    {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("\nArreglo antes de ordenar:\n");
    for (int i = 0; i < N_Cantidad; i++)
    {
        printf("%d ", arr[i]);
    }

indexreturn:
    int choice, invert;
    printf("\n\nElija el metodo de ordenamiento:\n");
    printf("0. salir\n");
    printf("1. Burbuja mejorada\n");
    printf("2. Insercion\n");
    printf("3. MergeSort\n");
    printf("4. QuickSort\n");
    printf("5. Seleccion\n");
    printf("Opcion: ");
    scanf("%d", &choice);

    do
    {
        printf("\n0. Ascendente\n1. Descendente\n");
        printf("Opcion: ");
        scanf("%d", &invert);
    } while (invert != 0 && invert != 1);

    switch (choice)
    {
    case 1:
        bubbleSort(arr, N_Cantidad);
        break;
    case 2:
        intercion(arr, N_Cantidad);
        break;
    case 3:
        MergueSort(arr, 0, N_Cantidad - 1);
        break;
    case 4:
        Quicksort(arr, 0, N_Cantidad - 1);
        break;
    case 5:
        Seleccion(arr, N_Cantidad);
        break;
    default:
        printf("Opcion invalida\n");
        goto indexreturn;
    }

    // todos estan ascendiente, solo lo invierto en una función si me lo pide el usuario para no repetir codigo
    if (invert == 1)
        invertir_arreglo(arr, N_Cantidad);

    printf("\nArreglo despues de ordenar:\n");
    for (int i = 0; i < N_Cantidad; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n salir? Y(yes) N(no)\n>");
    char tmpchar;
    scanf(" %c", &tmpchar);

    if(tmpchar == 'n' || tmpchar == 'N')
        goto index;

    system("PAUSE");

    return 0;
}
