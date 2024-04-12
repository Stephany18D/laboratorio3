#include "cuentacorriente.h"

// Constructor por defecto
CuentaCorriente::CuentaCorriente() {
  nombre = "";
  apellidos = "";
  direccion = "";
  telefono = "";
  saldo = 0;
}

// Constructor con parámetros
CuentaCorriente::CuentaCorriente(string nombre, string apellidos, string direccion, string telefono, double saldo) {
  this->nombre = nombre;
  this->apellidos = apellidos;
  this->direccion = direccion;
  this->telefono = telefono;
  this->saldo = saldo;
}

// Setters y getters
void CuentaCorriente::setNombre(string nombre) {
  this->nombre = nombre;
}

string CuentaCorriente::getNombre() const {
  return nombre;
}

void CuentaCorriente::setApellidos(string apellidos) {
  this->apellidos = apellidos;
}

string CuentaCorriente::getApellidos() const {
  return apellidos;
}

void CuentaCorriente::setDireccion(string direccion) {
  this->direccion = direccion;
}

string CuentaCorriente::getDireccion() const {
  return direccion;
}

void CuentaCorriente::setTelefono(string telefono) {
  this->telefono = telefono;
}

string CuentaCorriente::getTelefono() const {
  return telefono;
}

void CuentaCorriente::setSaldo(double saldo) {
  this->saldo = saldo;
}

double CuentaCorriente::getSaldo() const {
  return saldo;
}

// Métodos
void CuentaCorriente::retirarDinero(double cantidad) {
  if (cantidad > saldo) {
    cout << "Error: La cantidad a retirar es mayor que el saldo disponible." << endl;
  } else {
    saldo -= cantidad;
    cout << "Retiro realizado con éxito. Su nuevo saldo es: " << saldo << endl;
  }
}

void CuentaCorriente::ingresarDinero(double cantidad) {
  if (cantidad <= 0) {
    cout << "Error: La cantidad a ingresar debe ser un valor positivo." << endl;
  } else {
    saldo += cantidad;
    cout << "Ingreso realizado con éxito. Su nuevo saldo es: " << saldo << endl;
  }
}

void CuentaCorriente::consultarCuenta() {
  cout << "-------------------------------------------------------" << endl;
  cout << "Nombre: " << nombre << " " << apellidos << endl;
  cout << "Dirección: " << direccion << endl;
  cout << "Teléfono: " << telefono << endl;
  cout << "Saldo: " << saldo << endl;
  cout << "-------------------------------------------------------" << endl;
}

bool CuentaCorriente::saldoNegativo() {
  return saldo < 0;
}
