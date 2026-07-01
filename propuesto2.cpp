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

    int mayores50 = 0;
    int sumaEdades = 0;

    for (int i = 0; i < n; i++) {
        sumaEdades += personas[i].edad;

        if (personas[i].edad > 50) {
            mayores50++;
        }
    }

    float promedio = (float)sumaEdades / n;

    cout << "\nCantidad de personas mayores de 50 años: "<< mayores50 << endl;

    cout << "Promedio de edades: "<< promedio << endl;

    cout << "\nPERSONAS REGISTRADAS\n";

    for (int i = 0; i < n; i++) {
        cout << "\nPersona " << i + 1 << endl;
        cout << "Nombre: " << personas[i].nombre << endl;
        cout << "DNI: " << personas[i].dni << endl;
        cout << "Edad: " << personas[i].edad << endl;
    }

    return 0;
}