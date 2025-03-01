// Intercambio de Valores
#include <stdio.h>

void intercambiar(int *a, int *b) {
    // Implementar intercambio aquí
    int x = *a;
    *a=*b;
    *b=x;
}

int main() {
    int arr[2] = {5, 10};
    // Código para llamar a la función y mostrar los valores intercambiados
    printf("arreglo original:\n");
    for(int i=0; i<2; i++){
        printf("lugar %d: %d\n",i+1, arr[i]);
    }
    intercambiar(&arr[0],&arr[1]);
    printf("arreglo intercambiado\n");
    for(int i=0; i<2;i++){
        printf("lugar: %d: %d\n",i+1,arr[i]);
    }
    
    return 0;
}
