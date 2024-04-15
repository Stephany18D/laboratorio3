#ifndef BUSCADOR_H
#define BUSCADOR_H
#include <iostream>
#include <map>
#include <fstream>

using namespace std;
class buscador{
private:
    string texto;
    map<string, int> resultados;
public:
    void leerArchivo(string rutaArchivo);
    void buscarYContar(string secuencia);
    void guardarResultado(string rutaArchivo);

};


#endif // BUSCADOR_H
