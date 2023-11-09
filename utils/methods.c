#include "methods.h"
#include <stdio.h>

/*
MENU edit cmd
*/

void indexcmd(int arr[], int n)
{
    printf("\x1B[%dm\x1B[%dm", 3, 34);
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("\x1B[0m");
}
/*
FIN MENU edit cmd
*/


// Función de intercambio de dos valores
void intercambio(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void bubbleSort(int arr[], int n)
{
    int i, j;
    int swapped;
    for (i = 0; i < n - 1; i++)
    {
        swapped = 0;
        for (j = 0; j < n - i - 1; j++)
        {
            indexcmd(arr, n);//%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
            if (arr[j] > arr[j + 1])
            {
                intercambio(&arr[j], &arr[j + 1]);
                swapped = 1;
            }
        }
        if (swapped == 0)
        {
            break;
        }
    }
}

// Implementación del algoritmo de inserción (insertion sort)
void intercion(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            indexcmd(arr, n);//%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

// Implementación del algoritmo MergeSort
void merge(int arr[], int l, int m, int r)

{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;
    int L[n1], R[n2];

    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}
void MergueSort(int arr[], int l, int r)
{
    indexcmd(arr, r+1);//%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
    if (l < r)
    {
        int m = l + (r - l) / 2;
        MergueSort(arr, l, m);
        MergueSort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}

// Implementación del algoritmo QuickSort
int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            intercambio(&arr[i], &arr[j]);
        }
    }
    intercambio(&arr[i + 1], &arr[high]);
    return (i + 1);
}
void Quicksort(int arr[], int low, int high)
{
    indexcmd(arr, high+1); //%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
    if (low < high)
    {
        int pi = partition(arr, low, high);
        Quicksort(arr, low, pi - 1);
        Quicksort(arr, pi + 1, high);
    }
}


// Implementación del algoritmo de selección (selection sort)
void Seleccion(int arr[], int n)
{
    int i, j, minIndex;
    for (i = 0; i < n - 1; i++)
    {
        indexcmd(arr, n); //%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
        minIndex = i;
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        intercambio(&arr[minIndex], &arr[i]);
    }
}