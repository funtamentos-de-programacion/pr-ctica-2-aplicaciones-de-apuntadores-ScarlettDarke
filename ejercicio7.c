// 7. Accediendo a la Memoria
#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int *a;
    a = arr;
    // Código para imprimir direcciones de memoria aquí
    for(int i = 0; i<5; i++){
        printf("\ndireccion %d: %p\n",i+1, a+i);
    }

    return 0;
}
