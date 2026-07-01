#include <iostream>
#include <string>
using namespace std;

struct Atleta {
    string nombre;
    string pais;
    string disciplina;
    int medallas;
};

int main() {

    int n;
    Atleta atletas[100];

    cout << "Ingrese la cantidad de atletas: ";
    cin >> n;
    cin.ignore();

    for (int i = 0; i < n; i++) {

        cout << "\nAtleta " << i + 1 << endl;

        cout << "Nombre: ";
        getline(cin, atletas[i].nombre);

        cout << "Pais: ";
        getline(cin, atletas[i].pais);

        cout << "Disciplina: ";
        getline(cin, atletas[i].disciplina);

        cout << "Numero de medallas: ";
        cin >> atletas[i].medallas;
        cin.ignore();
    }

    string paisBuscado;

    cout << "\nIngrese el nombre del pais: ";
    getline(cin, paisBuscado);

    bool encontrado = false;
    int mayor = -1;

    cout << "\nATLETAS DEL PAIS " << paisBuscado << endl;

    for (int i = 0; i < n; i++) {

        if (atletas[i].pais == paisBuscado) {

            cout << "\nNombre: " << atletas[i].nombre << endl;
            cout << "Disciplina: " << atletas[i].disciplina << endl;
            cout << "Medallas: " << atletas[i].medallas << endl;

            encontrado = true;

            if (mayor == -1 || atletas[i].medallas > atletas[mayor].medallas) {
                mayor = i;
            }
        }
    }

    if (!encontrado) {

        cout << "\nNo hay atletas registrados de ese pais." << endl;

    } else {

        cout << "\nATLETA CON MAYOR NUMERO DE MEDALLAS" << endl;
        cout << "Nombre: " << atletas[mayor].nombre << endl;
        cout << "Pais: " << atletas[mayor].pais << endl;
        cout << "Disciplina: " << atletas[mayor].disciplina << endl;
        cout << "Medallas: " << atletas[mayor].medallas << endl;

    }

    return 0;
}