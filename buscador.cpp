#include "buscador.h"
#include <iostream>
#include <map>
#include <fstream>

using namespace std;

void buscador::leerArchivo(string rutaArchivo) {
    ifstream archivo(rutaArchivo);
    if (archivo.is_open()) {
        string linea;
        while (getline(archivo, linea)) {
            texto += linea + " ";
        }
        archivo.close();
    } else {
        cout << "Error al abrir el archivo." << endl;
    }
}

void buscador::buscarYContar(string secuencia) {
    size_t pos = 0;
    int contador = 0;
    while ((pos = texto.find(secuencia, pos)) != string::npos) {
        contador++;
        pos += secuencia.length();
    }
    resultados[secuencia] = contador;
}

void buscador::guardarResultado(string rutaArchivo) {
    ofstream archivoResultado(rutaArchivo);
    if (archivoResultado.is_open()) {
        archivoResultado << "Resultados de la busqueda:\n";
        for (auto& resultado : resultados) {
            archivoResultado << "La cadena \"" << resultado.first << "\" se repite " << resultado.second << " veces en el texto.\n";


        }
        archivoResultado.close();
        cout << "Resultados guardados en el archivo." << endl;
    } else {
        cout << "Error al guardar el archivo." << endl;
    }
}
