#include <iostream>
#include <stack> // Libreria para usar pilas

using namespace std;

int main() {
    stack<int> myStack;
    myStack.push(1); // Insertar elementos
    myStack.push(2);
    myStack.push(3);

    while (!myStack.empty()) { 
        cout << myStack.top() << " ";
        myStack.pop();
    }
    cout << endl;

    return 0;
}
