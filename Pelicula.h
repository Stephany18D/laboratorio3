#ifndef PELICULA_H
#define PELICULA_H
#include <iostream>
#include <string>

using namespace std;

class Duracion {
private:
    int horas;
    int minutos;
    int segundos;
public:
    Duracion(int h = 0, int m = 0, int s = 0);
    int getHoras();
    int getMinutos();
    int getSegundos();
    void setHoras(int h);
    void setMinutos(int m);
    void setSegundos(int s);
};

class Pelicula {
private:
    string nombre;
    string director;
    int anioLanzamiento;
    string genero;
    Duracion duracion;
public:
    Pelicula(string n = "", string d = "", int a = 0, string g = "", Duracion dur = Duracion());
    string getNombre();
    string getDirector();
    int getAnioLanzamiento();
    string getGenero();
    Duracion getDuracion();
    void setNombre(string n);
    void setDirector(string d);
    void setAnioLanzamiento(int a);
    void setGenero(string g);
    void setDuracion(Duracion dur);
};

#endif // PELICULA_H
