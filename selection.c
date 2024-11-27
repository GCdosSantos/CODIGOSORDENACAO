#include <stdio.h>


void printArr(int arr[], int size) {
    int i;
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void selectionSort(int arr[], int size) {  
    int i, j, minIndex, temp;  
    for (i = 0; i < size - 1; i++) {  
        minIndex = i;  // Assuma que o elemento na posição i é o menor inicialmente

        for (j = i + 1; j < size; j++) {  // Compara o elemento na posição i com os seguintes
            if (arr[j] < arr[minIndex]) {  // Se um elemento menor que o atual mínimo for encontrado
                minIndex = j;  // Atualiza minIndex para a posição do novo menor valor
            }
        }

        temp = arr[minIndex];  // Armazena o valor do menor elemento encontrado
        arr[minIndex] = arr[i];  // Coloca o menor elemento encontrado na posição i
        arr[i] = temp;  // Coloca o valor original da posição i na posição do menor valor encontrado
    }
}

int main() {
    int arr[] = {7, 4, 2, 3, 1, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("CONJUNTO ORIGINAL: ");
    printArr(arr, size);

    selectionSort(arr, size);

    printf("ORDENADO (SELECTION): ");
    printArr(arr, size);

    return 0;
}

