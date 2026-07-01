#include <iostream>
#include <string>
using namespace std;

struct Persona {
    string nombre;
    int diaNacimiento;
    int mesNacimiento;
    int anioNacimiento;
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

        cout << "Dia de nacimiento: ";
        cin >> personas[i].diaNacimiento;

        cout << "Mes de nacimiento: ";
        cin >> personas[i].mesNacimiento;

        cout << "Anio de nacimiento: ";
        cin >> personas[i].anioNacimiento;

        cin.ignore();
    }

    int mes;

    do {

        cout << "\nIngrese un mes: ";
        cin >> mes;

        if (mes != 0) {

            cout << "\nCumplen años en el mes " << mes << ":\n";

            bool encontrado = false;

            for (int i = 0; i < n; i++) {

                if (personas[i].mesNacimiento == mes) {

                    cout << personas[i].nombre << " - "
                         << personas[i].diaNacimiento << "/"
                         << personas[i].mesNacimiento << "/"
                         << personas[i].anioNacimiento << endl;

                    encontrado = true;
                }
            }

            if (!encontrado) {
                cout << "No hay personas que cumplan años en ese mes." << endl;
            }
        }

    } while (mes != 0);

    return 0;
}