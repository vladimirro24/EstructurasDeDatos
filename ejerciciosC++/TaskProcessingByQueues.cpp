/*Simulación de procesamiento en una cola: Simula un sistema de procesamiento de tareas utilizando una cola. 
Puedes representar tareas como objetos y encolarlas en una cola. Luego, desencola y procesa las tareas en el orden en que se agregaron.*/
#include <iostream>
#include <queue>

using namespace std;

int main(){

    queue<string> task;

    task.push("Wake up");
    task.push("Have breakfast");
    task.push("Brush the teeth");
    task.push("Going to the School");

    int i = 0;
    while(!task.empty()){
        i++;
        cout << "Task " << i << ": "<<task.front() << "\n";
        task.pop();
    }

    return 0;
}