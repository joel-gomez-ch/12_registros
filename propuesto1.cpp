#include <iostream>
#include <string>
using namespace std;

struct Empleado {
    string nombre;
    string sexo;
    float sueldo;
};

int main() {
    int n;
    Empleado empleados[100];

    cout << "Ingrese la cantidad de trabajadores: ";
    cin >> n;
    cin.ignore();

    for (int i = 0; i < n; i++) {
        cout << "\nEmpleado " << i + 1 << endl;

        cout << "Nombre: ";
        getline(cin, empleados[i].nombre);

        cout << "Sexo: ";
        getline(cin, empleados[i].sexo);

        cout << "Sueldo: ";
        cin >> empleados[i].sueldo;
        cin.ignore();
    }

    int mayor = 0;
    int menor = 0;

    for (int i = 1; i < n; i++) {
        if (empleados[i].sueldo > empleados[mayor].sueldo) {
            mayor = i;
        }

        if (empleados[i].sueldo < empleados[menor].sueldo) {
            menor = i;
        }
    }

    cout << "\nEMPLEADO CON MAYOR SUELDO\n";
    cout << "Nombre: " << empleados[mayor].nombre << endl;
    cout << "Sexo: " << empleados[mayor].sexo << endl;
    cout << "Sueldo: " << empleados[mayor].sueldo << endl;

    cout << "\nEMPLEADO CON MENOR SUELDO\n";
    cout << "Nombre: " << empleados[menor].nombre << endl;
    cout << "Sexo: " << empleados[menor].sexo << endl;
    cout << "Sueldo: " << empleados[menor].sueldo << endl;

    return 0;
}