#include <iostream>
#include <unordered_set> // Para ayudar a detectar duplicados

using namespace std;

// Definición de la estructura del nodo
struct Node {
    int data;
    Node* next;
};

// Función para eliminar elementos duplicados de una lista enlazada no ordenada
void removeDuplicates(Node* head) {
    unordered_set<int> seen_values; // Utilizamos un conjunto para almacenar los valores únicos

    Node* current = head;
    Node* previous = nullptr;

    while (current != nullptr) {
        if (seen_values.count(current->data) > 0) {
            // Este valor ya se ha visto, es un duplicado, eliminamos el nodo
            previous->next = current->next;
            delete current;
            current = previous->next;
        } else {
            // Este valor es único, lo añadimos al conjunto y avanzamos
            seen_values.insert(current->data);
            previous = current;
            current = current->next;
        }
    }
}

int main() {
    // Crear nodos con elementos duplicados
    Node* head = new Node();
    head->data = 1;

    Node* second = new Node();
    second->data = 2;

    Node* third = new Node();
    third->data = 3;

    Node* fourth = new Node();
    fourth->data = 1;

    // Enlazar los nodos
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = nullptr;

    // Eliminar elementos duplicados
    removeDuplicates(head);

    // Recorrer e imprimir la lista enlazada resultante
    Node* current = head;
    while (current != nullptr) {
        cout << current->data << " -> ";
        current = current->next;
    }
    cout << "nullptr" << endl;

    // Liberar la memoria asignada para los nodos
    delete head;
    delete second;
    delete third;
    delete fourth;

    return 0;
}
