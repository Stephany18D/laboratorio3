#ifndef CUENTACORRIENTE_H
#define CUENTACORRIENTE_H
#include <iostream>
#include <string>

using namespace std;

class CuentaCorriente {
private:
  string nombre;
  string apellidos;
  string direccion;
  string telefono;
  double saldo;

public:
  // Constructor por defecto
  CuentaCorriente();

  // Constructor con parámetros
  CuentaCorriente(string nombre, string apellidos, string direccion, string telefono, double saldo);

  // Setters
  void setNombre(string nombre);
  void setApellidos(string apellidos);
  void setDireccion(string direccion);
  void setTelefono(string telefono);
  void setSaldo(double saldo);

  // Getters
  string getNombre() const;
  string getApellidos() const;
  string getDireccion() const;
  string getTelefono() const;
  double getSaldo() const;

  // Métodos
  void retirarDinero(double cantidad);
  void ingresarDinero(double cantidad);
  void consultarCuenta();
  bool saldoNegativo();
};


#endif // CUENTACORRIENTE_H
