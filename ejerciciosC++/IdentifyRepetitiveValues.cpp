#include <iostream>
#include <vector>
#include <set>
#include <locale>

using namespace std;

void encontrarNumerosRepetidos(const vector<int>& lista) {
    set<int> numerosUnicos;
    set<int> numerosRepetidos;

    for (int numero : lista) {
        // Si el número ya está en el set de números únicos, es un duplicado
        if (numerosUnicos.find(numero) != numerosUnicos.end()) {
            numerosRepetidos.insert(numero);
        } else {
            numerosUnicos.insert(numero);
        }
    }

    // Imprimir los números repetidos
    cout << "Números repetidos en la lista: ";
    for (int numero : numerosRepetidos) {
        cout << numero << " ";
    }
    cout << endl;
}

int main() {
    vector<int> lista = {1, 2, 2, 3, 4, 4, 5, 6, 6};
    encontrarNumerosRepetidos(lista);
    return 0;
}
