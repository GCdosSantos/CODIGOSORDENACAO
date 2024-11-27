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
    for (i = 1; i < size; i++) {  // Come�a do segundo elemento e vai at� o final
        key = arr[i];  // Armazena o elemento atual (chave) que ser� inserido na posi��o correta
        j = i - 1;  // Inicializa j como o �ndice do elemento � esquerda da chave

        while (j >= 0 && arr[j] > key) {  // Enquanto j for maior ou igual a 0 e o elemento � esquerda for maior que a chave
            arr[j + 1] = arr[j];  // Move o elemento � esquerda uma posi��o � frente
            j--;  // Decrementa j para continuar a compara��o com o pr�ximo elemento � esquerda
        }

        arr[j + 1] = key;  // Insere a chave na posi��o correta
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

