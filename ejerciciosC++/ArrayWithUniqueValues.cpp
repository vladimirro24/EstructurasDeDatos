#include <iostream>
#include <vector>
#include <set>

using namespace std;

bool ValoresUnicos(const vector<int> & arreglo) {
    set<int> valores;//Uso de set para almacenar valores unicos en orden ascendente

    for (int valor : arreglo) {
        auto resultado = valores.insert(valor); //Insertar valores actuales al nuevo conjunto de datos
        //auto para determinar el tipo de datos que se va insertar en base al valor transportando con .insert

        if (!resultado.second) {//False = valores no unicos
            return true; 
        }
    }
    return false; //Arreglo con valores unicos
}

int main(){
    vector <int> arreglo = {1,2,3,4,5900};
    //Determinar si el arreglo contiene valores unicos o no
    if(ValoresUnicos(arreglo)){
        cout << "El arreglo no contiene valores unicos";
    }else{
        cout << "El arreglo contiene valores unicos";
    }

    return 0;
}