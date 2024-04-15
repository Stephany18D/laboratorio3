#include "archivotxt.h"
#include <iostream>
#include <fstream>

using namespace std;
void archivoTxt::leer(const string& ruta) {
    ifstream archivo(ruta);
    if (archivo.is_open()) {
        string linea;
        while (getline(archivo, linea)) {
            cout << linea << '\n';
        }
        archivo.close();
    } else {
        cout << "No se pudo abrir el archivo: " << ruta << '\n';
    }
}

void archivoTxt::escribir(const string& ruta) {
    ofstream archivo(ruta, ios::app);
    if (archivo.is_open()) {
        string texto;
        do {
            cout << "Ingrese el texto a escribir (o 'q' para terminar): ";
            getline(cin, texto);
            if (texto != "q") {
                archivo << texto << '\n';
            }
        } while (texto != "q");
        archivo.close();
    } else {
        cout << "No se pudo abrir el archivo: " << ruta << '\n';
    }
}
