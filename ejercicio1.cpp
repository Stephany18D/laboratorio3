#include <iostream>
#include "cuentacorriente.h"

using namespace std;

int ejercicio1() {
    CuentaCorriente cuenta;
    int opcion;
    double cantidad;
    string dato;

    do {
        cout << "Bienvenido al sistema de cuentas corrientes" << endl;
        cout << "Eliga una opcion:" << endl;
        cout << "1. Crear cuenta y acceder a operaciones" << endl;
        cout << "2. Salir" << endl;
        cout << "Opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "\nCreacion de nueva cuenta\n";
                cout << "Ingrese nombre: ";
                cin >> dato;
                cuenta.setNombre(dato);

                cout << "Ingrese apellidos: ";
                cin >> dato;
                cuenta.setApellidos(dato);

                cout << "Ingrese direccion: ";
                cin >> dato;
                cuenta.setDireccion(dato);

                cout << "Ingrese telefono: ";
                cin >> dato;
                cuenta.setTelefono(dato);

                cout << "Ingrese saldo inicial: ";
                cin >> cantidad;
                cuenta.setSaldo(cantidad);

                cout << "Cuenta creada." << endl;

                do {
                    cout << "\nMenu de Cuenta Corriente\n";
                    cout << "Eliga una opcion:" << endl;
                    cout << "1. Consultar cuenta" << endl;
                    cout << "2. Ingresar dinero" << endl;
                    cout << "3. Retirar dinero" << endl;
                    cout << "4. Salir" << endl;
                    cout << "Opcion: ";
                    cin >> opcion;

                    switch (opcion) {
                        case 1:
                            cuenta.consultarCuenta();
                            break;
                        case 2:
                            cout << "Ingrese la cantidad a depositar: ";
                            cin >> cantidad;
                            cuenta.ingresarDinero(cantidad);
                            break;
                        case 3:
                            cout << "Ingrese la cantidad a retirar: ";
                            cin >> cantidad;
                            cuenta.retirarDinero(cantidad);
                            break;
                        case 4:
                            cout << "Saliendo del menu de cuenta corriente..." << endl;
                            break;
                        default:
                            cout << "Opción invalida. Intente de nuevo." << endl;
                    }
                } while (opcion != 4);
                break;

            case 2:
                cout << "Saliendo del sistema..." << endl;
                break;

            default:
                cout << "Opcion invlida. Intente de nuevo." << endl;
        }
    } while (opcion != 2);

    return 0;
}
