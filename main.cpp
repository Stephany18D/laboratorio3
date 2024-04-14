#include <iostream>
#include "problemas.h"

using namespace std;

int main() {
    cout << "\nLaboratorio2" << endl;
    cout << "Eliga una opcion:" << endl;
    cout<< "Punto 1 "<< endl;
    cout<< "Punto 2 "<< endl;
    cout<< "Punto 3 "<< endl;
    cout<< "Punto 4 "<< endl;
    cout<< "Punto 5 "<< endl;
    cout<< "Opcion: "<< endl;
    int opcion = 0;
    cin>> opcion;
    switch (opcion){

    case 1:
        ejercicio1();
        break;
    case 2:
        ejercicio2();
        break;
    case 3:
        ejercicio3();
        break;
    case 4:
        ejercicio4();
        break;
    case 5:
        ejercicio5();
        break;
    default:
        cout << "opcion no disponible"<< endl;
        break;


    }
    return 0;
}
