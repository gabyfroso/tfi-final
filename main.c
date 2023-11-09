#include <stdio.h>
#include "utils/methods.h"

int main() {
    int N_Cantidad;
    printf("Ingrese la cantidad de elementos del arreglo: ");
    scanf("%d", &N_Cantidad);

    int arr[N_Cantidad];
    printf("Ingrese los elementos del arreglo uno por uno:\n");
    for (int i = 0; i < N_Cantidad; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("\nArreglo antes de ordenar:\n");
    for (int i = 0; i < N_Cantidad; i++) {
        printf("%d ", arr[i]);
    }

    int choice;
    printf("\n\nElija el metodo de ordenamiento:\n");
    printf("1. Burbuja mejorada\n");
    printf("2. Insercion\n");
    printf("3. MergeSort\n");
    printf("4. QuickSort\n");
    printf("5. Seleccion\n");
    printf("Opcion: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            bubbleSort(arr, N_Cantidad);
            break;
        case 2:
            intercion(arr, N_Cantidad);
            break;
        // Añade más casos según los métodos disponibles
        default:
            printf("Opcion invalida\n");
    }

    printf("\nArreglo despues de ordenar:\n");
    for (int i = 0; i < N_Cantidad; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
