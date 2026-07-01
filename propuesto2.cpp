#include <iostream>
#include <string>
using namespace std;

struct Persona {
    string nombre;
    string dni;
    int edad;
};

int main() {
    int n;
    Persona personas[100];

    cout << "Ingrese la cantidad de personas: ";
    cin >> n;
    cin.ignore();

    for (int i = 0; i < n; i++) {
        cout << "\nPersona " << i + 1 << endl;

        cout << "Nombre: ";
        getline(cin, personas[i].nombre);

        cout << "DNI: ";
        getline(cin, personas[i].dni);

        cout << "Edad: ";
        cin >> personas[i].edad;
        cin.ignore();
    }

    return 0;
}