#include <iostream>
#include <unordered_map>
#include "codificar.h"
using namespace std;

int ejercicio4() {
    Codificar codificador;
    string rutaArchivoOrigen, rutaArchivoDestino, rutaArchivoCodigo;
    char opcion;

    cout << "Bienvenido al sistema decodificacion.\n";

    cout << "Introduce la ruta y el nombre del archivo de origen(ArchivoNormal): ";
    cin >> rutaArchivoOrigen;

    cout << "Introduce la ruta y el nombre del archivo final (Archivo_decodificado): ";
    cin >> rutaArchivoDestino;

    cout << "Introduce la ruta y el nombre del archivo de codigo(Archivo_codificado): ";
    cin >> rutaArchivoCodigo;

    cout << "¿Deseas codificar (c) o decodificar (d) el mensaje? ";
    cin >> opcion;

    switch(opcion) {
        case 'c':
        case 'C':
            codificador.codificarMensaje(rutaArchivoOrigen, rutaArchivoDestino, rutaArchivoCodigo);
            cout << "Mensaje codificado correctamente.\n";
            break;
        case 'd':
        case 'D':
            codificador.decodificarMensaje(rutaArchivoOrigen, rutaArchivoDestino, rutaArchivoCodigo);
            cout << "Mensaje decodificado correctamente.\n";
            break;
        default:
            cout << "Opción no valida. Por favor, vuelve a intentarlo.\n";
            return 1;
    }

    return 0;
}
