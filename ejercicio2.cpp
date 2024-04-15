#include <iostream>
#include "archivotxt.h"

using namespace std;

int ejercicio2() {
    archivoTxt archivo;
    string ruta;
    int opcion;

    while (true) {
        cout << "\nMenu de archivo txt" << endl;
        cout << "Eliga una opcion:" << endl;
        cout << "1. Leer un archivo" << endl;
        cout << "2. Escribir en un archivo" << endl;
        cout << "3. Salir" << endl;
        cout << "Opcion: ";
        cin >> opcion;
        cin.ignore();


        switch (opcion) {
        case 1: {
            cout << "Ingrese la ruta del archivo: ";
            getline(cin, ruta);
            archivo.leer(ruta);
            break;
        }
        case 2: {
            cout << "Ingrese la ruta del archivo: ";
            getline(cin, ruta);
            archivo.escribir(ruta);
            break;
        }
        case 3: {
            cout << "Saliendo del programa.\n";
            return 0;
        }
        default: {
            cout << "Opcion no valida.\n";
            break;
        }
        }
    }
    return 0;
}
