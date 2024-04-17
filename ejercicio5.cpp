#include <iostream>
#include <fstream>
#include <algorithm>
#include "pelicula.h"
#define MAX_PELICULAS 100
using namespace std;

Pelicula peliculas[MAX_PELICULAS];
int numPeliculas = 0;

void ingresarPelicula() {
    string nombre, director, genero;
    int anio, horas, minutos, segundos;
    cout << "Nombre de la pelicula: ";
    cin >> nombre;
    cout << "Director: ";
    cin >> director;
    cout << "Ano de lanzamiento: ";
    cin >> anio;
    cout << "Genero: ";
    cin >> genero;
    cout << "Duracion (Primer horas, luego minutos y por ultimo segundos): ";
    cin >> horas >> minutos >> segundos;
    Duracion duracion(horas, minutos, segundos);
    Pelicula pelicula(nombre, director, anio, genero, duracion);
    peliculas[numPeliculas] = pelicula;
    numPeliculas++;

}
void eliminarPelicula() {
    string nombre;
    cout << "Nombre de la pelicula a eliminar: ";
    cin >> nombre;
    bool encontrada = false;
    int j = 0;
    for (int i = 0; i < numPeliculas; i++) {
        if (peliculas[i].getNombre() != nombre) {
            peliculas[j] = peliculas[i];
            j++;
        } else {
            encontrada = true;
        }
    }
    numPeliculas = j;
    if (encontrada) {
        cout << "Pelicula eliminada.\n";
    } else {
        cout << "Pelicula no encontrada.\n";
    }
}
void ordenarPeliculas() {
    for (int i = 0; i < numPeliculas - 1; i++) {
        for (int j = 0; j < numPeliculas - i - 1; j++) {
            if (peliculas[j].getNombre() > peliculas[j + 1].getNombre()) {
                Pelicula temp = peliculas[j];
                peliculas[j] = peliculas[j + 1];
                peliculas[j + 1] = temp;
            }
        }
    }
}
void modificarPelicula() {
    string nombre;
    cout << "Nombre de la pelicula a modificar: ";
    cin >> nombre;
    for (int i = 0; i < numPeliculas; i++) {
        if (peliculas[i].getNombre() == nombre) {
            string nuevoNombre, director, genero;
            int anio, horas, minutos, segundos;
            cout << "Nuevo nombre de la pelicula: ";
            cin >> nuevoNombre;
            peliculas[i].setNombre(nuevoNombre);
            cout << "Director: ";
            cin >> director;
            peliculas[i].setDirector(director);
            cout << "Ano de lanzamiento: ";
            cin >> anio;
            peliculas[i].setAnioLanzamiento(anio);
            cout << "Genero: ";
            cin >> genero;
            peliculas[i].setGenero(genero);
            cout << "Duracion (Primer horas, luego minutos y por ultimo segundos): ";
            cin >> horas >> minutos >> segundos;
            Duracion duracion(horas, minutos, segundos);
            peliculas[i].setDuracion(duracion);
            break;
        }
    }
}
void imprimirPeliculas() {

    if (numPeliculas == 0) {
        cout << "No hay peliculas para mostrar.\n";
        return;
    }

    cout << "\nLista de peliculas\n";

    for (int i = 0; i < numPeliculas; i++) {
        cout << "Pelicula " << i + 1 << ":\n";
        cout << "Nombre: " << peliculas[i].getNombre() << endl;
        cout << "Director: " << peliculas[i].getDirector() << endl;
        cout << "Ano de Lanzamiento: " << peliculas[i].getAnioLanzamiento() << endl;
        cout << "Genero: " << peliculas[i].getGenero() << endl;
        cout << "Duracion: " << peliculas[i].getDuracion().getHoras() << ":" << peliculas[i].getDuracion().getMinutos() << ":" << peliculas[i].getDuracion().getSegundos() << endl;
        cout << "\n";
    }
}
void guardarPeliculasEnArchivo() {
    ofstream archivo("peliculas.txt");
    if (!archivo.is_open()) {
        cout << "Error al abrir el archivo.\n";
        return;
    }
    for (int i = 0; i < numPeliculas; i++) {
        archivo << peliculas[i].getNombre() << "\n";
        archivo << peliculas[i].getDirector() << "\n";
        archivo << peliculas[i].getAnioLanzamiento() << "\n";
        archivo << peliculas[i].getGenero() << "\n";
        archivo << peliculas[i].getDuracion().getHoras() << "\n";
        archivo << peliculas[i].getDuracion().getMinutos() << "\n";
        archivo << peliculas[i].getDuracion().getSegundos() << "\n";
    }
    archivo.close();
    cout << "Peliculas guardadas en archivo.\n";
}

void cargarPeliculasDeArchivo() {
    ifstream archivo("peliculas.txt");
    if (!archivo.is_open()) {
        cout << "Error al abrir el archivo.\n";
        return;
    }
    string nombre, director, genero;
    int anio, horas, minutos, segundos;
    numPeliculas = 0;
    while (getline(archivo, nombre)) {
        getline(archivo, director);
        archivo >> anio;
        archivo.ignore();
        getline(archivo, genero);
        archivo >> horas;
        archivo.ignore();
        archivo >> minutos;
        archivo.ignore();
        archivo >> segundos;
        archivo.ignore();

        Duracion duracion(horas, minutos, segundos);
        Pelicula pelicula(nombre, director, anio, genero, duracion);
        peliculas[numPeliculas] = pelicula;
        numPeliculas++;

        if (archivo.eof()) {
            break;
        }
    }
    archivo.close();
    cout << "Peliculas cargadas en el archivo.\n";
}
int ejercicio5() {
    int opcion;
    do {
        cout << "\nMenu\n";
        cout << "1. Ingresar nueva pelicula\n";
        cout << "2. Eliminar pelicula\n";
        cout << "3. Ordenar peliculas\n";
        cout << "4. Modificar pelicula\n";
        cout << "5. Imprimir lista de peliculas\n";
        cout << "6. Guardar peliculas en archivo\n";
        cout << "7. Cargar peliculas de archivo\n";
        cout << "8. Salir\n";
        cout << "Opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                ingresarPelicula();
                break;
            case 2:
                eliminarPelicula();
                break;
            case 3:
                ordenarPeliculas();
                break;
            case 4:
                modificarPelicula();
                break;
            case 5:
                imprimirPeliculas();
                break;
            case 6:
                guardarPeliculasEnArchivo();
                break;
            case 7:
                cargarPeliculasDeArchivo();
                break;
            case 8:
                cout << "Saliendo del programa..\n";
                break;
            default:
                cout << "Opcion no valida.\n";
        }

    } while (opcion != 8);
    return 0;
}
