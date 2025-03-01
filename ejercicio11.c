// 11. Buscar en un Arreglo
#include <stdio.h>

int *buscarElemento(int *arr, int tam, int valor) {
    // Implementar búsqueda aquí
    for (int i = 0; i < tam; i++) {
        if (*(arr + i) == valor) {
            return (arr + i);
        }
    }
    return NULL;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    // Código para buscar un número y mostrar su dirección
    int tam = sizeof(arr) / sizeof(arr[0]);
    int valor;
    printf("que valor buscas: \n");
    scanf("%d", &valor);
    int *resultado = buscarElemento(arr,tam,valor);
    if (resultado != NULL){
        printf("El valor %d se encuentra en la direccion de memoria: %p\n", valor, (void*)resultado);
    } else {
        printf("El valor %d no esta en el arreglo.\n", valor);
    }
    return 0;
}
