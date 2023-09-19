#include <iostream>
#include <iomanip> // Necesario para std::setprecision

using namespace std;

void calculator(double n1, double n2){
    //Variables
    double sum = 0;
    double rest = 0;
    double multi = 0;
    double divi = 0;

    if (n1 > 0 && n2 > 0){
        // Verificar si el denominador es diferente de cero
        sum = n1 + n2;
        rest = n1 - n2;
        multi = n1 * n2;
        

        cout << "Resultado de la suma con " << sum << "\n";
        cout << "Resultado de la resta con " << rest << "\n";
        cout << "Resultado de la multiplcicacion con " << multi << "\n";
        if (n2 != 0) {
            // Realizar la división
            double divi = n1 / n2;

            // Establecer la precisión de salida
            int precision = 2; // Cantidad deseada de decimales
            cout << "Resultado de la división con " << precision << " decimales: ";
            cout << fixed << setprecision(precision) << divi;
        } else {
            cout << "Error: No se puede dividir por cero.";
        }
    }
    else{
        cout << "Ingresa números con valores para poder realizar operaciones";
    }

}

int main() {
    double numerador, denominador;

    // Solicitar al usuario que ingrese el numerador y el denominador
    cout << "Ingrese el numerador: ";
    cin >> numerador;

    cout << "Ingrese el denominador: ";
    cin >> denominador;

    calculator(numerador, denominador);
   
    return 0;
}
