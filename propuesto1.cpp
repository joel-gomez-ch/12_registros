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

    return 0;
}