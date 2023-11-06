#include <iostream>
#include <string>
#include <stack>
#include <vector>

using namespace std;

bool checkparenthesis(const string cadena){
    // Creamos una pila para rastrear los símbolos de apertura
    stack<char> pila;

    // Iteramos a través de la cadena
    for (char c : cadena) {
        if (c == '(' || c == '[' || c == '{') {
            // Si encontramos un símbolo de apertura, lo agregamos a la pila
            pila.push(c);
        } else if (c == ')' || c == ']' || c == '}') {
            // Si encontramos un símbolo de cierre, verificamos si la pila no está vacía
            if (pila.empty()) {
                return false; // Cierre sin una correspondiente apertura
            }
            // Obtenemos el símbolo de apertura más reciente de la pila
            char apertura = pila.top();
            pila.pop(); // Eliminamos el símbolo de apertura de la pila

            // Comparamos el símbolo de cierre con el de apertura correspondiente
            if ((c == ')' && apertura != '(') || (c == ']' && apertura != '[') || (c == '}' && apertura != '{')) {
                return false; // El símbolo de cierre no coincide con la apertura
            }
        }
    }
    // Al final, si la pila está vacía, significa que todos los símbolos se abrieron y cerraron correctamente
    return pila.empty();
}

int main(){
    string str1 = "{esta (es [una] } prueba )";
    string str2 = "{esta (es [una] ) prueba }";

    //Recibir true(1) o false(0) despues de evaluar las cadenas
    bool resultado1 = checkparenthesis(str1);
    bool resultado2 = checkparenthesis(str2);

    cout << "La primera cadena es " << resultado1 << " por como cierra sus parentesis\n";

    cout << "La segunda cadena es " << resultado2 << " por como cierra sus parentesis";

    return 0;
}