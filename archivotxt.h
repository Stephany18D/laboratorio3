#ifndef ARCHIVOTXT_H
#define ARCHIVOTXT_H
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class archivoTxt{
public:
    void leer(const string& ruta);
    void escribir(const string& ruta);
};

#endif // ARCHIVOTXT_H
