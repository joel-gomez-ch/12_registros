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

    return 0;
}