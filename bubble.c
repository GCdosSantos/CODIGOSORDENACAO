#include <stdio.h>


void printArr(int arr[], int size) {
    int i;
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}


void bubbleSort(int arr[], int size) {
    int i, j, temp; 
    
    // Laço para percorrer o array, de i = 0 até o penúltimo índice
    for (i = 0; i < size - 1; i++) {
        
        // Laço para comparar os elementos e realizar a troca
        for (j = 0; j < size - i - 1; j++) {
            
            // Se o elemento atual for maior que o próximo, realiza a troca
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];  // Armazena temporariamente o valor de arr[j]
                arr[j] = arr[j + 1];  // Atribui o valor de arr[j + 1] a arr[j]
                arr[j + 1] = temp;  // Atribui o valor armazenado de arr[j] a arr[j + 1]
            }
        }
    }
}

int main() {
    int arr[] = {7, 4, 2, 3, 1, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("CONJUNTO ORIGINAL: ");
    printArr(arr, size);

    bubbleSort(arr, size);

    printf("ORDENADO (BUBBLE): ");
    printArr(arr, size);

    return 0;
}

