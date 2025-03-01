// 9. Suma con Apuntadores
#include <stdio.h>

int sumaArreglo(int *arr, int tam) {
    int suma=0;
    for(int i=0; i<tam;i++){
        suma+= *(arr+i);
    }
    // Implementar la suma aquí
    return suma;
}

int main() {
    int numeros[] = {1, 2, 3, 4, 5};
    int tam = sizeof(numeros) / sizeof(numeros[0]);
    int resultado = sumaArreglo(numeros, tam);
    // Código para calcular y mostrar la suma
    printf("el resultado es: %d",resultado);

    return 0;
}
