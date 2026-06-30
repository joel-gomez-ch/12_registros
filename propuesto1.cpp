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

    return 0;
}