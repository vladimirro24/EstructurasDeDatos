#include <stdio.h>
#include <string.h>

// Función para encontrar el palíndromo más grande n una cadena
void Palindromo(char cadena[]) {
    int longitud = strlen(cadena); // Longitud de cadena para no romper limite
    int inicio = 0;
    int maxLongitud = 0;

    for (int centro = 0; centro < longitud; centro++) {
        // Expandir hacia la izquierda y la derecha desde el centro
        int izquierda = centro;
        int derecha = centro;

        while (izquierda >= 0 && derecha < longitud && cadena[izquierda] == cadena[derecha]) { // Verificar elementos iguales bajo condiciones de limite
            int longitudActual = derecha - izquierda + 1; // Longitud del palindromo actual
            if (longitudActual > maxLongitud) { // Verificar longitud para decidir si expandirse o no
                inicio = izquierda;
                maxLongitud = longitudActual; 
            }
            izquierda--;
            derecha++;
        }
    }

    printf("El palindromo mas grande es: "); // Imprimir el palíndromo
    for (int i = inicio; i < inicio + maxLongitud; i++) {
        printf("%c", cadena[i]);
    }
}

int main() {
    char cadena[] = "xxanitalavalatinayyy"; // Definir la cadena
    Palindromo(cadena);

    return 0;
}
