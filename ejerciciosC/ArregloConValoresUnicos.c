#include <stdio.h>
// Función para verificar si un arreglo contiene valores únicos
int contieneValoresUnicos(int arreglo[], int n) {
    // Creamos un arreglo auxiliar de tamaño igual al máximo valor posible
    int auxiliar[n];
    // Inicializamos todos los elementos del arreglo auxiliar a 0
    for (int i = 0; i < 5; i++) {
        auxiliar[i] = 0;
    }
    // Recorremos el arreglo de entrada/parametro
    for (int i = 0; i < 5; i++) {
        // Si el valor ya ha sido encontrado antes, no es único
        if (auxiliar[arreglo[i]] == 1) {
            return 0; // No contiene valores únicos
        } else {
            auxiliar[arreglo[i]] = 1; // Contiene valores únicos
        }
    }
    return 1; 
}

int main() {
    int n = 5 ; // Tamaño del arreglo
    //printf("Ingrese la cantidad de elementos en el arreglo: ");
    //scanf("%d", &n);
    int arreglo[]={1,2,3,4,5};
    /*printf("Ingrese los elementos del arreglo:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arreglo[i]);
    }*/
    
    if (contieneValoresUnicos(arreglo,n)) {
        printf("El arreglo tiene valores unicos.\n");
    } else {
        printf("El arreglo no tiene valores unicos.\n");
    }

    return 0;
}
