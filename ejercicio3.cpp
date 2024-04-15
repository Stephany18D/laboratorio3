#include <iostream>
#include "buscador.h"

using namespace std;

int ejercicio3() {
    buscador buscador;
    string rutaArchivo, secuencia, rutaResultado;
    int repeticiones;

    cout << "Ingrese la ruta del archivo de texto: ";
    cin >> rutaArchivo;
    buscador.leerArchivo(rutaArchivo);

    cout << "Ingrese el caracter que quiere buscar: ";
    cin.ignore();
    getline(cin, secuencia);

    cout << "Ingrese el numero de repeticiones a buscar: ";
    cin >> repeticiones;

    buscador.buscarYContar(secuencia);

    cout << "Ingrese la ruta y nombre del archivo para guardar los resultados: ";
    cin >> rutaResultado;

    buscador.guardarResultado(rutaResultado);

    return 0;
}
