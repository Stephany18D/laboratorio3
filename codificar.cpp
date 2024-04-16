#include "codificar.h"
#include <iostream>
#include <fstream>
using namespace std;

Codificar::Codificar() {}

map<char, char> Codificar::cargarCodigo(string rutaArchivoCodigo) {
    map<char, char> codigo;
    ifstream archivoCodigo(rutaArchivoCodigo);
    char clave, valor;
    while (archivoCodigo >> clave >> valor) {
        codigo.insert(make_pair(clave, valor));
    }
    archivoCodigo.close();
    return codigo;
}

void Codificar::codificarMensaje(string rutaArchivoOrigen, string rutaArchivoDestino, string rutaArchivoCodigo) {
    map<char, char> codigo = cargarCodigo(rutaArchivoCodigo);
    ifstream archivoOrigen(rutaArchivoOrigen);
    ofstream archivoDestino(rutaArchivoDestino);
    char letra;
    while (archivoOrigen.get(letra)) {
        auto it = codigo.find(letra);
        if (it != codigo.end()) {
            archivoDestino << it->second;
        } else {
            archivoDestino << letra;
        }
    }
    archivoOrigen.close();
    archivoDestino.close();
}

void Codificar::decodificarMensaje(string rutaArchivoOrigen, string rutaArchivoDestino, string rutaArchivoCodigo) {
    map<char, char> codigo = cargarCodigo(rutaArchivoCodigo);
    ifstream archivoOrigen(rutaArchivoOrigen);
    ofstream archivoDestino(rutaArchivoDestino);
    char letra;
    while (archivoOrigen.get(letra)) {
        for (auto& par : codigo) {
            if (par.second == letra) {
                archivoDestino << par.first;
                break;
            }
        }
    }
    archivoOrigen.close();
    archivoDestino.close();
}
