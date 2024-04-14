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
  CuentaCorriente();

  CuentaCorriente(string nombre, string apellidos, string direccion, string telefono, double saldo);

  void setNombre(string nombre);
  string getNombre() const;

  void setApellidos(string apellidos);
  string getApellidos() const;

  void setDireccion(string direccion);
  string getDireccion() const;

  void setTelefono(string telefono);
  string getTelefono() const;

  void setSaldo(double saldo);
  double getSaldo() const;

  void retirarDinero(double cantidad);
  void ingresarDinero(double cantidad);
  void consultarCuenta();
  bool saldoNegativo();
};


#endif // CUENTACORRIENTE_H
