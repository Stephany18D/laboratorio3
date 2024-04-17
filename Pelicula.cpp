#include <iostream>
#include <string>
#include "Pelicula.h"

using namespace std;

Duracion::Duracion(int h, int m, int s) : horas(h), minutos(m), segundos(s) {}

int Duracion::getHoras() { return horas; }
int Duracion::getMinutos() { return minutos; }
int Duracion::getSegundos() { return segundos; }
void Duracion::setHoras(int h) { horas = h; }
void Duracion::setMinutos(int m) { minutos = m; }
void Duracion::setSegundos(int s) { segundos = s; }


Pelicula::Pelicula(string n, string d, int a, string g, Duracion dur)
    : nombre(n), director(d), anioLanzamiento(a), genero(g), duracion(dur) {}

string Pelicula::getNombre() { return nombre; }
string Pelicula::getDirector() { return director; }
int Pelicula::getAnioLanzamiento() { return anioLanzamiento; }
string Pelicula::getGenero() { return genero; }
Duracion Pelicula::getDuracion() { return duracion; }


void Pelicula::setNombre(string n) { nombre = n; }
void Pelicula::setDirector(string d) { director = d; }
void Pelicula::setAnioLanzamiento(int a) { anioLanzamiento = a; }
void Pelicula::setGenero(string g) { genero = g; }
void Pelicula::setDuracion(Duracion dur) { duracion = dur; }

