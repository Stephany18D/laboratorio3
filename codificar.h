#ifndef CODIFICAR_H
#define CODIFICAR_H
#include <string>
#include <map>
using namespace std;

class Codificar {
public:
    Codificar();
    void codificarMensaje(string rutaArchivoOrigen, string rutaArchivoDestino, string rutaArchivoCodigo);
    void decodificarMensaje(string rutaArchivoOrigen, string rutaArchivoDestino, string rutaArchivoCodigo);
private:
    map<char, char> cargarCodigo(string rutaArchivoCodigo);
};

#endif // CODIFICAR_H
