// 10. Ordenamiento con Apuntadores (Burbuja)
#include <stdio.h>

void ordenarBurbuja(int *arr, int tam) {
    for (int i = 0; i < tam - 1; i++) {
        for (int j = 0; j < tam - i - 1; j++) {
            if (*(arr + j) > *(arr + j + 1)) {
                int temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
}

int main() {
    int arr[] = {34, 12, 56, 78, 23};
    int tam = sizeof(arr) / sizeof(arr[0]);
    printf("Arreglo original: ");
    for (int i = 0; i < tam; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    ordenarBurbuja(arr, tam);
    printf("Arreglo ordenado: \n");
    for (int i = 0; i < tam; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
