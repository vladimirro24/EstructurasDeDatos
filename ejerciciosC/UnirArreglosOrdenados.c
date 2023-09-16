#include <stdio.h>

void UnirArreglos(int A[], int B[], int m, int n) {
    int i = m - 1; // Índice para el arreglo A
    int j = n -1; // Índice para el arreglo B
    int unir = m + n -1; 
    //Unir los arreglos mientras haya elementos en ambos
    while (i >= 0 && j >= 0) {
        if (A[i] > B[j]) {
            A[unir] = A[i];
            i--;
        } else {
            A[unir] = B[j];
            j--;
        }
        unir--;
    }
}

int main() {
    int A[10] = {1, 2, 5};
    int B[10] = {3, 7, 8};
    int ta = 3; // Tamaño de A(ta)
    int tb = 3; // Tamaño de B(tb)
    UnirArreglos(A, B, ta, tb);
    
    printf("A = {");
    for (int i = 0; i < ta + tb; i++) {
        printf("%d", A[i]);
        if (i < ta + tb - 1) {
            printf(", ");
        }
    }
    printf("}\n");
    
    return 0;
}