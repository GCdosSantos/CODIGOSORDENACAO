#include <stdio.h>

void printArr(int arr[], int size) {
    int i;
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void insertionSort(int arr[], int size) {  
    int i, j, key;  
    for (i = 1; i < size; i++) {  // Começa do segundo elemento e vai até o final
        key = arr[i];  // Armazena o elemento atual (chave) que será inserido na posição correta
        j = i - 1;  // Inicializa j como o índice do elemento à esquerda da chave

        while (j >= 0 && arr[j] > key) {  // Enquanto j for maior ou igual a 0 e o elemento à esquerda for maior que a chave
            arr[j + 1] = arr[j];  // Move o elemento à esquerda uma posição à frente
            j--;  // Decrementa j para continuar a comparação com o próximo elemento à esquerda
        }

        arr[j + 1] = key;  // Insere a chave na posição correta
    }
}


int main() {
    int arr[] = {7, 4, 2, 3, 1, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("CONJUNTO ORIGINAL: ");
    printArr(arr, size);

    insertionSort(arr, size);

    printf("ORDENADO (INSERTION): ");
    printArr(arr, size);

    return 0;
}

