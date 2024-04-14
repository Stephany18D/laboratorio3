#include "cuentacorriente.h"

CuentaCorriente::CuentaCorriente() {
  nombre = "";
  apellidos = "";
  direccion = "";
  telefono = "";
  saldo = 0;
}

CuentaCorriente::CuentaCorriente(string nombre, string apellidos, string direccion, string telefono, double saldo) {
  this->nombre = nombre;
  this->apellidos = apellidos;
  this->direccion = direccion;
  this->telefono = telefono;
  this->saldo = saldo;
}

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

void CuentaCorriente::retirarDinero(double cantidad) {
  if (cantidad > saldo) {
    cout << "Error: La cantidad que quiere retirar es mayor que el saldo actual." << endl;
  } else {
    saldo -= cantidad;
    cout << "Retiro realizado. Su nuevo saldo es: " << saldo << endl;
  }
}

void CuentaCorriente::ingresarDinero(double cantidad) {
  if (cantidad <= 0) {
    cout << "Error: ingresa un valor positivo." << endl;
  } else {
    saldo += cantidad;
    cout << "Ingreso realizado. Su nuevo saldo es: " << saldo << endl;
  }
}

void CuentaCorriente::consultarCuenta() {
  cout << "-------------------------------------------------------" << endl;
  cout << "Datos de la cuenta: " << endl;
  cout << "Nombre: " << nombre << endl;
  cout << "Apellidos: " << apellidos << endl;
  cout << "Direccion: " << direccion << endl;
  cout << "Telefono: " << telefono << endl;
  cout << "Saldo: " << saldo << endl;
  cout << "-------------------------------------------------------" << endl;
}

bool CuentaCorriente::saldoNegativo() {
  return saldo < 0;
}
