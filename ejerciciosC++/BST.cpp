#include <iostream>

using namespace std;
// Definición de la estructura del nodo del árbol binario de búsqueda
struct TreeNode {
    int data;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int val) : data(val), left(nullptr), right(nullptr) {}
};

// Función para realizar la búsqueda binaria en un BST
bool searchBST(TreeNode* root, int target) {
    if (root == nullptr) {
        return false; // El árbol está vacío o el valor no se encuentra
    }

    if (root->data == target) {
        return true; // Encontramos el valor
    } else if (root->data > target) {
        // Si el valor en el nodo actual es mayor que el objetivo,
        // realizamos la búsqueda en el subárbol izquierdo
        return searchBST(root->left, target);
    } else {
        // Si el valor en el nodo actual es menor que el objetivo,
        // realizamos la búsqueda en el subárbol derecho
        return searchBST(root->right, target);
    }
}

int main() {
    // Construir un árbol binario de búsqueda
    TreeNode* root = new TreeNode(4);
    root->left = new TreeNode(2);
    root->right = new TreeNode(6);
    root->left->left = new TreeNode(1);
    root->left->right = new TreeNode(3);
    root->right->left = new TreeNode(5);
    root->right->right = new TreeNode(7);

    int target = 1;

    // Realizar la búsqueda binaria en el árbol binario de búsqueda
    if (searchBST(root, target)) {
        cout << target << " se encuentra en el arbol binario de busqueda." << endl;
    } else {
        cout << target << " no se encuentra en el arbol binario de busqueda." << endl;
    }

    // Liberar la memoria asignada para los nodos del árbol
    delete root->left->left;
    delete root->left->right;
    delete root->right->left;
    delete root->right->right;
    delete root;

    return 0;
}
